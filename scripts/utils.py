import os
import argparse

parser = argparse.ArgumentParser(description='Run e2e dynamic trace experiments')
parser.add_argument('--test', action='store_true', help='Run a test experiment')
args = parser.parse_args()

src = os.path.dirname(os.path.abspath(__file__))
root = os.path.dirname(src)
main = os.path.join(root, 'sarathi-lean', 'sarathi', 'benchmark', 'main.py')

static_experiment_dir = os.path.join(root, 'experiments', 'e2e_static_eval')
dynamic_experiment_dir = os.path.join(root, 'experiments', 'e2e_dynamic_eval')

# dataset_subpath = 'data/processed_traces/sharegpt_8k_filtered_stats_llama2_tokenizer.csv'
# dataset_name = 'sharegpt'
dataset_subpath = 'data/processed_traces/arxiv_summarization_filtered_stats_llama2_tokenizer.csv'
dataset_name = 'arxiv'

# upper limit on maximum context length for dynamic traces
MAX_CONTEXT_LENGTH_DYNAMIC_TRACES = 32768

models = {
    '01-ai/Yi-6B-200k': {'tp': 1, 'logentry': 'yi-6b'},
    'meta-llama/Meta-Llama-3-8B': {'tp': 2, 'logentry': 'llama-3-8b'},
    '01-ai/Yi-34B-200k': {'tp': 2, 'logentry': 'yi-34b'}
}

# vattention allocates memory in power of two while fa_paged/fi_paged
# sometimes run into illegal memory access if context length is more than
# a certain limit (e.g., 200K) and rope scaling is applied (observed for yi-6B).
# Hence, we set max context length as per the experiment to get around this problem.
# TODO(ashish) Fix it.
def get_max_context_length(attn_backend, context_len):
    if context_len & (context_len - 1) == 0:
        return context_len
    if '_paged' in attn_backend.lower():
        return min(200000, 2 ** (context_len.bit_length() + 1))
    return 2 ** (context_len.bit_length() + 1)

def get_paths():
    return src, root, main

def extract_substr(log, start_sub, end_sub):
    start_index = log.find(start_sub)
    if start_index == -1:
        return None
    start_index += len(start_sub)

    end_index = log.find(end_sub, start_index)
    if end_index == -1:
        return None

    return log[start_index:end_index].strip("/")

def get_output_files(experiment_dir, log_file='sequence_metrics.csv'):
    logs = []
    for dirpath, dirnames, filenames in os.walk(experiment_dir):
        for filename in filenames:
            log = os.path.join(dirpath, filename)
            if log.endswith(log_file):
                logs.append(log)
    return logs