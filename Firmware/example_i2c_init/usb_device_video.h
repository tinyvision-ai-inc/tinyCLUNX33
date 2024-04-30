/*
 * Copyright (c) 2015 - 2016, Freescale Semiconductor, Inc.
 * Copyright 2016 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include <stdint.h>

#ifndef __USB_DEVICE_VIDEO_H__
#define __USB_DEVICE_VIDEO_H__

/*! @brief Video device class code */
#define USB_DEVICE_VIDEO_CC_VIDEO (0x0EU)

/*! @brief Video device subclass code */
#define USB_DEVICE_VIDEO_SC_UNDEFINED (0x00U)
#define USB_DEVICE_VIDEO_SC_VIDEOCONTROL (0x01U)
#define USB_DEVICE_VIDEO_SC_VIDEOSTREAMING (0x02U)
#define USB_DEVICE_VIDEO_SC_VIDEO_INTERFACE_COLLECTION (0x03U)

/*! @brief Video device protocol code */
#define USB_DEVICE_VIDEO_PC_PROTOCOL_UNDEFINED (0x00U)
#define USB_DEVICE_VIDEO_PC_PROTOCOL_15 (0x01U)

/*! @brief Video device class-specific descriptor type */
#define USB_DESCRIPTOR_TYPE_VIDEO_CS_UNDEFINED (0x20U)
#define USB_DESCRIPTOR_TYPE_VIDEO_CS_DEVICE (0x21U)
#define USB_DESCRIPTOR_TYPE_VIDEO_CS_CONFIGURATION (0x22U)
#define USB_DESCRIPTOR_TYPE_VIDEO_CS_STRING (0x23U)
#define USB_DESCRIPTOR_TYPE_VIDEO_CS_INTERFACE (0x24U)
#define USB_DESCRIPTOR_TYPE_VIDEO_CS_ENDPOINT (0x25U)

/*! @brief Video device class-specific VC interface descriptor subtype */
#define USB_DESCRIPTOR_SUBTYPE_VIDEO_VC_DESCRIPTOR_UNDEFINED (0x00U)
#define USB_DESCRIPTOR_SUBTYPE_VIDEO_VC_HEADER (0x01U)
#define USB_DESCRIPTOR_SUBTYPE_VIDEO_VC_INPUT_TERMINAL (0x02U)
#define USB_DESCRIPTOR_SUBTYPE_VIDEO_VC_OUTPUT_TERMINAL (0x03U)
#define USB_DESCRIPTOR_SUBTYPE_VIDEO_VC_SELECTOR_UNIT (0x04U)
#define USB_DESCRIPTOR_SUBTYPE_VIDEO_VC_PROCESSING_UNIT (0x05U)
#define USB_DESCRIPTOR_SUBTYPE_VIDEO_VC_EXTENSION_UNIT (0x06U)
#define USB_DESCRIPTOR_SUBTYPE_VIDEO_VC_ENCODING_UNIT (0x07U)

/*! @brief Video device class-specific VS interface descriptor subtype */
#define USB_DESCRIPTOR_SUBTYPE_VIDEO_VS_UNDEFINED (0x00U)
#define USB_DESCRIPTOR_SUBTYPE_VIDEO_VS_INPUT_HEADER (0x01U)
#define USB_DESCRIPTOR_SUBTYPE_VIDEO_VS_OUTPUT_HEADER (0x02U)
#define USB_DESCRIPTOR_SUBTYPE_VIDEO_VS_STILL_IMAGE_FRAME (0x03U)
#define USB_DESCRIPTOR_SUBTYPE_VIDEO_VS_FORMAT_UNCOMPRESSED (0x04U)
#define USB_DESCRIPTOR_SUBTYPE_VIDEO_VS_FRAME_UNCOMPRESSED (0x05U)
#define USB_DESCRIPTOR_SUBTYPE_VIDEO_VS_FORMAT_MJPEG (0x06U)
#define USB_DESCRIPTOR_SUBTYPE_VIDEO_VS_FRAME_MJPEG (0x07U)
#define USB_DESCRIPTOR_SUBTYPE_VIDEO_VS_FORMAT_MPEG2TS (0x0AU)
#define USB_DESCRIPTOR_SUBTYPE_VIDEO_VS_FORMAT_DV (0x0CU)
#define USB_DESCRIPTOR_SUBTYPE_VIDEO_VS_COLORFORMAT (0x0DU)
#define USB_DESCRIPTOR_SUBTYPE_VIDEO_VS_FORMAT_FRAME_BASED (0x10U)
#define USB_DESCRIPTOR_SUBTYPE_VIDEO_VS_FRAME_FRAME_BASED (0x11U)
#define USB_DESCRIPTOR_SUBTYPE_VIDEO_VS_FORMAT_STREAM_BASED (0x12U)
#define USB_DESCRIPTOR_SUBTYPE_VIDEO_VS_FORMAT_H264 (0x13U)
#define USB_DESCRIPTOR_SUBTYPE_VIDEO_VS_FRAME_H264 (0x14U)
#define USB_DESCRIPTOR_SUBTYPE_VIDEO_VS_FORMAT_H264_SIMULCAST (0x15U)
#define USB_DESCRIPTOR_SUBTYPE_VIDEO_VS_FORMAT_VP8 (0x16U)
#define USB_DESCRIPTOR_SUBTYPE_VIDEO_VS_FRAME_VP8 (0x17U)
#define USB_DESCRIPTOR_SUBTYPE_VIDEO_VS_FORMAT_VP8_SIMULCAST (0x18U)

/*! @brief Video device class-specific VC endpoint descriptor subtype */
#define USB_DESCRIPTOR_SUBTYPE_VIDEO_EP_UNDEFINED (0x00U)
#define USB_DESCRIPTOR_SUBTYPE_VIDEO_EP_GENERAL (0x01U)
#define USB_DESCRIPTOR_SUBTYPE_VIDEO_EP_ENDPOINT (0x02U)
#define USB_DESCRIPTOR_SUBTYPE_VIDEO_EP_INTERRUPT (0x03U)

/*! @brief Video device class-specific request code */
#define USB_DEVICE_VIDEO_REQUEST_CODE_UNDEFINED (0x00U)
#define USB_DEVICE_VIDEO_REQUEST_CODE_SET_CUR (0x01U)
#define USB_DEVICE_VIDEO_REQUEST_CODE_SET_CUR_ALL (0x11U)
#define USB_DEVICE_VIDEO_REQUEST_CODE_GET_CUR (0x81U)
#define USB_DEVICE_VIDEO_REQUEST_CODE_GET_MIN (0x82U)
#define USB_DEVICE_VIDEO_REQUEST_CODE_GET_MAX (0x83U)
#define USB_DEVICE_VIDEO_REQUEST_CODE_GET_RES (0x84U)
#define USB_DEVICE_VIDEO_REQUEST_CODE_GET_LEN (0x85U)
#define USB_DEVICE_VIDEO_REQUEST_CODE_GET_INFO (0x86U)
#define USB_DEVICE_VIDEO_REQUEST_CODE_GET_DEF (0x87U)
#define USB_DEVICE_VIDEO_REQUEST_CODE_GET_CUR_ALL (0x91U)
#define USB_DEVICE_VIDEO_REQUEST_CODE_GET_MIN_ALL (0x92U)
#define USB_DEVICE_VIDEO_REQUEST_CODE_GET_MAX_ALL (0x93U)
#define USB_DEVICE_VIDEO_REQUEST_CODE_GET_RES_ALL (0x94U)
#define USB_DEVICE_VIDEO_REQUEST_CODE_GET_DEF_ALL (0x97U)

/*! @brief Video device class-specific VideoControl interface control selector */
#define USB_DEVICE_VIDEO_VC_CONTROL_UNDEFINED (0x00U)
#define USB_DEVICE_VIDEO_VC_VIDEO_POWER_MODE_CONTROL (0x01U)
#define USB_DEVICE_VIDEO_VC_REQUEST_ERROR_CODE_CONTROL (0x02U)

/*! @brief Video device class-specific Terminal control selector */
#define USB_DEVICE_VIDEO_TE_CONTROL_UNDEFINED (0x00U)

/*! @brief Video device class-specific Selector Unit control selector */
#define USB_DEVICE_VIDEO_SU_CONTROL_UNDEFINED (0x00U)
#define USB_DEVICE_VIDEO_SU_INPUT_SELECT_CONTROL (0x01U)

