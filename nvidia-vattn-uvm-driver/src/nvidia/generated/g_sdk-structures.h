/*
 * SPDX-FileCopyrightText: Copyright (c) 2008-2023 NVIDIA CORPORATION & AFFILIATES. All rights reserved.
 * SPDX-License-Identifier: MIT
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 */
/*
 * WARNING: This is an autogenerated file. DO NOT EDIT.
 * This file is generated using below files:
 * template file: kernel/inc/vgpu/gt_sdk-structures.h
 * definition file: kernel/inc/vgpu/sdk-structures.def
 */


#ifdef SDK_STRUCTURES
// These are copy of sdk structures, that will be used for the communication between the vmioplugin & guest RM.
// #if condition can be removed when this file is included in OpenRM-Orin build.
#include "vgpu/sdk-structures.h"
typedef struct NV0080_CTRL_DMA_SET_PAGE_DIRECTORY_PARAMS_v03_00
{
    NvU64      physAddress NV_ALIGN_BYTES(8);
    NvU32      numEntries;
    NvU32      flags;
    NvHandle   hVASpace;
    NvU32      chId;
    NvU32      subDeviceId;
} NV0080_CTRL_DMA_SET_PAGE_DIRECTORY_PARAMS_v03_00;

typedef struct NV0080_CTRL_DMA_SET_PAGE_DIRECTORY_PARAMS_v1E_05
{
    NvU64      physAddress NV_ALIGN_BYTES(8);
    NvU32      numEntries;
    NvU32      flags;
    NvHandle   hVASpace;
    NvU32      chId;
    NvU32      subDeviceId;
    NvU32      pasid;
} NV0080_CTRL_DMA_SET_PAGE_DIRECTORY_PARAMS_v1E_05;

typedef NV0080_CTRL_DMA_SET_PAGE_DIRECTORY_PARAMS_v1E_05 NV0080_CTRL_DMA_SET_PAGE_DIRECTORY_PARAMS_v;

typedef struct NV0080_CTRL_DMA_UPDATE_PDE_2_PAGE_TABLE_PARAMS_v03_00
{
    NvU64      physAddr NV_ALIGN_BYTES(8);
    NvU32      numEntries;
    NvU32      aperture;
} NV0080_CTRL_DMA_UPDATE_PDE_2_PAGE_TABLE_PARAMS_v03_00;

typedef NV0080_CTRL_DMA_UPDATE_PDE_2_PAGE_TABLE_PARAMS_v03_00 NV0080_CTRL_DMA_UPDATE_PDE_2_PAGE_TABLE_PARAMS_v;

typedef struct NV0080_CTRL_DMA_UPDATE_PDE_2_PARAMS_v03_00
{
    NvU32      pdeIndex;
    NvU32      flags;
    NV0080_CTRL_DMA_UPDATE_PDE_2_PAGE_TABLE_PARAMS_v03_00 ptParams[NV0080_CTRL_DMA_UPDATE_PDE_2_PT_IDX__SIZE];
    NvHandle   hVASpace;
    NvP64      pPdeBuffer NV_ALIGN_BYTES(8);
    NvU32      subDeviceId;
} NV0080_CTRL_DMA_UPDATE_PDE_2_PARAMS_v03_00;

typedef NV0080_CTRL_DMA_UPDATE_PDE_2_PARAMS_v03_00 NV0080_CTRL_DMA_UPDATE_PDE_2_PARAMS_v;

typedef struct NVOS00_PARAMETERS_v03_00
{
    NvHandle   hRoot;
    NvHandle   hObjectParent;
    NvHandle   hObjectOld;
    NvV32      status;
} NVOS00_PARAMETERS_v03_00;

typedef NVOS00_PARAMETERS_v03_00 NVOS00_PARAMETERS_v;

typedef struct NVOS46_PARAMETERS_v03_00
{
    NvHandle   hClient;
    NvHandle   hDevice;
    NvHandle   hDma;
    NvHandle   hMemory;
    NvU64      offset NV_ALIGN_BYTES(8);
    NvU64      length NV_ALIGN_BYTES(8);
    NvV32      flags;
    NvU64      dmaOffset NV_ALIGN_BYTES(8);
    NvV32      status;
} NVOS46_PARAMETERS_v03_00;