/*! @brief Video device class-specific Camera Terminal control selector */
#define USB_DEVICE_VIDEO_CT_CONTROL_UNDEFINED (0x00U)
#define USB_DEVICE_VIDEO_CT_SCANNING_MODE_CONTROL (0x01U)
#define USB_DEVICE_VIDEO_CT_AE_MODE_CONTROL (0x02U)
#define USB_DEVICE_VIDEO_CT_AE_PRIORITY_CONTROL (0x03U)
#define USB_DEVICE_VIDEO_CT_EXPOSURE_TIME_ABSOLUTE_CONTROL (0x04U)
#define USB_DEVICE_VIDEO_CT_EXPOSURE_TIME_RELATIVE_CONTROL (0x05U)
#define USB_DEVICE_VIDEO_CT_FOCUS_ABSOLUTE_CONTROL (0x06U)
#define USB_DEVICE_VIDEO_CT_FOCUS_RELATIVE_CONTROL (0x07U)
#define USB_DEVICE_VIDEO_CT_FOCUS_AUTO_CONTROL (0x08U)
#define USB_DEVICE_VIDEO_CT_IRIS_ABSOLUTE_CONTROL (0x09U)
#define USB_DEVICE_VIDEO_CT_IRIS_RELATIVE_CONTROL (0x0AU)
#define USB_DEVICE_VIDEO_CT_ZOOM_ABSOLUTE_CONTROL (0x0BU)
#define USB_DEVICE_VIDEO_CT_ZOOM_RELATIVE_CONTROL (0x0CU)
#define USB_DEVICE_VIDEO_CT_PANTILT_ABSOLUTE_CONTROL (0x0DU)
#define USB_DEVICE_VIDEO_CT_PANTILT_RELATIVE_CONTROL (0x0EU)
#define USB_DEVICE_VIDEO_CT_ROLL_ABSOLUTE_CONTROL (0x0FU)
#define USB_DEVICE_VIDEO_CT_ROLL_RELATIVE_CONTROL (0x10U)
#define USB_DEVICE_VIDEO_CT_PRIVACY_CONTROL (0x11U)
#define USB_DEVICE_VIDEO_CT_FOCUS_SIMPLE_CONTROL (0x12U)
#define USB_DEVICE_VIDEO_CT_WINDOW_CONTROL (0x13U)
#define USB_DEVICE_VIDEO_CT_REGION_OF_INTEREST_CONTROL (0x14U)

/*! @brief Video device class-specific Processing Unit control selector */
#define USB_DEVICE_VIDEO_PU_CONTROL_UNDEFINED (0x00U)
#define USB_DEVICE_VIDEO_PU_BACKLIGHT_COMPENSATION_CONTROL (0x01U)
#define USB_DEVICE_VIDEO_PU_BRIGHTNESS_CONTROL (0x02U)
#define USB_DEVICE_VIDEO_PU_CONTRAST_CONTROL (0x03U)
#define USB_DEVICE_VIDEO_PU_GAIN_CONTROL (0x04U)
#define USB_DEVICE_VIDEO_PU_POWER_LINE_FREQUENCY_CONTROL (0x05U)
#define USB_DEVICE_VIDEO_PU_HUE_CONTROL (0x06U)
#define USB_DEVICE_VIDEO_PU_SATURATION_CONTROL (0x07U)
#define USB_DEVICE_VIDEO_PU_SHARPNESS_CONTROL (0x08U)
#define USB_DEVICE_VIDEO_PU_GAMMA_CONTROL (0x09U)
#define USB_DEVICE_VIDEO_PU_WHITE_BALANCE_TEMPERATURE_CONTROL (0x0AU)
#define USB_DEVICE_VIDEO_PU_WHITE_BALANCE_TEMPERATURE_AUTO_CONTROL (0x0BU)
#define USB_DEVICE_VIDEO_PU_WHITE_BALANCE_COMPONENT_CONTROL (0x0CU)
#define USB_DEVICE_VIDEO_PU_WHITE_BALANCE_COMPONENT_AUTO_CONTROL (0x0DU)
#define USB_DEVICE_VIDEO_PU_DIGITAL_MULTIPLIER_CONTROL (0x0EU)
#define USB_DEVICE_VIDEO_PU_DIGITAL_MULTIPLIER_LIMIT_CONTROL (0x0FU)
#define USB_DEVICE_VIDEO_PU_HUE_AUTO_CONTROL (0x10U)
#define USB_DEVICE_VIDEO_PU_ANALOG_VIDEO_STANDARD_CONTROL (0x11U)
#define USB_DEVICE_VIDEO_PU_ANALOG_LOCK_STATUS_CONTROL (0x12U)
#define USB_DEVICE_VIDEO_PU_CONTRAST_AUTO_CONTROL (0x13U)

/*! @brief Video device class-specific Encoding Unit control selector */
#define USB_DEVICE_VIDEO_EU_CONTROL_UNDEFINED (0x00U)
#define USB_DEVICE_VIDEO_EU_SELECT_LAYER_CONTROL (0x01U)
#define USB_DEVICE_VIDEO_EU_PROFILE_TOOLSET_CONTROL (0x02U)
#define USB_DEVICE_VIDEO_EU_VIDEO_RESOLUTION_CONTROL (0x03U)
#define USB_DEVICE_VIDEO_EU_MIN_FRAME_INTERVAL_CONTROL (0x04U)
#define USB_DEVICE_VIDEO_EU_SLICE_MODE_CONTROL (0x05U)
#define USB_DEVICE_VIDEO_EU_RATE_CONTROL_MODE_CONTROL (0x06U)
#define USB_DEVICE_VIDEO_EU_AVERAGE_BITRATE_CONTROL (0x07U)
#define USB_DEVICE_VIDEO_EU_CPB_SIZE_CONTROL (0x08U)
#define USB_DEVICE_VIDEO_EU_PEAK_BIT_RATE_CONTROL (0x09U)
#define USB_DEVICE_VIDEO_EU_QUANTIZATION_PARAMS_CONTROL (0x0AU)
#define USB_DEVICE_VIDEO_EU_SYNC_REF_FRAME_CONTROL (0x0BU)
#define USB_DEVICE_VIDEO_EU_LTR_BUFFER_ CONTROL(0x0CU)
#define USB_DEVICE_VIDEO_EU_LTR_PICTURE_CONTROL (0x0DU)
#define USB_DEVICE_VIDEO_EU_LTR_VALIDATION_CONTROL (0x0EU)
#define USB_DEVICE_VIDEO_EU_LEVEL_IDC_LIMIT_CONTROL (0x0FU)
#define USB_DEVICE_VIDEO_EU_SEI_PAYLOADTYPE_CONTROL (0x10U)
#define USB_DEVICE_VIDEO_EU_QP_RANGE_CONTROL (0x11U)
#define USB_DEVICE_VIDEO_EU_PRIORITY_CONTROL (0x12U)
#define USB_DEVICE_VIDEO_EU_START_OR_STOP_LAYER_CONTROL (0x13U)
#define USB_DEVICE_VIDEO_EU_ERROR_RESILIENCY_CONTROL (0x14U)

/*! @brief Video device class-specific Extension Unit control selector */
#define USB_DEVICE_VIDEO_XU_CONTROL_UNDEFINED (0x00U)

/*! @brief Video device class-specific VideoStreaming Interface control selector */
#define USB_DEVICE_VIDEO_VS_CONTROL_UNDEFINED (0x00U)
#define USB_DEVICE_VIDEO_VS_PROBE_CONTROL (0x01U)
#define USB_DEVICE_VIDEO_VS_COMMIT_CONTROL (0x02U)
#define USB_DEVICE_VIDEO_VS_STILL_PROBE_CONTROL (0x03U)
#define USB_DEVICE_VIDEO_VS_STILL_COMMIT_CONTROL (0x04U)
#define USB_DEVICE_VIDEO_VS_STILL_IMAGE_TRIGGER_CONTROL (0x05U)
#define USB_DEVICE_VIDEO_VS_STREAM_ERROR_CODE_CONTROL (0x06U)
#define USB_DEVICE_VIDEO_VS_GENERATE_KEY_FRAME_CONTROL (0x07U)
#define USB_DEVICE_VIDEO_VS_UPDATE_FRAME_SEGMENT_CONTROL (0x08U)
#define USB_DEVICE_VIDEO_VS_SYNCH_DELAY_CONTROL (0x09U)

/*! @brief Video device USB terminal type */
#define USB_DEVICE_VIDEO_TT_VENDOR_SPECIFIC (0x0100U)
#define USB_DEVICE_VIDEO_TT_STREAMING (0x0101U)

/*! @brief Video device input terminal type */
#define USB_DEVICE_VIDEO_ITT_VENDOR_SPECIFIC (0x0200U)
#define USB_DEVICE_VIDEO_ITT_CAMERA (0x0201U)
#define USB_DEVICE_VIDEO_ITT_MEDIA_TRANSPORT_INPUT (0x0202U)

/*! @brief Video device output terminal type */
#define USB_DEVICE_VIDEO_OTT_VENDOR_SPECIFIC (0x0300U)
#define USB_DEVICE_VIDEO_OTT_DISPLAY (0x0301U)
#define USB_DEVICE_VIDEO_OTT_MEDIA_TRANSPORT_OUTPUT (0x0302U)

/*! @brief Video device external terminal type */
#define USB_DEVICE_VIDEO_ET_VENDOR_SPECIFIC (0x0400U)
#define USB_DEVICE_VIDEO_ET_COMPOSITE_CONNECTOR (0x0401U)
#define USB_DEVICE_VIDEO_ET_SVIDEO_CONNECTOR (0x0402U)
#define USB_DEVICE_VIDEO_ET_COMPONENT_CONNECTOR (0x0403U)

/*! @brief Video device class setup request set type */
#define USB_DEVICE_VIDEO_SET_REQUEST_INTERFACE (0x21U)
#define USB_DEVICE_VIDEO_SET_REQUEST_ENDPOINT (0x22U)

/*! @brief Video device class setup request get type */
#define USB_DEVICE_VIDEO_GET_REQUEST_INTERFACE (0xA1U)
#define USB_DEVICE_VIDEO_GET_REQUEST_ENDPOINT (0xA2U)

/*! @brief Video device still image trigger control */
#define USB_DEVICE_VIDEO_STILL_IMAGE_TRIGGER_NORMAL_OPERATION (0x00U)
#define USB_DEVICE_VIDEO_STILL_IMAGE_TRIGGER_TRANSMIT_STILL_IMAGE (0x01U)
#define USB_DEVICE_VIDEO_STILL_IMAGE_TRIGGER_TRANSMIT_STILL_IMAGE_VS_DEDICATED_BULK_PIPE (0x02U)
#define USB_DEVICE_VIDEO_STILL_IMAGE_TRIGGER_ABORT_STILL_IMAGE_TRANSMISSION (0x03U)

/*! @brief Video device class-specific request GET CUR COMMAND */
#define USB_DEVICE_VIDEO_GET_CUR_VC_POWER_MODE_CONTROL (0x8101U)
#define USB_DEVICE_VIDEO_GET_CUR_VC_ERROR_CODE_CONTROL (0x8102U)

#define USB_DEVICE_VIDEO_GET_CUR_PU_BACKLIGHT_COMPENSATION_CONTROL (0x8121U)
#define USB_DEVICE_VIDEO_GET_CUR_PU_BRIGHTNESS_CONTROL (0x8122U)
#define USB_DEVICE_VIDEO_GET_CUR_PU_CONTRACT_CONTROL (0x8123U)
#define USB_DEVICE_VIDEO_GET_CUR_PU_GAIN_CONTROL (0x8124U)
#define USB_DEVICE_VIDEO_GET_CUR_PU_POWER_LINE_FREQUENCY_CONTROL (0x8125U)
#define USB_DEVICE_VIDEO_GET_CUR_PU_HUE_CONTROL (0x8126U)
#define USB_DEVICE_VIDEO_GET_CUR_PU_SATURATION_CONTROL (0x8127U)
#define USB_DEVICE_VIDEO_GET_CUR_PU_SHARRNESS_CONTROL (0x8128U)
#define USB_DEVICE_VIDEO_GET_CUR_PU_GAMMA_CONTROL (0x8129U)
#define USB_DEVICE_VIDEO_GET_CUR_PU_WHITE_BALANCE_TEMPERATURE_CONTROL (0x812AU)
#define USB_DEVICE_VIDEO_GET_CUR_PU_WHITE_BALANCE_TEMPERATURE_AUTO_CONTROL (0x812BU)
#define USB_DEVICE_VIDEO_GET_CUR_PU_WHITE_BALANCE_COMPONENT_CONTROL (0x812CU)
#define USB_DEVICE_VIDEO_GET_CUR_PU_WHITE_BALANCE_COMPONENT_AUTO_CONTROL (0x812DU)
#define USB_DEVICE_VIDEO_GET_CUR_PU_DIGITAL_MULTIPLIER_CONTROL (0x812EU)
#define USB_DEVICE_VIDEO_GET_CUR_PU_DIGITAL_MULTIPLIER_LIMIT_CONTROL (0x812FU)
#define USB_DEVICE_VIDEO_GET_CUR_PU_HUE_AUTO_CONTROL (0x8130U)
#define USB_DEVICE_VIDEO_GET_CUR_PU_ANALOG_VIDEO_STANDARD_CONTROL (0x8131U)
#define USB_DEVICE_VIDEO_GET_CUR_PU_ANALOG_LOCK_STATUS_CONTROL (0x8132U)
#if defined(USB_DEVICE_VIDEO_CLASS_VERSION_1_5) && USB_DEVICE_VIDEO_CLASS_VERSION_1_5
#define USB_DEVICE_VIDEO_GET_CUR_PU_CONTRAST_AUTO_CONTROL (0x8133U)
#endif

#define USB_DEVICE_VIDEO_GET_CUR_CT_SCANNING_MODE_CONTROL (0x8141U)
#define USB_DEVICE_VIDEO_GET_CUR_CT_AE_MODE_CONTROL (0x8142U)
#define USB_DEVICE_VIDEO_GET_CUR_CT_AE_PRIORITY_CONTROL (0x8143U)
#define USB_DEVICE_VIDEO_GET_CUR_CT_EXPOSURE_TIME_ABSOLUTE_CONTROL (0x8144U)
#define USB_DEVICE_VIDEO_GET_CUR_CT_EXPOSURE_TIME_RELATIVE_CONTROL (0x8145U)
#define USB_DEVICE_VIDEO_GET_CUR_CT_FOCUS_ABSOLUTE_CONTROL (0x8146U)
#define USB_DEVICE_VIDEO_GET_CUR_CT_FOCUS_RELATIVE_CONTROL (0x8147U)
#define USB_DEVICE_VIDEO_GET_CUR_CT_FOCUS_AUTO_CONTROL (0x8148U)
#define USB_DEVICE_VIDEO_GET_CUR_CT_IRIS_ABSOLUTE_CONTROL (0x8149U)
#define USB_DEVICE_VIDEO_GET_CUR_CT_IRIS_RELATIVE_CONTROL (0x814AU)
#define USB_DEVICE_VIDEO_GET_CUR_CT_ZOOM_ABSOLUTE_CONTROL (0x814BU)
#define USB_DEVICE_VIDEO_GET_CUR_CT_ZOOM_RELATIVE_CONTROL (0x814CU)
#define USB_DEVICE_VIDEO_GET_CUR_CT_PANTILT_ABSOLUTE_CONTROL (0x814DU)
#define USB_DEVICE_VIDEO_GET_CUR_CT_PANTILT_RELATIVE_CONTROL (0x814EU)
#define USB_DEVICE_VIDEO_GET_CUR_CT_ROLL_ABSOLUTE_CONTROL (0x814FU)
#define USB_DEVICE_VIDEO_GET_CUR_CT_ROLL_RELATIVE_CONTROL (0x8150U)
#define USB_DEVICE_VIDEO_GET_CUR_CT_PRIVACY_CONTROL (0x8151U)
#if defined(USB_DEVICE_VIDEO_CLASS_VERSION_1_5) && USB_DEVICE_VIDEO_CLASS_VERSION_1_5
#define USB_DEVICE_VIDEO_GET_CUR_CT_FOCUS_SIMPLE_CONTROL (0x8152U)
#define USB_DEVICE_VIDEO_GET_CUR_CT_DIGITAL_WINDOW_CONTROL (0x8153U)
#define USB_DEVICE_VIDEO_GET_CUR_CT_REGION_OF_INTEREST_CONTROL (0x8154U)
#endif

#define USB_DEVICE_VIDEO_GET_CUR_VS_PROBE_CONTROL (0x8161U)
#define USB_DEVICE_VIDEO_GET_CUR_VS_COMMIT_CONTROL (0x8162U)
#define USB_DEVICE_VIDEO_GET_CUR_VS_STILL_PROBE_CONTROL (0x8163U)
#define USB_DEVICE_VIDEO_GET_CUR_VS_STILL_COMMIT_CONTROL (0x8164U)
#define USB_DEVICE_VIDEO_GET_CUR_VS_STILL_IMAGE_TRIGGER_CONTROL (0x8165U)
#define USB_DEVICE_VIDEO_GET_CUR_VS_STREAM_ERROR_CODE_CONTROL (0x8166U)
#define USB_DEVICE_VIDEO_GET_CUR_VS_GENERATE_KEY_FRAME_CONTROL (0x8167U)
#define USB_DEVICE_VIDEO_GET_CUR_VS_UPDATE_FRAME_SEGMENT_CONTROL (0x8168U)
#define USB_DEVICE_VIDEO_GET_CUR_VS_SYNCH_DELAY_CONTROL (0x8169U)