typedef NVOS46_PARAMETERS_v03_00 NVOS46_PARAMETERS_v;

typedef struct NVOS47_PARAMETERS_v03_00
{
    NvHandle   hClient;
    NvHandle   hDevice;
    NvHandle   hDma;
    NvHandle   hMemory;
    NvV32      flags;
    NvU64      dmaOffset NV_ALIGN_BYTES(8);
    NvV32      status;
} NVOS47_PARAMETERS_v03_00;

typedef NVOS47_PARAMETERS_v03_00 NVOS47_PARAMETERS_v;

typedef struct NVOS55_PARAMETERS_v03_00
{
    NvHandle   hClient;
    NvHandle   hParent;
    NvHandle   hObject;
    NvHandle   hClientSrc;
    NvHandle   hObjectSrc;
    NvU32      flags;
    NvU32      status;
} NVOS55_PARAMETERS_v03_00;

typedef NVOS55_PARAMETERS_v03_00 NVOS55_PARAMETERS_v;

typedef struct NV2080_CTRL_GR_ROUTE_INFO_v12_01
{
    NvU32      flags;
    NvU64      route NV_ALIGN_BYTES(8);
} NV2080_CTRL_GR_ROUTE_INFO_v12_01;

typedef NV2080_CTRL_GR_ROUTE_INFO_v12_01 NV2080_CTRL_GR_ROUTE_INFO_v;

typedef struct NV2080_CTRL_GPU_EXEC_REG_OPS_PARAMS_v03_00
{
    NvHandle   hClientTarget;
    NvHandle   hChannelTarget;
    NvU32      reserved00[3];
    NvU32      regOpCount;
    NvP64      regOps NV_ALIGN_BYTES(8);
} NV2080_CTRL_GPU_EXEC_REG_OPS_PARAMS_v03_00;

typedef struct NV2080_CTRL_GPU_EXEC_REG_OPS_PARAMS_v12_01
{
    NvHandle   hClientTarget;
    NvHandle   hChannelTarget;
    NvU32      reserved00[3];
    NvU32      regOpCount;
    NV2080_CTRL_GR_ROUTE_INFO_v12_01 grRouteInfo;
    NvP64      regOps NV_ALIGN_BYTES(8);
} NV2080_CTRL_GPU_EXEC_REG_OPS_PARAMS_v12_01;

typedef NV2080_CTRL_GPU_EXEC_REG_OPS_PARAMS_v12_01 NV2080_CTRL_GPU_EXEC_REG_OPS_PARAMS_v;

typedef struct NV2080_CTRL_GPU_REG_OP_v03_00
{
    NvU8       regOp;
    NvU8       regType;
    NvU8       regStatus;
    NvU8       regQuad;
    NvU32      regGroupMask;
    NvU32      regSubGroupMask;
    NvU32      regOffset;
    NvU32      regValueHi;
    NvU32      regValueLo;
    NvU32      regAndNMaskHi;
    NvU32      regAndNMaskLo;
} NV2080_CTRL_GPU_REG_OP_v03_00;

typedef NV2080_CTRL_GPU_REG_OP_v03_00 NV2080_CTRL_GPU_REG_OP_v;

typedef struct NV2080_CTRL_PERF_GPUMON_ENGINE_UTIL_SAMPLE_v06_01
{
    NvU32      util;
    NvU32      procId;
} NV2080_CTRL_PERF_GPUMON_ENGINE_UTIL_SAMPLE_v06_01;

typedef struct NV2080_CTRL_PERF_GPUMON_ENGINE_UTIL_SAMPLE_v17_00
{
    NvU32      util;
    NvU32      procId;
    NvU32      subProcessID;
} NV2080_CTRL_PERF_GPUMON_ENGINE_UTIL_SAMPLE_v17_00;

typedef NV2080_CTRL_PERF_GPUMON_ENGINE_UTIL_SAMPLE_v17_00 NV2080_CTRL_PERF_GPUMON_ENGINE_UTIL_SAMPLE_v;