#if defined(USB_DEVICE_VIDEO_CLASS_VERSION_1_5) && USB_DEVICE_VIDEO_CLASS_VERSION_1_5
#define USB_DEVICE_VIDEO_GET_CUR_EU_SELECT_LAYER_CONTROL (0x8181U)
#define USB_DEVICE_VIDEO_GET_CUR_EU_PROFILE_TOOLSET_CONTROL (0x8182U)
#define USB_DEVICE_VIDEO_GET_CUR_EU_VIDEO_RESOLUTION_CONTROL (0x8183U)
#define USB_DEVICE_VIDEO_GET_CUR_EU_MIN_FRAME_INTERVAL_CONTROL (0x8184U)
#define USB_DEVICE_VIDEO_GET_CUR_EU_SLICE_MODE_CONTROL (0x8185U)
#define USB_DEVICE_VIDEO_GET_CUR_EU_RATE_CONTROL_MODE_CONTROL (0x8186U)
#define USB_DEVICE_VIDEO_GET_CUR_EU_AVERAGE_BITRATE_CONTROL (0x8187U)
#define USB_DEVICE_VIDEO_GET_CUR_EU_CPB_SIZE_CONTROL (0x8188U)
#define USB_DEVICE_VIDEO_GET_CUR_EU_PEAK_BIT_RATE_CONTROL (0x8189U)
#define USB_DEVICE_VIDEO_GET_CUR_EU_QUANTIZATION_PARAMS_CONTROL (0x818AU)
#define USB_DEVICE_VIDEO_GET_CUR_EU_SYNC_REF_FRAME_CONTROL (0x818BU)
#define USB_DEVICE_VIDEO_GET_CUR_EU_LTR_BUFFER_CONTROL (0x818CU)
#define USB_DEVICE_VIDEO_GET_CUR_EU_LTR_PICTURE_CONTROL (0x818DU)
#define USB_DEVICE_VIDEO_GET_CUR_EU_LTR_VALIDATION_CONTROL (0x818EU)
#define USB_DEVICE_VIDEO_GET_CUR_EU_LEVEL_IDC_LIMIT_CONTROL (0x818FU)
#define USB_DEVICE_VIDEO_GET_CUR_EU_SEI_PAYLOADTYPE_CONTROL (0x8190U)
#define USB_DEVICE_VIDEO_GET_CUR_EU_QP_RANGE_CONTROL (0x8191U)
#define USB_DEVICE_VIDEO_GET_CUR_EU_PRIORITY_CONTROL (0x8192U)
#define USB_DEVICE_VIDEO_GET_CUR_EU_START_OR_STOP_LAYER_CONTROL (0x8193U)
#define USB_DEVICE_VIDEO_GET_CUR_EU_ERROR_RESILIENCY_CONTROL (0x8194U)
#endif

/*! @brief Video device class-specific request GET MIN COMMAND */
#define USB_DEVICE_VIDEO_GET_MIN_PU_BACKLIGHT_COMPENSATION_CONTROL (0x8221U)
#define USB_DEVICE_VIDEO_GET_MIN_PU_BRIGHTNESS_CONTROL (0x8222U)
#define USB_DEVICE_VIDEO_GET_MIN_PU_CONTRACT_CONTROL (0x8223U)
#define USB_DEVICE_VIDEO_GET_MIN_PU_GAIN_CONTROL (0x8224U)
#define USB_DEVICE_VIDEO_GET_MIN_PU_HUE_CONTROL (0x8226U)
#define USB_DEVICE_VIDEO_GET_MIN_PU_SATURATION_CONTROL (0x8227U)
#define USB_DEVICE_VIDEO_GET_MIN_PU_SHARRNESS_CONTROL (0x8228U)
#define USB_DEVICE_VIDEO_GET_MIN_PU_GAMMA_CONTROL (0x8229U)
#define USB_DEVICE_VIDEO_GET_MIN_PU_WHITE_BALANCE_TEMPERATURE_CONTROL (0x822AU)
#define USB_DEVICE_VIDEO_GET_MIN_PU_WHITE_BALANCE_COMPONENT_CONTROL (0x822CU)
#define USB_DEVICE_VIDEO_GET_MIN_PU_DIGITAL_MULTIPLIER_CONTROL (0x822EU)
#define USB_DEVICE_VIDEO_GET_MIN_PU_DIGITAL_MULTIPLIER_LIMIT_CONTROL (0x822FU)

#define USB_DEVICE_VIDEO_GET_MIN_CT_EXPOSURE_TIME_ABSOLUTE_CONTROL (0x8244U)
#define USB_DEVICE_VIDEO_GET_MIN_CT_FOCUS_ABSOLUTE_CONTROL (0x8246U)
#define USB_DEVICE_VIDEO_GET_MIN_CT_FOCUS_RELATIVE_CONTROL (0x8247U)
#define USB_DEVICE_VIDEO_GET_MIN_CT_IRIS_ABSOLUTE_CONTROL (0x8249U)
#define USB_DEVICE_VIDEO_GET_MIN_CT_ZOOM_ABSOLUTE_CONTROL (0x824BU)
#define USB_DEVICE_VIDEO_GET_MIN_CT_ZOOM_RELATIVE_CONTROL (0x824CU)
#define USB_DEVICE_VIDEO_GET_MIN_CT_PANTILT_ABSOLUTE_CONTROL (0x824DU)
#define USB_DEVICE_VIDEO_GET_MIN_CT_PANTILT_RELATIVE_CONTROL (0x824EU)
#define USB_DEVICE_VIDEO_GET_MIN_CT_ROLL_ABSOLUTE_CONTROL (0x824FU)
#define USB_DEVICE_VIDEO_GET_MIN_CT_ROLL_RELATIVE_CONTROL (0x8250U)
#if defined(USB_DEVICE_VIDEO_CLASS_VERSION_1_5) && USB_DEVICE_VIDEO_CLASS_VERSION_1_5
#define USB_DEVICE_VIDEO_GET_MIN_CT_DIGITAL_WINDOW_CONTROL (0x8251U)
#define USB_DEVICE_VIDEO_GET_MIN_CT_REGION_OF_INTEREST_CONTROL (0x8252U)
#endif

#define USB_DEVICE_VIDEO_GET_MIN_VS_PROBE_CONTROL (0x8261U)
#define USB_DEVICE_VIDEO_GET_MIN_VS_STILL_PROBE_CONTROL (0x8263U)
#define USB_DEVICE_VIDEO_GET_MIN_VS_UPDATE_FRAME_SEGMENT_CONTROL (0x8268U)
#define USB_DEVICE_VIDEO_GET_MIN_VS_SYNCH_DELAY_CONTROL (0x8269U)

#if defined(USB_DEVICE_VIDEO_CLASS_VERSION_1_5) && USB_DEVICE_VIDEO_CLASS_VERSION_1_5
#define USB_DEVICE_VIDEO_GET_MIN_EU_VIDEO_RESOLUTION_CONTROL (0x8283U)
#define USB_DEVICE_VIDEO_GET_MIN_EU_MIN_FRAME_INTERVAL_CONTROL (0x8284U)
#define USB_DEVICE_VIDEO_GET_MIN_EU_SLICE_MODE_CONTROL (0x8285U)
#define USB_DEVICE_VIDEO_GET_MIN_EU_AVERAGE_BITRATE_CONTROL (0x8287U)
#define USB_DEVICE_VIDEO_GET_MIN_EU_CPB_SIZE_CONTROL (0x8288U)
#define USB_DEVICE_VIDEO_GET_MIN_EU_PEAK_BIT_RATE_CONTROL (0x8289U)
#define USB_DEVICE_VIDEO_GET_MIN_EU_QUANTIZATION_PARAMS_CONTROL (0x828AU)
#define USB_DEVICE_VIDEO_GET_MIN_EU_SYNC_REF_FRAME_CONTROL (0x828BU)
#define USB_DEVICE_VIDEO_GET_MIN_EU_LEVEL_IDC_LIMIT_CONTROL (0x828FU)
#define USB_DEVICE_VIDEO_GET_MIN_EU_SEI_PAYLOADTYPE_CONTROL (0x8290U)
#define USB_DEVICE_VIDEO_GET_MIN_EU_QP_RANGE_CONTROL (0x8291U)
#endif

/*! @brief Video device class-specific request GET MAX COMMAND */
#define USB_DEVICE_VIDEO_GET_MAX_PU_BACKLIGHT_COMPENSATION_CONTROL (0x8321U)
#define USB_DEVICE_VIDEO_GET_MAX_PU_BRIGHTNESS_CONTROL (0x8322U)
#define USB_DEVICE_VIDEO_GET_MAX_PU_CONTRACT_CONTROL (0x8323U)
#define USB_DEVICE_VIDEO_GET_MAX_PU_GAIN_CONTROL (0x8324U)
#define USB_DEVICE_VIDEO_GET_MAX_PU_HUE_CONTROL (0x8326U)
#define USB_DEVICE_VIDEO_GET_MAX_PU_SATURATION_CONTROL (0x8327U)
#define USB_DEVICE_VIDEO_GET_MAX_PU_SHARRNESS_CONTROL (0x8328U)
#define USB_DEVICE_VIDEO_GET_MAX_PU_GAMMA_CONTROL (0x8329U)
#define USB_DEVICE_VIDEO_GET_MAX_PU_WHITE_BALANCE_TEMPERATURE_CONTROL (0x832AU)
#define USB_DEVICE_VIDEO_GET_MAX_PU_WHITE_BALANCE_COMPONENT_CONTROL (0x832CU)
#define USB_DEVICE_VIDEO_GET_MAX_PU_DIGITAL_MULTIPLIER_CONTROL (0x832EU)
#define USB_DEVICE_VIDEO_GET_MAX_PU_DIGITAL_MULTIPLIER_LIMIT_CONTROL (0x832FU)

#define USB_DEVICE_VIDEO_GET_MAX_CT_EXPOSURE_TIME_ABSOLUTE_CONTROL (0x8344U)
#define USB_DEVICE_VIDEO_GET_MAX_CT_FOCUS_ABSOLUTE_CONTROL (0x8346U)
#define USB_DEVICE_VIDEO_GET_MAX_CT_FOCUS_RELATIVE_CONTROL (0x8347U)
#define USB_DEVICE_VIDEO_GET_MAX_CT_IRIS_ABSOLUTE_CONTROL (0x8349U)
#define USB_DEVICE_VIDEO_GET_MAX_CT_ZOOM_ABSOLUTE_CONTROL (0x834BU)
#define USB_DEVICE_VIDEO_GET_MAX_CT_ZOOM_RELATIVE_CONTROL (0x834CU)
#define USB_DEVICE_VIDEO_GET_MAX_CT_PANTILT_ABSOLUTE_CONTROL (0x834DU)
#define USB_DEVICE_VIDEO_GET_MAX_CT_PANTILT_RELATIVE_CONTROL (0x834EU)
#define USB_DEVICE_VIDEO_GET_MAX_CT_ROLL_ABSOLUTE_CONTROL (0x834FU)
#define USB_DEVICE_VIDEO_GET_MAX_CT_ROLL_RELATIVE_CONTROL (0x8350U)
#if defined(USB_DEVICE_VIDEO_CLASS_VERSION_1_5) && USB_DEVICE_VIDEO_CLASS_VERSION_1_5
#define USB_DEVICE_VIDEO_GET_MAX_CT_DIGITAL_WINDOW_CONTROL (0x8351U)
#define USB_DEVICE_VIDEO_GET_MAX_CT_REGION_OF_INTEREST_CONTROL (0x8352U)
#endif

#define USB_DEVICE_VIDEO_GET_MAX_VS_PROBE_CONTROL (0x8361U)
#define USB_DEVICE_VIDEO_GET_MAX_VS_STILL_PROBE_CONTROL (0x8363U)
#define USB_DEVICE_VIDEO_GET_MAX_VS_UPDATE_FRAME_SEGMENT_CONTROL (0x8368U)
#define USB_DEVICE_VIDEO_GET_MAX_VS_SYNCH_DELAY_CONTROL (0x8369U)

#if defined(USB_DEVICE_VIDEO_CLASS_VERSION_1_5) && USB_DEVICE_VIDEO_CLASS_VERSION_1_5
#define USB_DEVICE_VIDEO_GET_MAX_EU_VIDEO_RESOLUTION_CONTROL (0x8383U)
#define USB_DEVICE_VIDEO_GET_MAX_EU_MIN_FRAME_INTERVAL_CONTROL (0x8384U)
#define USB_DEVICE_VIDEO_GET_MAX_EU_SLICE_MODE_CONTROL (0x8385U)
#define USB_DEVICE_VIDEO_GET_MAX_EU_AVERAGE_BITRATE_CONTROL (0x8387U)
#define USB_DEVICE_VIDEO_GET_MAX_EU_CPB_SIZE_CONTROL (0x8388U)
#define USB_DEVICE_VIDEO_GET_MAX_EU_PEAK_BIT_RATE_CONTROL (0x8389U)
#define USB_DEVICE_VIDEO_GET_MAX_EU_QUANTIZATION_PARAMS_CONTROL (0x838AU)
#define USB_DEVICE_VIDEO_GET_MAX_EU_SYNC_REF_FRAME_CONTROL (0x838BU)
#define USB_DEVICE_VIDEO_GET_MAX_EU_LTR_BUFFER_CONTROL (0x838CU)
#define USB_DEVICE_VIDEO_GET_MAX_EU_LEVEL_IDC_LIMIT_CONTROL (0x838FU)
#define USB_DEVICE_VIDEO_GET_MAX_EU_SEI_PAYLOADTYPE_CONTROL (0x8390U)
#define USB_DEVICE_VIDEO_GET_MAX_EU_QP_RANGE_CONTROL (0x8391U)
#endif

/*! @brief Video device class-specific request GET RES COMMAND */
#define USB_DEVICE_VIDEO_GET_RES_PU_BACKLIGHT_COMPENSATION_CONTROL (0x8421U)
#define USB_DEVICE_VIDEO_GET_RES_PU_BRIGHTNESS_CONTROL (0x8422U)
#define USB_DEVICE_VIDEO_GET_RES_PU_CONTRACT_CONTROL (0x8423U)
#define USB_DEVICE_VIDEO_GET_RES_PU_GAIN_CONTROL (0x8424U)
#define USB_DEVICE_VIDEO_GET_RES_PU_HUE_CONTROL (0x8426U)
#define USB_DEVICE_VIDEO_GET_RES_PU_SATURATION_CONTROL (0x8427U)
#define USB_DEVICE_VIDEO_GET_RES_PU_SHARRNESS_CONTROL (0x8428U)
#define USB_DEVICE_VIDEO_GET_RES_PU_GAMMA_CONTROL (0x8429U)
#define USB_DEVICE_VIDEO_GET_RES_PU_WHITE_BALANCE_TEMPERATURE_CONTROL (0x842AU)
#define USB_DEVICE_VIDEO_GET_RES_PU_WHITE_BALANCE_COMPONENT_CONTROL (0x842CU)
#define USB_DEVICE_VIDEO_GET_RES_PU_DIGITAL_MULTIPLIER_CONTROL (0x842EU)
#define USB_DEVICE_VIDEO_GET_RES_PU_DIGITAL_MULTIPLIER_LIMIT_CONTROL (0x842FU)

#define USB_DEVICE_VIDEO_GET_RES_CT_AE_MODE_CONTROL (0x8442U)
#define USB_DEVICE_VIDEO_GET_RES_CT_EXPOSURE_TIME_ABSOLUTE_CONTROL (0x8444U)
#define USB_DEVICE_VIDEO_GET_RES_CT_FOCUS_ABSOLUTE_CONTROL (0x8446U)
#define USB_DEVICE_VIDEO_GET_RES_CT_FOCUS_RELATIVE_CONTROL (0x8447U)
#define USB_DEVICE_VIDEO_GET_RES_CT_IRIS_ABSOLUTE_CONTROL (0x8449U)
#define USB_DEVICE_VIDEO_GET_RES_CT_ZOOM_ABSOLUTE_CONTROL (0x844BU)
#define USB_DEVICE_VIDEO_GET_RES_CT_ZOOM_RELATIVE_CONTROL (0x844CU)
#define USB_DEVICE_VIDEO_GET_RES_CT_PANTILT_ABSOLUTE_CONTROL (0x844DU)
#define USB_DEVICE_VIDEO_GET_RES_CT_PANTILT_RELATIVE_CONTROL (0x844EU)
#define USB_DEVICE_VIDEO_GET_RES_CT_ROLL_ABSOLUTE_CONTROL (0x844FU)
#define USB_DEVICE_VIDEO_GET_RES_CT_ROLL_RELATIVE_CONTROL (0x8450U)

#define USB_DEVICE_VIDEO_GET_RES_VS_PROBE_CONTROL (0x8461U)
#define USB_DEVICE_VIDEO_GET_RES_VS_STILL_PROBE_CONTROL (0x8463U)
#define USB_DEVICE_VIDEO_GET_RES_VS_UPDATE_FRAME_SEGMENT_CONTROL (0x8468U)
#define USB_DEVICE_VIDEO_GET_RES_VS_SYNCH_DELAY_CONTROL (0x8469U)

#if defined(USB_DEVICE_VIDEO_CLASS_VERSION_1_5) && USB_DEVICE_VIDEO_CLASS_VERSION_1_5
#define USB_DEVICE_VIDEO_GET_RES_EU_AVERAGE_BITRATE_CONTROL (0x8487U)
#define USB_DEVICE_VIDEO_GET_RES_EU_CPB_SIZE_CONTROL (0x8488U)
#define USB_DEVICE_VIDEO_GET_RES_EU_PEAK_BIT_RATE_CONTROL (0x8489U)
#define USB_DEVICE_VIDEO_GET_RES_EU_QUANTIZATION_PARAMS_CONTROL (0x848AU)
#define USB_DEVICE_VIDEO_GET_RES_EU_ERROR_RESILIENCY_CONTROL (0x8494U)
#endif

/*! @brief Video device class-specific request GET LEN COMMAND */

#define USB_DEVICE_VIDEO_GET_LEN_VS_PROBE_CONTROL (0x8561U)
#define USB_DEVICE_VIDEO_GET_LEN_VS_COMMIT_CONTROL (0x8562U)
#define USB_DEVICE_VIDEO_GET_LEN_VS_STILL_PROBE_CONTROL (0x8563U)
#define USB_DEVICE_VIDEO_GET_LEN_VS_STILL_COMMIT_CONTROL (0x8564U)