typedef struct NV2080_CTRL_PERF_GPUMON_PERFMON_UTIL_SAMPLE_v06_01
{
    NvU64      timeStamp NV_ALIGN_BYTES(8);
    NV2080_CTRL_PERF_GPUMON_ENGINE_UTIL_SAMPLE_v06_01 fb;
    NV2080_CTRL_PERF_GPUMON_ENGINE_UTIL_SAMPLE_v06_01 gr;
    NV2080_CTRL_PERF_GPUMON_ENGINE_UTIL_SAMPLE_v06_01 nvenc;
    NV2080_CTRL_PERF_GPUMON_ENGINE_UTIL_SAMPLE_v06_01 nvdec;
} NV2080_CTRL_PERF_GPUMON_PERFMON_UTIL_SAMPLE_v06_01;

typedef struct NV2080_CTRL_PERF_GPUMON_PERFMON_UTIL_SAMPLE_v17_00
{
    NvU64      timeStamp NV_ALIGN_BYTES(8);
    NV2080_CTRL_PERF_GPUMON_ENGINE_UTIL_SAMPLE_v17_00 fb;
    NV2080_CTRL_PERF_GPUMON_ENGINE_UTIL_SAMPLE_v17_00 gr;
    NV2080_CTRL_PERF_GPUMON_ENGINE_UTIL_SAMPLE_v17_00 nvenc;
    NV2080_CTRL_PERF_GPUMON_ENGINE_UTIL_SAMPLE_v17_00 nvdec;
} NV2080_CTRL_PERF_GPUMON_PERFMON_UTIL_SAMPLE_v17_00;

typedef struct NV2080_CTRL_PERF_GPUMON_PERFMON_UTIL_SAMPLE_v1F_0E
{
    NvU64      timeStamp NV_ALIGN_BYTES(8);
    NV2080_CTRL_PERF_GPUMON_ENGINE_UTIL_SAMPLE_v17_00 fb;
    NV2080_CTRL_PERF_GPUMON_ENGINE_UTIL_SAMPLE_v17_00 gr;
    NV2080_CTRL_PERF_GPUMON_ENGINE_UTIL_SAMPLE_v17_00 nvenc;
    NV2080_CTRL_PERF_GPUMON_ENGINE_UTIL_SAMPLE_v17_00 nvdec;
} NV2080_CTRL_PERF_GPUMON_PERFMON_UTIL_SAMPLE_v1F_0E;

typedef NV2080_CTRL_PERF_GPUMON_PERFMON_UTIL_SAMPLE_v1F_0E NV2080_CTRL_PERF_GPUMON_PERFMON_UTIL_SAMPLE_v;

typedef struct NV2080_CTRL_PERF_GET_GPUMON_PERFMON_UTIL_SAMPLES_V2_PARAMS_v17_00
{
    NvU8       type;
    NvU32      bufSize;
    NvU32      count;
    NvU32      tracker;
    NV2080_CTRL_PERF_GPUMON_PERFMON_UTIL_SAMPLE_v17_00 samples[NV2080_CTRL_PERF_GPUMON_SAMPLE_COUNT_PERFMON_UTIL];
} NV2080_CTRL_PERF_GET_GPUMON_PERFMON_UTIL_SAMPLES_V2_PARAMS_v17_00;

typedef struct NV2080_CTRL_PERF_GET_GPUMON_PERFMON_UTIL_SAMPLES_V2_PARAMS_v1F_0E
{
    NvU8       type;
    NvU32      bufSize;
    NvU32      count;
    NvU32      tracker;
    NV2080_CTRL_PERF_GPUMON_PERFMON_UTIL_SAMPLE_v1F_0E samples[NV2080_CTRL_PERF_GPUMON_SAMPLE_COUNT_PERFMON_UTIL_v1F_0E];
} NV2080_CTRL_PERF_GET_GPUMON_PERFMON_UTIL_SAMPLES_V2_PARAMS_v1F_0E;