#if defined(USB_DEVICE_VIDEO_CLASS_VERSION_1_5) && USB_DEVICE_VIDEO_CLASS_VERSION_1_5
#define USB_DEVICE_VIDEO_GET_LEN_EU_SELECT_LAYER_CONTROL (0x8581U)
#define USB_DEVICE_VIDEO_GET_LEN_EU_PROFILE_TOOLSET_CONTROL (0x8582U)
#define USB_DEVICE_VIDEO_GET_LEN_EU_VIDEO_RESOLUTION_CONTROL (0x8583U)
#define USB_DEVICE_VIDEO_GET_LEN_EU_MIN_FRAME_INTERVAL_CONTROL (0x8584U)
#define USB_DEVICE_VIDEO_GET_LEN_EU_SLICE_MODE_CONTROL (0x8585U)
#define USB_DEVICE_VIDEO_GET_LEN_EU_RATE_CONTROL_MODE_CONTROL (0x8586U)
#define USB_DEVICE_VIDEO_GET_LEN_EU_AVERAGE_BITRATE_CONTROL (0x8587U)
#define USB_DEVICE_VIDEO_GET_LEN_EU_CPB_SIZE_CONTROL (0x8588U)
#define USB_DEVICE_VIDEO_GET_LEN_EU_PEAK_BIT_RATE_CONTROL (0x8589U)
#define USB_DEVICE_VIDEO_GET_LEN_EU_QUANTIZATION_PARAMS_CONTROL (0x858AU)
#define USB_DEVICE_VIDEO_GET_LEN_EU_SYNC_REF_FRAME_CONTROL (0x858BU)
#define USB_DEVICE_VIDEO_GET_LEN_EU_LTR_BUFFER_CONTROL (0x858CU)
#define USB_DEVICE_VIDEO_GET_LEN_EU_LTR_PICTURE_CONTROL (0x858DU)
#define USB_DEVICE_VIDEO_GET_LEN_EU_LTR_VALIDATION_CONTROL (0x858EU)
#define USB_DEVICE_VIDEO_GET_LEN_EU_QP_RANGE_CONTROL (0x8591U)
#define USB_DEVICE_VIDEO_GET_LEN_EU_PRIORITY_CONTROL (0x8592U)
#define USB_DEVICE_VIDEO_GET_LEN_EU_START_OR_STOP_LAYER_CONTROL (0x8593U)
#endif

/*! @brief Video device class-specific request GET INFO COMMAND */
#define USB_DEVICE_VIDEO_GET_INFO_VC_POWER_MODE_CONTROL (0x8601U)
#define USB_DEVICE_VIDEO_GET_INFO_VC_ERROR_CODE_CONTROL (0x8602U)

#define USB_DEVICE_VIDEO_GET_INFO_PU_BACKLIGHT_COMPENSATION_CONTROL (0x8621U)
#define USB_DEVICE_VIDEO_GET_INFO_PU_BRIGHTNESS_CONTROL (0x8622U)
#define USB_DEVICE_VIDEO_GET_INFO_PU_CONTRACT_CONTROL (0x8623U)
#define USB_DEVICE_VIDEO_GET_INFO_PU_GAIN_CONTROL (0x8624U)
#define USB_DEVICE_VIDEO_GET_INFO_PU_POWER_LINE_FREQUENCY_CONTROL (0x8625U)
#define USB_DEVICE_VIDEO_GET_INFO_PU_HUE_CONTROL (0x8626U)
#define USB_DEVICE_VIDEO_GET_INFO_PU_SATURATION_CONTROL (0x8627U)
#define USB_DEVICE_VIDEO_GET_INFO_PU_SHARRNESS_CONTROL (0x8628U)
#define USB_DEVICE_VIDEO_GET_INFO_PU_GAMMA_CONTROL (0x8629U)
#define USB_DEVICE_VIDEO_GET_INFO_PU_WHITE_BALANCE_TEMPERATURE_CONTROL (0x862AU)
#define USB_DEVICE_VIDEO_GET_INFO_PU_WHITE_BALANCE_TEMPERATURE_AUTO_CONTROL (0x862BU)
#define USB_DEVICE_VIDEO_GET_INFO_PU_WHITE_BALANCE_COMPONENT_CONTROL (0x862CU)
#define USB_DEVICE_VIDEO_GET_INFO_PU_WHITE_BALANCE_COMPONENT_AUTO_CONTROL (0x862DU)
#define USB_DEVICE_VIDEO_GET_INFO_PU_DIGITAL_MULTIPLIER_CONTROL (0x862EU)
#define USB_DEVICE_VIDEO_GET_INFO_PU_DIGITAL_MULTIPLIER_LIMIT_CONTROL (0x862FU)
#define USB_DEVICE_VIDEO_GET_INFO_PU_HUE_AUTO_CONTROL (0x8630U)
#define USB_DEVICE_VIDEO_GET_INFO_PU_ANALOG_VIDEO_STANDARD_CONTROL (0x8631U)
#define USB_DEVICE_VIDEO_GET_INFO_PU_ANALOG_LOCK_STATUS_CONTROL (0x8632U)
#if defined(USB_DEVICE_VIDEO_CLASS_VERSION_1_5) && USB_DEVICE_VIDEO_CLASS_VERSION_1_5
#define USB_DEVICE_VIDEO_GET_INFO_PU_CONTRAST_AUTO_CONTROL (0x8633U)
#endif

#define USB_DEVICE_VIDEO_GET_INFO_CT_SCANNING_MODE_CONTROL (0x8641U)
#define USB_DEVICE_VIDEO_GET_INFO_CT_AE_MODE_CONTROL (0x8642U)
#define USB_DEVICE_VIDEO_GET_INFO_CT_AE_PRIORITY_CONTROL (0x8643U)
#define USB_DEVICE_VIDEO_GET_INFO_CT_EXPOSURE_TIME_ABSOLUTE_CONTROL (0x8644U)
#define USB_DEVICE_VIDEO_GET_INFO_CT_EXPOSURE_TIME_RELATIVE_CONTROL (0x8645U)
#define USB_DEVICE_VIDEO_GET_INFO_CT_FOCUS_ABSOLUTE_CONTROL (0x8646U)
#define USB_DEVICE_VIDEO_GET_INFO_CT_FOCUS_RELATIVE_CONTROL (0x8647U)
#define USB_DEVICE_VIDEO_GET_INFO_CT_FOCUS_AUTO_CONTROL (0x8648U)
#define USB_DEVICE_VIDEO_GET_INFO_CT_IRIS_ABSOLUTE_CONTROL (0x8649U)
#define USB_DEVICE_VIDEO_GET_INFO_CT_IRIS_RELATIVE_CONTROL (0x864AU)
#define USB_DEVICE_VIDEO_GET_INFO_CT_ZOOM_ABSOLUTE_CONTROL (0x864BU)
#define USB_DEVICE_VIDEO_GET_INFO_CT_ZOOM_RELATIVE_CONTROL (0x864CU)
#define USB_DEVICE_VIDEO_GET_INFO_CT_PANTILT_ABSOLUTE_CONTROL (0x864DU)
#define USB_DEVICE_VIDEO_GET_INFO_CT_PANTILT_RELATIVE_CONTROL (0x864EU)
#define USB_DEVICE_VIDEO_GET_INFO_CT_ROLL_ABSOLUTE_CONTROL (0x864FU)
#define USB_DEVICE_VIDEO_GET_INFO_CT_ROLL_RELATIVE_CONTROL (0x8650U)
#define USB_DEVICE_VIDEO_GET_INFO_CT_PRIVACY_CONTROL (0x8651U)
#if defined(USB_DEVICE_VIDEO_CLASS_VERSION_1_5) && USB_DEVICE_VIDEO_CLASS_VERSION_1_5
#define USB_DEVICE_VIDEO_GET_INFO_CT_FOCUS_SIMPLE_CONTROL (0x8652U)
#endif

#define USB_DEVICE_VIDEO_GET_INFO_VS_PROBE_CONTROL (0x8661U)
#define USB_DEVICE_VIDEO_GET_INFO_VS_COMMIT_CONTROL (0x8662U)
#define USB_DEVICE_VIDEO_GET_INFO_VS_STILL_PROBE_CONTROL (0x8663U)
#define USB_DEVICE_VIDEO_GET_INFO_VS_STILL_COMMIT_CONTROL (0x8664U)
#define USB_DEVICE_VIDEO_GET_INFO_VS_STILL_IMAGE_TRIGGER_CONTROL (0x8665U)
#define USB_DEVICE_VIDEO_GET_INFO_VS_STREAM_ERROR_CODE_CONTROL (0x8666U)
#define USB_DEVICE_VIDEO_GET_INFO_VS_GENERATE_KEY_FRAME_CONTROL (0x8667U)
#define USB_DEVICE_VIDEO_GET_INFO_VS_UPDATE_FRAME_SEGMENT_CONTROL (0x8668U)
#define USB_DEVICE_VIDEO_GET_INFO_VS_SYNCH_DELAY_CONTROL (0x8669U)

#if defined(USB_DEVICE_VIDEO_CLASS_VERSION_1_5) && USB_DEVICE_VIDEO_CLASS_VERSION_1_5
#define USB_DEVICE_VIDEO_GET_INFO_EU_SELECT_LAYER_CONTROL (0x8681U)
#define USB_DEVICE_VIDEO_GET_INFO_EU_PROFILE_TOOLSET_CONTROL (0x8682U)
#define USB_DEVICE_VIDEO_GET_INFO_EU_VIDEO_RESOLUTION_CONTROL (0x8683U)
#define USB_DEVICE_VIDEO_GET_INFO_EU_MIN_FRAME_INTERVAL_CONTROL (0x8684U)
#define USB_DEVICE_VIDEO_GET_INFO_EU_SLICE_MODE_CONTROL (0x8685U)
#define USB_DEVICE_VIDEO_GET_INFO_EU_RATE_CONTROL_MODE_CONTROL (0x8686U)
#define USB_DEVICE_VIDEO_GET_INFO_EU_AVERAGE_BITRATE_CONTROL (0x8687U)
#define USB_DEVICE_VIDEO_GET_INFO_EU_CPB_SIZE_CONTROL (0x8688U)
#define USB_DEVICE_VIDEO_GET_INFO_EU_PEAK_BIT_RATE_CONTROL (0x8689U)
#define USB_DEVICE_VIDEO_GET_INFO_EU_QUANTIZATION_PARAMS_CONTROL (0x868AU)
#define USB_DEVICE_VIDEO_GET_INFO_EU_SYNC_REF_FRAME_CONTROL (0x868BU)
#define USB_DEVICE_VIDEO_GET_INFO_EU_LTR_BUFFER_CONTROL (0x868CU)
#define USB_DEVICE_VIDEO_GET_INFO_EU_LTR_PICTURE_CONTROL (0x868DU)
#define USB_DEVICE_VIDEO_GET_INFO_EU_LTR_VALIDATION_CONTROL (0x868EU)
#define USB_DEVICE_VIDEO_GET_INFO_EU_SEI_PAYLOADTYPE_CONTROL (0x8690U)
#define USB_DEVICE_VIDEO_GET_INFO_EU_QP_RANGE_CONTROL (0x8691U)
#define USB_DEVICE_VIDEO_GET_INFO_EU_PRIORITY_CONTROL (0x8692U)
#define USB_DEVICE_VIDEO_GET_INFO_EU_START_OR_STOP_LAYER_CONTROL (0x8693U)
#endif

/*! @brief Video device class-specific request GET DEF COMMAND */
#define USB_DEVICE_VIDEO_GET_DEF_PU_BACKLIGHT_COMPENSATION_CONTROL (0x8721U)
#define USB_DEVICE_VIDEO_GET_DEF_PU_BRIGHTNESS_CONTROL (0x8722U)
#define USB_DEVICE_VIDEO_GET_DEF_PU_CONTRACT_CONTROL (0x8723U)
#define USB_DEVICE_VIDEO_GET_DEF_PU_GAIN_CONTROL (0x8724U)
#define USB_DEVICE_VIDEO_GET_DEF_PU_POWER_LINE_FREQUENCY_CONTROL (0x8725U)
#define USB_DEVICE_VIDEO_GET_DEF_PU_HUE_CONTROL (0x8726U)
#define USB_DEVICE_VIDEO_GET_DEF_PU_SATURATION_CONTROL (0x8727U)
#define USB_DEVICE_VIDEO_GET_DEF_PU_SHARRNESS_CONTROL (0x8728U)
#define USB_DEVICE_VIDEO_GET_DEF_PU_GAMMA_CONTROL (0x8729U)
#define USB_DEVICE_VIDEO_GET_DEF_PU_WHITE_BALANCE_TEMPERATURE_CONTROL (0x872AU)
#define USB_DEVICE_VIDEO_GET_DEF_PU_WHITE_BALANCE_TEMPERATURE_AUTO_CONTROL (0x872BU)
#define USB_DEVICE_VIDEO_GET_DEF_PU_WHITE_BALANCE_COMPONENT_CONTROL (0x872CU)
#define USB_DEVICE_VIDEO_GET_DEF_PU_WHITE_BALANCE_COMPONENT_AUTO_CONTROL (0x872DU)
#define USB_DEVICE_VIDEO_GET_DEF_PU_DIGITAL_MULTIPLIER_CONTROL (0x872EU)
#define USB_DEVICE_VIDEO_GET_DEF_PU_DIGITAL_MULTIPLIER_LIMIT_CONTROL (0x872FU)
#define USB_DEVICE_VIDEO_GET_DEF_PU_HUE_AUTO_CONTROL (0x8730U)
#if defined(USB_DEVICE_VIDEO_CLASS_VERSION_1_5) && USB_DEVICE_VIDEO_CLASS_VERSION_1_5
#define USB_DEVICE_VIDEO_GET_DEF_PU_CONTRAST_AUTO_CONTROL (0x8731U)
#endif

#define USB_DEVICE_VIDEO_GET_DEF_CT_AE_MODE_CONTROL (0x8742U)
#define USB_DEVICE_VIDEO_GET_DEF_CT_EXPOSURE_TIME_ABSOLUTE_CONTROL (0x8744U)
#define USB_DEVICE_VIDEO_GET_DEF_CT_FOCUS_ABSOLUTE_CONTROL (0x8746U)
#define USB_DEVICE_VIDEO_GET_DEF_CT_FOCUS_RELATIVE_CONTROL (0x8747U)
#define USB_DEVICE_VIDEO_GET_DEF_CT_FOCUS_AUTO_CONTROL (0x8748U)
#define USB_DEVICE_VIDEO_GET_DEF_CT_IRIS_ABSOLUTE_CONTROL (0x8749U)
#define USB_DEVICE_VIDEO_GET_DEF_CT_ZOOM_ABSOLUTE_CONTROL (0x874BU)
#define USB_DEVICE_VIDEO_GET_DEF_CT_ZOOM_RELATIVE_CONTROL (0x874CU)
#define USB_DEVICE_VIDEO_GET_DEF_CT_PANTILT_ABSOLUTE_CONTROL (0x874DU)
#define USB_DEVICE_VIDEO_GET_DEF_CT_PANTILT_RELATIVE_CONTROL (0x874EU)
#define USB_DEVICE_VIDEO_GET_DEF_CT_ROLL_ABSOLUTE_CONTROL (0x874FU)
#define USB_DEVICE_VIDEO_GET_DEF_CT_ROLL_RELATIVE_CONTROL (0x8750U)
#if defined(USB_DEVICE_VIDEO_CLASS_VERSION_1_5) && USB_DEVICE_VIDEO_CLASS_VERSION_1_5
#define USB_DEVICE_VIDEO_GET_DEF_CT_FOCUS_SIMPLE_CONTROL (0x8751U)
#define USB_DEVICE_VIDEO_GET_DEF_CT_DIGITAL_WINDOW_CONTROL (0x8752U)
#define USB_DEVICE_VIDEO_GET_DEF_CT_REGION_OF_INTEREST_CONTROL (0x8753U)
#endif

#define USB_DEVICE_VIDEO_GET_DEF_VS_PROBE_CONTROL (0x8761U)
#define USB_DEVICE_VIDEO_GET_DEF_VS_STILL_PROBE_CONTROL (0x8763U)
#define USB_DEVICE_VIDEO_GET_DEF_VS_UPDATE_FRAME_SEGMENT_CONTROL (0x8768U)
#define USB_DEVICE_VIDEO_GET_DEF_VS_SYNCH_DELAY_CONTROL (0x8769U)

#if defined(USB_DEVICE_VIDEO_CLASS_VERSION_1_5) && USB_DEVICE_VIDEO_CLASS_VERSION_1_5
#define USB_DEVICE_VIDEO_GET_DEF_EU_PROFILE_TOOLSET_CONTROL (0x8782U)
#define USB_DEVICE_VIDEO_GET_DEF_EU_VIDEO_RESOLUTION_CONTROL (0x8783U)
#define USB_DEVICE_VIDEO_GET_DEF_EU_MIN_FRAME_INTERVAL_CONTROL (0x8784U)
#define USB_DEVICE_VIDEO_GET_DEF_EU_SLICE_MODE_CONTROL (0x8785U)
#define USB_DEVICE_VIDEO_GET_DEF_EU_RATE_CONTROL_MODE_CONTROL (0x8786U)
#define USB_DEVICE_VIDEO_GET_DEF_EU_AVERAGE_BITRATE_CONTROL (0x8787U)
#define USB_DEVICE_VIDEO_GET_DEF_EU_CPB_SIZE_CONTROL (0x8788U)
#define USB_DEVICE_VIDEO_GET_DEF_EU_PEAK_BIT_RATE_CONTROL (0x8789U)
#define USB_DEVICE_VIDEO_GET_DEF_EU_QUANTIZATION_PARAMS_CONTROL (0x878AU)
#define USB_DEVICE_VIDEO_GET_DEF_EU_LTR_BUFFER_CONTROL (0x878CU)
#define USB_DEVICE_VIDEO_GET_DEF_EU_LTR_PICTURE_CONTROL (0x878DU)
#define USB_DEVICE_VIDEO_GET_DEF_EU_LTR_VALIDATION_CONTROL (0x878EU)
#define USB_DEVICE_VIDEO_GET_DEF_EU_LEVEL_IDC_LIMIT_CONTROL (0x878FU)
#define USB_DEVICE_VIDEO_GET_DEF_EU_SEI_PAYLOADTYPE_CONTROL (0x8790U)
#define USB_DEVICE_VIDEO_GET_DEF_EU_QP_RANGE_CONTROL (0x8791U)
#define USB_DEVICE_VIDEO_GET_DEF_EU_ERROR_RESILIENCY_CONTROL (0x8794U)
#endif

/*! @brief Video device class-specific request SET CUR COMMAND */
#define USB_DEVICE_VIDEO_SET_CUR_VC_POWER_MODE_CONTROL (0x0101U)