typedef NV2080_CTRL_PERF_GET_GPUMON_PERFMON_UTIL_SAMPLES_V2_PARAMS_v1F_0E NV2080_CTRL_PERF_GET_GPUMON_PERFMON_UTIL_SAMPLES_V2_PARAMS_v;

typedef struct NV2080_CTRL_INTERNAL_PERF_GPU_BOOST_SYNC_SET_LIMITS_PARAMS_v17_00
{
    NvU32      flags;
    NvBool     bBridgeless;
    NvU32      currLimits[NV2080_CTRL_INTERNAL_PERF_SYNC_GPU_BOOST_LIMITS_NUM];
} NV2080_CTRL_INTERNAL_PERF_GPU_BOOST_SYNC_SET_LIMITS_PARAMS_v17_00;

typedef NV2080_CTRL_INTERNAL_PERF_GPU_BOOST_SYNC_SET_LIMITS_PARAMS_v17_00 NV2080_CTRL_INTERNAL_PERF_GPU_BOOST_SYNC_SET_LIMITS_PARAMS_v;

typedef struct UpdateBarPde_v15_00
{
    NV_RPC_UPDATE_PDE_BAR_TYPE barType;
    NvU64      entryValue NV_ALIGN_BYTES(8);
    NvU64      entryLevelShift NV_ALIGN_BYTES(8);
} UpdateBarPde_v15_00;

typedef UpdateBarPde_v15_00 UpdateBarPde_v;

typedef struct NV2080_CTRL_NVLINK_INBAND_RECEIVED_DATA_256_PARAMS_v17_00
{
    NvU32      dataSize;
    NvU8       data[256];
} NV2080_CTRL_NVLINK_INBAND_RECEIVED_DATA_256_PARAMS_v17_00;

typedef NV2080_CTRL_NVLINK_INBAND_RECEIVED_DATA_256_PARAMS_v17_00 NV2080_CTRL_NVLINK_INBAND_RECEIVED_DATA_256_PARAMS_v;

typedef struct NV2080_CTRL_NVLINK_INBAND_RECEIVED_DATA_512_PARAMS_v17_00
{
    NvU32      dataSize;
    NvU8       data[512];
} NV2080_CTRL_NVLINK_INBAND_RECEIVED_DATA_512_PARAMS_v17_00;

typedef NV2080_CTRL_NVLINK_INBAND_RECEIVED_DATA_512_PARAMS_v17_00 NV2080_CTRL_NVLINK_INBAND_RECEIVED_DATA_512_PARAMS_v;

typedef struct NV2080_CTRL_NVLINK_INBAND_RECEIVED_DATA_1024_PARAMS_v17_00
{
    NvU32      dataSize;
    NvU8       data[1024];
} NV2080_CTRL_NVLINK_INBAND_RECEIVED_DATA_1024_PARAMS_v17_00;

typedef NV2080_CTRL_NVLINK_INBAND_RECEIVED_DATA_1024_PARAMS_v17_00 NV2080_CTRL_NVLINK_INBAND_RECEIVED_DATA_1024_PARAMS_v;

typedef struct NV2080_CTRL_NVLINK_INBAND_RECEIVED_DATA_2048_PARAMS_v17_00
{
    NvU32      dataSize;
    NvU8       data[2048];
} NV2080_CTRL_NVLINK_INBAND_RECEIVED_DATA_2048_PARAMS_v17_00;

typedef NV2080_CTRL_NVLINK_INBAND_RECEIVED_DATA_2048_PARAMS_v17_00 NV2080_CTRL_NVLINK_INBAND_RECEIVED_DATA_2048_PARAMS_v;

typedef struct NV2080_CTRL_NVLINK_INBAND_RECEIVED_DATA_4096_PARAMS_v17_00
{
    NvU32      dataSize;
    NvU8       data[4096];
} NV2080_CTRL_NVLINK_INBAND_RECEIVED_DATA_4096_PARAMS_v17_00;

typedef NV2080_CTRL_NVLINK_INBAND_RECEIVED_DATA_4096_PARAMS_v17_00 NV2080_CTRL_NVLINK_INBAND_RECEIVED_DATA_4096_PARAMS_v;

typedef struct NV2080_CTRL_NVLINK_IS_GPU_DEGRADED_PARAMS_v17_00
{
    NvU32      linkId;
    NvBool     bIsGpuDegraded;
} NV2080_CTRL_NVLINK_IS_GPU_DEGRADED_PARAMS_v17_00;

typedef NV2080_CTRL_NVLINK_IS_GPU_DEGRADED_PARAMS_v17_00 NV2080_CTRL_NVLINK_IS_GPU_DEGRADED_PARAMS_v;

typedef struct gpu_exec_reg_ops_v03_00
{
    NV2080_CTRL_GPU_EXEC_REG_OPS_PARAMS_v03_00 reg_op_params;
    NV2080_CTRL_GPU_REG_OP_v03_00 operations[];
} gpu_exec_reg_ops_v03_00;

typedef struct gpu_exec_reg_ops_v12_01
{
    NV2080_CTRL_GPU_EXEC_REG_OPS_PARAMS_v12_01 reg_op_params;
    NV2080_CTRL_GPU_REG_OP_v03_00 operations[];
} gpu_exec_reg_ops_v12_01;

typedef gpu_exec_reg_ops_v12_01 gpu_exec_reg_ops_v;

typedef struct idle_channel_list_v03_00
{
    NvU32      phClient;
    NvU32      phDevice;
    NvU32      phChannel;
} idle_channel_list_v03_00;

typedef idle_channel_list_v03_00 idle_channel_list_v;

typedef struct NV0080_CTRL_DMA_UNSET_PAGE_DIRECTORY_PARAMS_v03_00
{
    NvHandle   hVASpace;
    NvU32      subDeviceId;
} NV0080_CTRL_DMA_UNSET_PAGE_DIRECTORY_PARAMS_v03_00;

typedef struct NV0080_CTRL_DMA_UNSET_PAGE_DIRECTORY_PARAMS_v1E_05
{
    NvHandle   hVASpace;
    NvU32      subDeviceId;
} NV0080_CTRL_DMA_UNSET_PAGE_DIRECTORY_PARAMS_v1E_05;

typedef NV0080_CTRL_DMA_UNSET_PAGE_DIRECTORY_PARAMS_v1E_05 NV0080_CTRL_DMA_UNSET_PAGE_DIRECTORY_PARAMS_v;

typedef struct NVB0CC_CTRL_EXEC_REG_OPS_PARAMS_v1A_0F
{
    NvU32      regOpCount;
    NVB0CC_REGOPS_MODE mode;
    NvBool     bPassed;
    NvBool     bDirect;
    NV2080_CTRL_GPU_REG_OP_v03_00 regOps[NVB0CC_REGOPS_MAX_COUNT];
} NVB0CC_CTRL_EXEC_REG_OPS_PARAMS_v1A_0F;

typedef NVB0CC_CTRL_EXEC_REG_OPS_PARAMS_v1A_0F NVB0CC_CTRL_EXEC_REG_OPS_PARAMS_v;

typedef struct ATOMIC_OP_v1F_08
{
    NvBool     bSupported;
    NvU32      attributes;
} ATOMIC_OP_v1F_08;

typedef ATOMIC_OP_v1F_08 ATOMIC_OP_v;

typedef struct NV2080_CTRL_GPU_P2P_PEER_CAPS_PEER_INFO_v21_02
{
    NvU32      gpuId;
    NvU8       gpuUuid[VM_UUID_SIZE_v21_02];
    NvU32      p2pCaps;
    NvU32      p2pOptimalReadCEs;
    NvU32      p2pOptimalWriteCEs;
    NvU8       p2pCapsStatus[NV0000_CTRL_P2P_CAPS_INDEX_TABLE_SIZE_v1F_0D];
    NvU32      busPeerId;
} NV2080_CTRL_GPU_P2P_PEER_CAPS_PEER_INFO_v21_02;

typedef NV2080_CTRL_GPU_P2P_PEER_CAPS_PEER_INFO_v21_02 NV2080_CTRL_GPU_P2P_PEER_CAPS_PEER_INFO_v;