#define USB_DEVICE_VIDEO_SET_CUR_PU_BACKLIGHT_COMPENSATION_CONTROL (0x0121U)
#define USB_DEVICE_VIDEO_SET_CUR_PU_BRIGHTNESS_CONTROL (0x0122U)
#define USB_DEVICE_VIDEO_SET_CUR_PU_CONTRACT_CONTROL (0x0123U)
#define USB_DEVICE_VIDEO_SET_CUR_PU_GAIN_CONTROL (0x0124U)
#define USB_DEVICE_VIDEO_SET_CUR_PU_POWER_LINE_FREQUENCY_CONTROL (0x0125U)
#define USB_DEVICE_VIDEO_SET_CUR_PU_HUE_CONTROL (0x0126U)
#define USB_DEVICE_VIDEO_SET_CUR_PU_SATURATION_CONTROL (0x0127U)
#define USB_DEVICE_VIDEO_SET_CUR_PU_SHARRNESS_CONTROL (0x0128U)
#define USB_DEVICE_VIDEO_SET_CUR_PU_GAMMA_CONTROL (0x0129U)
#define USB_DEVICE_VIDEO_SET_CUR_PU_WHITE_BALANCE_TEMPERATURE_CONTROL (0x012AU)
#define USB_DEVICE_VIDEO_SET_CUR_PU_WHITE_BALANCE_TEMPERATURE_AUTO_CONTROL (0x012BU)
#define USB_DEVICE_VIDEO_SET_CUR_PU_WHITE_BALANCE_COMPONENT_CONTROL (0x012CU)
#define USB_DEVICE_VIDEO_SET_CUR_PU_WHITE_BALANCE_COMPONENT_AUTO_CONTROL (0x012DU)
#define USB_DEVICE_VIDEO_SET_CUR_PU_DIGITAL_MULTIPLIER_CONTROL (0x012EU)
#define USB_DEVICE_VIDEO_SET_CUR_PU_DIGITAL_MULTIPLIER_LIMIT_CONTROL (0x012FU)
#define USB_DEVICE_VIDEO_SET_CUR_PU_HUE_AUTO_CONTROL (0x0130U)
#if defined(USB_DEVICE_VIDEO_CLASS_VERSION_1_5) && USB_DEVICE_VIDEO_CLASS_VERSION_1_5
#define USB_DEVICE_VIDEO_SET_CUR_PU_CONTRAST_AUTO_CONTROL (0x0131U)
#endif

#define USB_DEVICE_VIDEO_SET_CUR_CT_SCANNING_MODE_CONTROL (0x0141U)
#define USB_DEVICE_VIDEO_SET_CUR_CT_AE_MODE_CONTROL (0x0142U)
#define USB_DEVICE_VIDEO_SET_CUR_CT_AE_PRIORITY_CONTROL (0x0143U)
#define USB_DEVICE_VIDEO_SET_CUR_CT_EXPOSURE_TIME_ABSOLUTE_CONTROL (0x0144U)
#define USB_DEVICE_VIDEO_SET_CUR_CT_EXPOSURE_TIME_RELATIVE_CONTROL (0x0145U)
#define USB_DEVICE_VIDEO_SET_CUR_CT_FOCUS_ABSOLUTE_CONTROL (0x0146U)
#define USB_DEVICE_VIDEO_SET_CUR_CT_FOCUS_RELATIVE_CONTROL (0x0147U)
#define USB_DEVICE_VIDEO_SET_CUR_CT_FOCUS_AUTO_CONTROL (0x0148U)
#define USB_DEVICE_VIDEO_SET_CUR_CT_IRIS_ABSOLUTE_CONTROL (0x0149U)
#define USB_DEVICE_VIDEO_SET_CUR_CT_IRIS_RELATIVE_CONTROL (0x014AU)
#define USB_DEVICE_VIDEO_SET_CUR_CT_ZOOM_ABSOLUTE_CONTROL (0x014BU)
#define USB_DEVICE_VIDEO_SET_CUR_CT_ZOOM_RELATIVE_CONTROL (0x014CU)
#define USB_DEVICE_VIDEO_SET_CUR_CT_PANTILT_ABSOLUTE_CONTROL (0x014DU)
#define USB_DEVICE_VIDEO_SET_CUR_CT_PANTILT_RELATIVE_CONTROL (0x014EU)
#define USB_DEVICE_VIDEO_SET_CUR_CT_ROLL_ABSOLUTE_CONTROL (0x014FU)
#define USB_DEVICE_VIDEO_SET_CUR_CT_ROLL_RELATIVE_CONTROL (0x0150U)
#define USB_DEVICE_VIDEO_SET_CUR_CT_PRIVACY_CONTROL (0x0151U)
#if defined(USB_DEVICE_VIDEO_CLASS_VERSION_1_5) && USB_DEVICE_VIDEO_CLASS_VERSION_1_5
#define USB_DEVICE_VIDEO_SET_CUR_CT_FOCUS_SIMPLE_CONTROL (0x0152U)
#define USB_DEVICE_VIDEO_SET_CUR_CT_DIGITAL_WINDOW_CONTROL (0x0153U)
#define USB_DEVICE_VIDEO_SET_CUR_CT_REGION_OF_INTEREST_CONTROL (0x0154U)
#endif

#define USB_DEVICE_VIDEO_SET_CUR_VS_PROBE_CONTROL (0x0161U)
#define USB_DEVICE_VIDEO_SET_CUR_VS_COMMIT_CONTROL (0x0162U)
#define USB_DEVICE_VIDEO_SET_CUR_VS_STILL_PROBE_CONTROL (0x0163U)
#define USB_DEVICE_VIDEO_SET_CUR_VS_STILL_COMMIT_CONTROL (0x0164U)
#define USB_DEVICE_VIDEO_SET_CUR_VS_STILL_IMAGE_TRIGGER_CONTROL (0x0165U)
#define USB_DEVICE_VIDEO_SET_CUR_VS_STREAM_ERROR_CODE_CONTROL (0x0166U)
#define USB_DEVICE_VIDEO_SET_CUR_VS_GENERATE_KEY_FRAME_CONTROL (0x0167U)
#define USB_DEVICE_VIDEO_SET_CUR_VS_UPDATE_FRAME_SEGMENT_CONTROL (0x0168U)
#define USB_DEVICE_VIDEO_SET_CUR_VS_SYNCH_DELAY_CONTROL (0x0169U)

#if defined(USB_DEVICE_VIDEO_CLASS_VERSION_1_5) && USB_DEVICE_VIDEO_CLASS_VERSION_1_5
#define USB_DEVICE_VIDEO_SET_CUR_EU_SELECT_LAYER_CONTROL (0x0181U)
#define USB_DEVICE_VIDEO_SET_CUR_EU_PROFILE_TOOLSET_CONTROL (0x0182U)
#define USB_DEVICE_VIDEO_SET_CUR_EU_VIDEO_RESOLUTION_CONTROL (0x0183U)
#define USB_DEVICE_VIDEO_SET_CUR_EU_MIN_FRAME_INTERVAL_CONTROL (0x0184U)
#define USB_DEVICE_VIDEO_SET_CUR_EU_SLICE_MODE_CONTROL (0x0185U)
#define USB_DEVICE_VIDEO_SET_CUR_EU_RATE_CONTROL_MODE_CONTROL (0x0186U)
#define USB_DEVICE_VIDEO_SET_CUR_EU_AVERAGE_BITRATE_CONTROL (0x0187U)
#define USB_DEVICE_VIDEO_SET_CUR_EU_CPB_SIZE_CONTROL (0x0188U)
#define USB_DEVICE_VIDEO_SET_CUR_EU_PEAK_BIT_RATE_CONTROL (0x0189U)
#define USB_DEVICE_VIDEO_SET_CUR_EU_QUANTIZATION_PARAMS_CONTROL (0x018AU)
#define USB_DEVICE_VIDEO_SET_CUR_EU_SYNC_REF_FRAME_CONTROL (0x018BU)
#define USB_DEVICE_VIDEO_SET_CUR_EU_LTR_BUFFER_CONTROL (0x018CU)
#define USB_DEVICE_VIDEO_SET_CUR_EU_LTR_PICTURE_CONTROL (0x018DU)
#define USB_DEVICE_VIDEO_SET_CUR_EU_LTR_VALIDATION_CONTROL (0x018EU)
#define USB_DEVICE_VIDEO_SET_CUR_EU_LEVEL_IDC_LIMIT_CONTROL (0x018FU)
#define USB_DEVICE_VIDEO_SET_CUR_EU_SEI_PAYLOADTYPE_CONTROL (0x0190U)
#define USB_DEVICE_VIDEO_SET_CUR_EU_QP_RANGE_CONTROL (0x0191U)
#define USB_DEVICE_VIDEO_SET_CUR_EU_PRIORITY_CONTROL (0x0192U)
#define USB_DEVICE_VIDEO_SET_CUR_EU_START_OR_STOP_LAYER_CONTROL (0x0193U)
#define USB_DEVICE_VIDEO_SET_CUR_EU_ERROR_RESILIENCY_CONTROL (0x0194U)
#endif

#endif /* __USB_DEVICE_VIDEO_H__ */