typedef struct NV2080_CTRL_GET_P2P_CAPS_PARAMS_v21_02
{
    NvBool     bAllCaps;
    NvBool     bUseUuid;
    NvU32      peerGpuCount;
    NV2080_CTRL_GPU_P2P_PEER_CAPS_PEER_INFO_v21_02 peerGpuCaps[NV0000_CTRL_SYSTEM_MAX_ATTACHED_GPUS_v21_02];
} NV2080_CTRL_GET_P2P_CAPS_PARAMS_v21_02;

typedef NV2080_CTRL_GET_P2P_CAPS_PARAMS_v21_02 NV2080_CTRL_GET_P2P_CAPS_PARAMS_v;

typedef struct NV2080_CTRL_BUS_SET_P2P_MAPPING_PARAMS_v21_03
{
    NvU32      connectionType;
    NvU32      peerId;
    NvU32      bSpaAccessOnly;
    NvBool     bUseUuid;
    NvU32      remoteGpuId;
    NvU8       remoteGpuUuid[VM_UUID_SIZE_v21_02];
} NV2080_CTRL_BUS_SET_P2P_MAPPING_PARAMS_v21_03;

typedef NV2080_CTRL_BUS_SET_P2P_MAPPING_PARAMS_v21_03 NV2080_CTRL_BUS_SET_P2P_MAPPING_PARAMS_v;

typedef struct NV2080_CTRL_BUS_UNSET_P2P_MAPPING_PARAMS_v21_03
{
    NvU32      connectionType;
    NvU32      peerId;
    NvBool     bUseUuid;
    NvU32      remoteGpuId;
    NvU8       remoteGpuUuid[VM_UUID_SIZE_v21_02];
} NV2080_CTRL_BUS_UNSET_P2P_MAPPING_PARAMS_v21_03;

typedef NV2080_CTRL_BUS_UNSET_P2P_MAPPING_PARAMS_v21_03 NV2080_CTRL_BUS_UNSET_P2P_MAPPING_PARAMS_v;

typedef struct NVB0CC_CTRL_PMA_STREAM_HS_CREDITS_INFO_v21_08
{
    NvU8       chipletType;
    NvU8       chipletIndex;
    NvU16      numCredits;
} NVB0CC_CTRL_PMA_STREAM_HS_CREDITS_INFO_v21_08;

typedef NVB0CC_CTRL_PMA_STREAM_HS_CREDITS_INFO_v21_08 NVB0CC_CTRL_PMA_STREAM_HS_CREDITS_INFO_v;

typedef struct NVB0CC_CTRL_PMA_STREAM_HS_CREDITS_STATUS_v21_08
{
    NvU8       status;
    NvU8       entryIndex;
} NVB0CC_CTRL_PMA_STREAM_HS_CREDITS_STATUS_v21_08;

typedef NVB0CC_CTRL_PMA_STREAM_HS_CREDITS_STATUS_v21_08 NVB0CC_CTRL_PMA_STREAM_HS_CREDITS_STATUS_v;

typedef struct NVB0CC_CTRL_GET_TOTAL_HS_CREDITS_PARAMS_v21_08
{
    NvU32      numCredits;
} NVB0CC_CTRL_GET_TOTAL_HS_CREDITS_PARAMS_v21_08;

typedef NVB0CC_CTRL_GET_TOTAL_HS_CREDITS_PARAMS_v21_08 NVB0CC_CTRL_GET_TOTAL_HS_CREDITS_PARAMS_v;

typedef struct NVB0CC_CTRL_GET_HS_CREDITS_PARAMS_v21_08
{
    NvU8       pmaChannelIdx;
    NvU8       numEntries;
    NVB0CC_CTRL_PMA_STREAM_HS_CREDITS_STATUS_v21_08 statusInfo;
    NVB0CC_CTRL_PMA_STREAM_HS_CREDITS_INFO_v21_08 creditInfo[NVB0CC_MAX_CREDIT_INFO_ENTRIES_v21_08];
} NVB0CC_CTRL_GET_HS_CREDITS_PARAMS_v21_08;

typedef NVB0CC_CTRL_GET_HS_CREDITS_PARAMS_v21_08 NVB0CC_CTRL_GET_HS_CREDITS_PARAMS_v;

typedef struct NVB0CC_CTRL_SET_HS_CREDITS_PARAMS_v21_08
{
    NvU8       pmaChannelIdx;
    NvU8       numEntries;
    NVB0CC_CTRL_PMA_STREAM_HS_CREDITS_STATUS_v21_08 statusInfo;
    NVB0CC_CTRL_PMA_STREAM_HS_CREDITS_INFO_v21_08 creditInfo[NVB0CC_MAX_CREDIT_INFO_ENTRIES_v21_08];
} NVB0CC_CTRL_SET_HS_CREDITS_PARAMS_v21_08;

typedef NVB0CC_CTRL_SET_HS_CREDITS_PARAMS_v21_08 NVB0CC_CTRL_SET_HS_CREDITS_PARAMS_v;

typedef struct NV2080_CTRL_CE_CAPS_v21_0A
{
    NvU8       capsTbl[NV2080_CTRL_CE_CAPS_TBL_SIZE_v21_0A];
} NV2080_CTRL_CE_CAPS_v21_0A;

typedef NV2080_CTRL_CE_CAPS_v21_0A NV2080_CTRL_CE_CAPS_v;

typedef struct NV2080_CTRL_CE_GET_ALL_CAPS_PARAMS_v21_0A
{
    NV2080_CTRL_CE_CAPS_v21_0A ceCaps[NV2080_CTRL_MAX_PCES_v21_0A];
    NvU32      present;
} NV2080_CTRL_CE_GET_ALL_CAPS_PARAMS_v21_0A;

typedef NV2080_CTRL_CE_GET_ALL_CAPS_PARAMS_v21_0A NV2080_CTRL_CE_GET_ALL_CAPS_PARAMS_v;

typedef struct NV2080_CTRL_CMD_BUS_GET_C2C_INFO_PARAMS_v22_01
{
    NvBool     bIsLinkUp;
    NvU32      nrLinks;
    NvU32      linkMask;
    NvU32      perLinkBwMBps;
    NvU32      remoteType;
} NV2080_CTRL_CMD_BUS_GET_C2C_INFO_PARAMS_v22_01;

typedef NV2080_CTRL_CMD_BUS_GET_C2C_INFO_PARAMS_v22_01 NV2080_CTRL_CMD_BUS_GET_C2C_INFO_PARAMS_v;

typedef struct NV2080_CTRL_INTERNAL_PFM_REQ_HNDLR_STATE_SYNC_DATA_SMBPBI_v21_04
{
    NvU32      sensorId;
    NvU32      limit;
} NV2080_CTRL_INTERNAL_PFM_REQ_HNDLR_STATE_SYNC_DATA_SMBPBI_v21_04;

typedef NV2080_CTRL_INTERNAL_PFM_REQ_HNDLR_STATE_SYNC_DATA_SMBPBI_v21_04 NV2080_CTRL_INTERNAL_PFM_REQ_HNDLR_STATE_SYNC_DATA_SMBPBI_v;

typedef union NV2080_CTRL_INTERNAL_PFM_REQ_HNDLR_STATE_SYNC_DATA_type_v21_04
{
    NV2080_CTRL_INTERNAL_PFM_REQ_HNDLR_STATE_SYNC_DATA_SMBPBI_v21_04 smbpbi;
} NV2080_CTRL_INTERNAL_PFM_REQ_HNDLR_STATE_SYNC_DATA_type_v21_04;

typedef NV2080_CTRL_INTERNAL_PFM_REQ_HNDLR_STATE_SYNC_DATA_type_v21_04 NV2080_CTRL_INTERNAL_PFM_REQ_HNDLR_STATE_SYNC_DATA_type_v;

typedef struct NV2080_CTRL_INTERNAL_PFM_REQ_HNDLR_STATE_SYNC_data_v21_04
{
    NvU8       type ;
    NV2080_CTRL_INTERNAL_PFM_REQ_HNDLR_STATE_SYNC_DATA_type_v21_04 data;
} NV2080_CTRL_INTERNAL_PFM_REQ_HNDLR_STATE_SYNC_data_v21_04;

typedef NV2080_CTRL_INTERNAL_PFM_REQ_HNDLR_STATE_SYNC_data_v21_04 NV2080_CTRL_INTERNAL_PFM_REQ_HNDLR_STATE_SYNC_data_v;

typedef struct NV2080_CTRL_INTERNAL_PFM_REQ_HNDLR_STATE_SYNC_PARAMS_v21_04
{
    NvU8       flags;
    NV2080_CTRL_INTERNAL_PFM_REQ_HNDLR_STATE_SYNC_data_v21_04 syncData;
} NV2080_CTRL_INTERNAL_PFM_REQ_HNDLR_STATE_SYNC_PARAMS_v21_04;

typedef NV2080_CTRL_INTERNAL_PFM_REQ_HNDLR_STATE_SYNC_PARAMS_v21_04 NV2080_CTRL_INTERNAL_PFM_REQ_HNDLR_STATE_SYNC_PARAMS_v;


#endif

#ifdef SDK_UNION_MEMBER_NAME_FUNCTIONS
// Union member index functions for NV2080_CTRL_INTERNAL_PFM_REQ_HNDLR_STATE_SYNC_DATA_type
uint32_t _get_union_member_index_NV2080_CTRL_INTERNAL_PFM_REQ_HNDLR_STATE_SYNC_DATA_type_v21_04(NvU32 cmd)
{
    switch (cmd)
    {
        case NV2080_CTRL_INTERNAL_PFM_REQ_HNDLR_STATE_SYNC_DATA_TYPE_SMBPBI:
                return 0; // "smbpbi"

        default:
                return UNION_UNKNOWN_FIELD_PRINT;
    }
}





#endif

#ifdef SDK_UNION_MEMBER_NAME_FUNCTIONS_CMD
static NV_STATUS get_union_member_index_NV2080_CTRL_INTERNAL_PFM_REQ_HNDLR_STATE_SYNC_data_v21_04_data(void *msg, NvS32 bytes_remaining, uint32_t* index)
{
    NV2080_CTRL_INTERNAL_PFM_REQ_HNDLR_STATE_SYNC_data_v21_04 *param = msg;

    if ((NvS32)(NV_OFFSETOF(NV2080_CTRL_INTERNAL_PFM_REQ_HNDLR_STATE_SYNC_data_v21_04, type) + sizeof(param->type)) > bytes_remaining)
        return NV_ERR_BUFFER_TOO_SMALL;
    *index = _get_union_member_index_NV2080_CTRL_INTERNAL_PFM_REQ_HNDLR_STATE_SYNC_DATA_type_v21_04(param->type);
    return NV_OK;
}

#endif

#ifdef SDK_ARRAY_LENGTH_FUNCTIONS

// Array length functions for gpu_exec_reg_ops:
static NV_STATUS get_array_length_gpu_exec_reg_ops_v03_00_operations(void *msg, NvS32 bytes_remaining, uint32_t* length)
{
    gpu_exec_reg_ops_v03_00 *param = msg;

    if ((NvS32)(NV_OFFSETOF(gpu_exec_reg_ops_v03_00, reg_op_params.regOpCount) + sizeof(param->reg_op_params.regOpCount)) > bytes_remaining)
        return NV_ERR_BUFFER_TOO_SMALL;
    *length = param->reg_op_params.regOpCount;
    return NV_OK;
}
static NV_STATUS get_array_length_gpu_exec_reg_ops_v12_01_operations(void *msg, NvS32 bytes_remaining, uint32_t* length)
{
    gpu_exec_reg_ops_v12_01 *param = msg;

    if ((NvS32)(NV_OFFSETOF(gpu_exec_reg_ops_v12_01, reg_op_params.regOpCount) + sizeof(param->reg_op_params.regOpCount)) > bytes_remaining)
        return NV_ERR_BUFFER_TOO_SMALL;
    *length = param->reg_op_params.regOpCount;
    return NV_OK;
}

#endif
