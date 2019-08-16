/*
 *  Video for Linux Two controls header file
 *
 *  Copyright (C) 1999-2012 the contributors
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  Alternatively you can redistribute this file under the terms of the
 *  BSD license as stated below:
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions
 *  are met:
 *  1. Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer.
 *  2. Redistributions in binary form must reproduce the above copyright
 *     notice, this list of conditions and the following disclaimer in
 *     the documentation and/or other materials provided with the
 *     distribution.
 *  3. The names of its contributors may not be used to endorse or promote
 *     products derived from this software without specific prior written
 *     permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 *  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 *  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 *  A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 *  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 *  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED
 *  TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 *  PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
 *  LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
 *  NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 *  SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 *  The contents of this header was split off from videodev2.h. All control
 *  definitions should be added to this header, which is included by
 *  videodev2.h.
 */

#ifndef __LINUX_V4L2_CONTROLS_H
#define __LINUX_V4L2_CONTROLS_H

/* Control classes */
#define V4L2_CTRL_CLASS_USER		0x00980000	/* Old-style 'user' controls */
#define V4L2_CTRL_CLASS_MPEG		0x00990000	/* MPEG-compression controls */
#define V4L2_CTRL_CLASS_CAMERA		0x009a0000	/* Camera class controls */
#define V4L2_CTRL_CLASS_FM_TX		0x009b0000	/* FM Modulator control class */
#define V4L2_CTRL_CLASS_FLASH		0x009c0000	/* Camera flash controls */
#define V4L2_CTRL_CLASS_JPEG		0x009d0000	/* JPEG-compression controls */
#define V4L2_CTRL_CLASS_IMAGE_SOURCE	0x009e0000	/* Image source controls */
#define V4L2_CTRL_CLASS_IMAGE_PROC	0x009f0000	/* Image processing controls */
#define V4L2_CTRL_CLASS_DV		0x00a00000	/* Digital Video controls */
#define V4L2_CTRL_CLASS_FM_RX		0x00a10000	/* Digital Video controls */

/* User-class control IDs */

#define V4L2_CID_BASE			(V4L2_CTRL_CLASS_USER | 0x900)
#define V4L2_CID_USER_BASE 		V4L2_CID_BASE
#define V4L2_CID_USER_CLASS 		(V4L2_CTRL_CLASS_USER | 1)
#define V4L2_CID_BRIGHTNESS		(V4L2_CID_BASE+0)
#define V4L2_CID_CONTRAST		(V4L2_CID_BASE+1)
#define V4L2_CID_SATURATION		(V4L2_CID_BASE+2)
#define V4L2_CID_HUE			(V4L2_CID_BASE+3)
#define V4L2_CID_AUDIO_VOLUME		(V4L2_CID_BASE+5)
#define V4L2_CID_AUDIO_BALANCE		(V4L2_CID_BASE+6)
#define V4L2_CID_AUDIO_BASS		(V4L2_CID_BASE+7)
#define V4L2_CID_AUDIO_TREBLE		(V4L2_CID_BASE+8)
#define V4L2_CID_AUDIO_MUTE		(V4L2_CID_BASE+9)
#define V4L2_CID_AUDIO_LOUDNESS		(V4L2_CID_BASE+10)
#define V4L2_CID_BLACK_LEVEL		(V4L2_CID_BASE+11) /* Deprecated */
#define V4L2_CID_AUTO_WHITE_BALANCE	(V4L2_CID_BASE+12)
#define V4L2_CID_DO_WHITE_BALANCE	(V4L2_CID_BASE+13)
#define V4L2_CID_RED_BALANCE		(V4L2_CID_BASE+14)
#define V4L2_CID_BLUE_BALANCE		(V4L2_CID_BASE+15)
#define V4L2_CID_GAMMA			(V4L2_CID_BASE+16)
#define V4L2_CID_WHITENESS		(V4L2_CID_GAMMA) /* Deprecated */
#define V4L2_CID_EXPOSURE		(V4L2_CID_BASE+17)
#define V4L2_CID_AUTOGAIN		(V4L2_CID_BASE+18)
#define V4L2_CID_GAIN			(V4L2_CID_BASE+19)
#define V4L2_CID_HFLIP			(V4L2_CID_BASE+20)
#define V4L2_CID_VFLIP			(V4L2_CID_BASE+21)

#define V4L2_CID_POWER_LINE_FREQUENCY	(V4L2_CID_BASE+24)
enum v4l2_power_line_frequency {
	V4L2_CID_POWER_LINE_FREQUENCY_DISABLED	= 0,
	V4L2_CID_POWER_LINE_FREQUENCY_50HZ	= 1,
	V4L2_CID_POWER_LINE_FREQUENCY_60HZ	= 2,
	V4L2_CID_POWER_LINE_FREQUENCY_AUTO	= 3,
};
#define V4L2_CID_HUE_AUTO			(V4L2_CID_BASE+25)
#define V4L2_CID_WHITE_BALANCE_TEMPERATURE	(V4L2_CID_BASE+26)
#define V4L2_CID_SHARPNESS			(V4L2_CID_BASE+27)
#define V4L2_CID_BACKLIGHT_COMPENSATION 	(V4L2_CID_BASE+28)
#define V4L2_CID_CHROMA_AGC                     (V4L2_CID_BASE+29)
#define V4L2_CID_COLOR_KILLER                   (V4L2_CID_BASE+30)
#define V4L2_CID_COLORFX			(V4L2_CID_BASE+31)
enum v4l2_colorfx {
	V4L2_COLORFX_NONE			= 0,
	V4L2_COLORFX_BW				= 1,
	V4L2_COLORFX_SEPIA			= 2,
	V4L2_COLORFX_NEGATIVE			= 3,
	V4L2_COLORFX_EMBOSS			= 4,
	V4L2_COLORFX_SKETCH			= 5,
	V4L2_COLORFX_SKY_BLUE			= 6,
	V4L2_COLORFX_GRASS_GREEN		= 7,
	V4L2_COLORFX_SKIN_WHITEN		= 8,
	V4L2_COLORFX_VIVID			= 9,
	V4L2_COLORFX_AQUA			= 10,
	V4L2_COLORFX_ART_FREEZE			= 11,
	V4L2_COLORFX_SILHOUETTE			= 12,
	V4L2_COLORFX_SOLARIZATION		= 13,
	V4L2_COLORFX_ANTIQUE			= 14,
	V4L2_COLORFX_SET_CBCR			= 15,
};
#define V4L2_CID_AUTOBRIGHTNESS			(V4L2_CID_BASE+32)
#define V4L2_CID_BAND_STOP_FILTER		(V4L2_CID_BASE+33)

#define V4L2_CID_ROTATE				(V4L2_CID_BASE+34)
#define V4L2_CID_BG_COLOR			(V4L2_CID_BASE+35)

#define V4L2_CID_CHROMA_GAIN                    (V4L2_CID_BASE+36)

#define V4L2_CID_ILLUMINATORS_1			(V4L2_CID_BASE+37)
#define V4L2_CID_ILLUMINATORS_2			(V4L2_CID_BASE+38)

#define V4L2_CID_MIN_BUFFERS_FOR_CAPTURE	(V4L2_CID_BASE+39)
#define V4L2_CID_MIN_BUFFERS_FOR_OUTPUT		(V4L2_CID_BASE+40)

#define V4L2_CID_ALPHA_COMPONENT		(V4L2_CID_BASE+41)
#define V4L2_CID_COLORFX_CBCR			(V4L2_CID_BASE+42)

/* last CID + 1 */
#define V4L2_CID_LASTP1                         (V4L2_CID_BASE+43)

/* USER-class private control IDs */

/* The base for the meye driver controls. See linux/meye.h for the list
 * of controls. We reserve 16 controls for this driver. */
#define V4L2_CID_USER_MEYE_BASE			(V4L2_CID_USER_BASE + 0x1000)

/* The base for the bttv driver controls.
 * We reserve 32 controls for this driver. */
#define V4L2_CID_USER_BTTV_BASE			(V4L2_CID_USER_BASE + 0x1010)


/* The base for the s2255 driver controls.
 * We reserve 16 controls for this driver. */
#define V4L2_CID_USER_S2255_BASE		(V4L2_CID_USER_BASE + 0x1030)

/* The base for the si476x driver controls. See include/media/si476x.h for the list
 * of controls. Total of 16 controls is reserved for this driver */
#define V4L2_CID_USER_SI476X_BASE		(V4L2_CID_USER_BASE + 0x1040)

/* MPEG-class control IDs */

#define V4L2_CID_MPEG_BASE 			(V4L2_CTRL_CLASS_MPEG | 0x900)
#define V4L2_CID_MPEG_CLASS 			(V4L2_CTRL_CLASS_MPEG | 1)

/*  MPEG streams, specific to multiplexed streams */
#define V4L2_CID_MPEG_STREAM_TYPE 		(V4L2_CID_MPEG_BASE+0)
enum v4l2_mpeg_stream_type {
	V4L2_MPEG_STREAM_TYPE_MPEG2_PS   = 0, /* MPEG-2 program stream */
	V4L2_MPEG_STREAM_TYPE_MPEG2_TS   = 1, /* MPEG-2 transport stream */
	V4L2_MPEG_STREAM_TYPE_MPEG1_SS   = 2, /* MPEG-1 system stream */
	V4L2_MPEG_STREAM_TYPE_MPEG2_DVD  = 3, /* MPEG-2 DVD-compatible stream */
	V4L2_MPEG_STREAM_TYPE_MPEG1_VCD  = 4, /* MPEG-1 VCD-compatible stream */
	V4L2_MPEG_STREAM_TYPE_MPEG2_SVCD = 5, /* MPEG-2 SVCD-compatible stream */
};
#define V4L2_CID_MPEG_STREAM_PID_PMT 		(V4L2_CID_MPEG_BASE+1)
#define V4L2_CID_MPEG_STREAM_PID_AUDIO 		(V4L2_CID_MPEG_BASE+2)
#define V4L2_CID_MPEG_STREAM_PID_VIDEO 		(V4L2_CID_MPEG_BASE+3)
#define V4L2_CID_MPEG_STREAM_PID_PCR 		(V4L2_CID_MPEG_BASE+4)
#define V4L2_CID_MPEG_STREAM_PES_ID_AUDIO 	(V4L2_CID_MPEG_BASE+5)
#define V4L2_CID_MPEG_STREAM_PES_ID_VIDEO 	(V4L2_CID_MPEG_BASE+6)
#define V4L2_CID_MPEG_STREAM_VBI_FMT 		(V4L2_CID_MPEG_BASE+7)
enum v4l2_mpeg_stream_vbi_fmt {
	V4L2_MPEG_STREAM_VBI_FMT_NONE = 0,  /* No VBI in the MPEG stream */
	V4L2_MPEG_STREAM_VBI_FMT_IVTV = 1,  /* VBI in private packets, IVTV format */
};

/*  MPEG audio controls specific to multiplexed streams  */
#define V4L2_CID_MPEG_AUDIO_SAMPLING_FREQ 	(V4L2_CID_MPEG_BASE+100)
enum v4l2_mpeg_audio_sampling_freq {
	V4L2_MPEG_AUDIO_SAMPLING_FREQ_44100 = 0,
	V4L2_MPEG_AUDIO_SAMPLING_FREQ_48000 = 1,
	V4L2_MPEG_AUDIO_SAMPLING_FREQ_32000 = 2,
};
#define V4L2_CID_MPEG_AUDIO_ENCODING 		(V4L2_CID_MPEG_BASE+101)
enum v4l2_mpeg_audio_encoding {
	V4L2_MPEG_AUDIO_ENCODING_LAYER_1 = 0,
	V4L2_MPEG_AUDIO_ENCODING_LAYER_2 = 1,
	V4L2_MPEG_AUDIO_ENCODING_LAYER_3 = 2,
	V4L2_MPEG_AUDIO_ENCODING_AAC     = 3,
	V4L2_MPEG_AUDIO_ENCODING_AC3     = 4,
};
#define V4L2_CID_MPEG_AUDIO_L1_BITRATE 		(V4L2_CID_MPEG_BASE+102)
enum v4l2_mpeg_audio_l1_bitrate {
	V4L2_MPEG_AUDIO_L1_BITRATE_32K  = 0,
	V4L2_MPEG_AUDIO_L1_BITRATE_64K  = 1,
	V4L2_MPEG_AUDIO_L1_BITRATE_96K  = 2,
	V4L2_MPEG_AUDIO_L1_BITRATE_128K = 3,
	V4L2_MPEG_AUDIO_L1_BITRATE_160K = 4,
	V4L2_MPEG_AUDIO_L1_BITRATE_192K = 5,
	V4L2_MPEG_AUDIO_L1_BITRATE_224K = 6,
	V4L2_MPEG_AUDIO_L1_BITRATE_256K = 7,
	V4L2_MPEG_AUDIO_L1_BITRATE_288K = 8,
	V4L2_MPEG_AUDIO_L1_BITRATE_320K = 9,
	V4L2_MPEG_AUDIO_L1_BITRATE_352K = 10,
	V4L2_MPEG_AUDIO_L1_BITRATE_384K = 11,
	V4L2_MPEG_AUDIO_L1_BITRATE_416K = 12,
	V4L2_MPEG_AUDIO_L1_BITRATE_448K = 13,
};
#define V4L2_CID_MPEG_AUDIO_L2_BITRATE 		(V4L2_CID_MPEG_BASE+103)
enum v4l2_mpeg_audio_l2_bitrate {
	V4L2_MPEG_AUDIO_L2_BITRATE_32K  = 0,
	V4L2_MPEG_AUDIO_L2_BITRATE_48K  = 1,
	V4L2_MPEG_AUDIO_L2_BITRATE_56K  = 2,
	V4L2_MPEG_AUDIO_L2_BITRATE_64K  = 3,
	V4L2_MPEG_AUDIO_L2_BITRATE_80K  = 4,
	V4L2_MPEG_AUDIO_L2_BITRATE_96K  = 5,
	V4L2_MPEG_AUDIO_L2_BITRATE_112K = 6,
	V4L2_MPEG_AUDIO_L2_BITRATE_128K = 7,
	V4L2_MPEG_AUDIO_L2_BITRATE_160K = 8,
	V4L2_MPEG_AUDIO_L2_BITRATE_192K = 9,
	V4L2_MPEG_AUDIO_L2_BITRATE_224K = 10,
	V4L2_MPEG_AUDIO_L2_BITRATE_256K = 11,
	V4L2_MPEG_AUDIO_L2_BITRATE_320K = 12,
	V4L2_MPEG_AUDIO_L2_BITRATE_384K = 13,
};
#define V4L2_CID_MPEG_AUDIO_L3_BITRATE 		(V4L2_CID_MPEG_BASE+104)
enum v4l2_mpeg_audio_l3_bitrate {
	V4L2_MPEG_AUDIO_L3_BITRATE_32K  = 0,
	V4L2_MPEG_AUDIO_L3_BITRATE_40K  = 1,
	V4L2_MPEG_AUDIO_L3_BITRATE_48K  = 2,
	V4L2_MPEG_AUDIO_L3_BITRATE_56K  = 3,
	V4L2_MPEG_AUDIO_L3_BITRATE_64K  = 4,
	V4L2_MPEG_AUDIO_L3_BITRATE_80K  = 5,
	V4L2_MPEG_AUDIO_L3_BITRATE_96K  = 6,
	V4L2_MPEG_AUDIO_L3_BITRATE_112K = 7,
	V4L2_MPEG_AUDIO_L3_BITRATE_128K = 8,
	V4L2_MPEG_AUDIO_L3_BITRATE_160K = 9,
	V4L2_MPEG_AUDIO_L3_BITRATE_192K = 10,
	V4L2_MPEG_AUDIO_L3_BITRATE_224K = 11,
	V4L2_MPEG_AUDIO_L3_BITRATE_256K = 12,
	V4L2_MPEG_AUDIO_L3_BITRATE_320K = 13,
};
#define V4L2_CID_MPEG_AUDIO_MODE 		(V4L2_CID_MPEG_BASE+105)
enum v4l2_mpeg_audio_mode {
	V4L2_MPEG_AUDIO_MODE_STEREO       = 0,
	V4L2_MPEG_AUDIO_MODE_JOINT_STEREO = 1,
	V4L2_MPEG_AUDIO_MODE_DUAL         = 2,
	V4L2_MPEG_AUDIO_MODE_MONO         = 3,
};
#define V4L2_CID_MPEG_AUDIO_MODE_EXTENSION 	(V4L2_CID_MPEG_BASE+106)
enum v4l2_mpeg_audio_mode_extension {
	V4L2_MPEG_AUDIO_MODE_EXTENSION_BOUND_4  = 0,
	V4L2_MPEG_AUDIO_MODE_EXTENSION_BOUND_8  = 1,
	V4L2_MPEG_AUDIO_MODE_EXTENSION_BOUND_12 = 2,
	V4L2_MPEG_AUDIO_MODE_EXTENSION_BOUND_16 = 3,
};
#define V4L2_CID_MPEG_AUDIO_EMPHASIS 		(V4L2_CID_MPEG_BASE+107)
enum v4l2_mpeg_audio_emphasis {
	V4L2_MPEG_AUDIO_EMPHASIS_NONE         = 0,
	V4L2_MPEG_AUDIO_EMPHASIS_50_DIV_15_uS = 1,
	V4L2_MPEG_AUDIO_EMPHASIS_CCITT_J17    = 2,
};
#define V4L2_CID_MPEG_AUDIO_CRC 		(V4L2_CID_MPEG_BASE+108)
enum v4l2_mpeg_audio_crc {
	V4L2_MPEG_AUDIO_CRC_NONE  = 0,
	V4L2_MPEG_AUDIO_CRC_CRC16 = 1,
};
#define V4L2_CID_MPEG_AUDIO_MUTE 		(V4L2_CID_MPEG_BASE+109)
#define V4L2_CID_MPEG_AUDIO_AAC_BITRATE		(V4L2_CID_MPEG_BASE+110)
#define V4L2_CID_MPEG_AUDIO_AC3_BITRATE		(V4L2_CID_MPEG_BASE+111)
enum v4l2_mpeg_audio_ac3_bitrate {
	V4L2_MPEG_AUDIO_AC3_BITRATE_32K  = 0,
	V4L2_MPEG_AUDIO_AC3_BITRATE_40K  = 1,
	V4L2_MPEG_AUDIO_AC3_BITRATE_48K  = 2,
	V4L2_MPEG_AUDIO_AC3_BITRATE_56K  = 3,
	V4L2_MPEG_AUDIO_AC3_BITRATE_64K  = 4,
	V4L2_MPEG_AUDIO_AC3_BITRATE_80K  = 5,
	V4L2_MPEG_AUDIO_AC3_BITRATE_96K  = 6,
	V4L2_MPEG_AUDIO_AC3_BITRATE_112K = 7,
	V4L2_MPEG_AUDIO_AC3_BITRATE_128K = 8,
	V4L2_MPEG_AUDIO_AC3_BITRATE_160K = 9,
	V4L2_MPEG_AUDIO_AC3_BITRATE_192K = 10,
	V4L2_MPEG_AUDIO_AC3_BITRATE_224K = 11,
	V4L2_MPEG_AUDIO_AC3_BITRATE_256K = 12,
	V4L2_MPEG_AUDIO_AC3_BITRATE_320K = 13,
	V4L2_MPEG_AUDIO_AC3_BITRATE_384K = 14,
	V4L2_MPEG_AUDIO_AC3_BITRATE_448K = 15,
	V4L2_MPEG_AUDIO_AC3_BITRATE_512K = 16,
	V4L2_MPEG_AUDIO_AC3_BITRATE_576K = 17,
	V4L2_MPEG_AUDIO_AC3_BITRATE_640K = 18,
};
#define V4L2_CID_MPEG_AUDIO_DEC_PLAYBACK	(V4L2_CID_MPEG_BASE+112)
enum v4l2_mpeg_audio_dec_playback {
	V4L2_MPEG_AUDIO_DEC_PLAYBACK_AUTO	    = 0,
	V4L2_MPEG_AUDIO_DEC_PLAYBACK_STEREO	    = 1,
	V4L2_MPEG_AUDIO_DEC_PLAYBACK_LEFT	    = 2,
	V4L2_MPEG_AUDIO_DEC_PLAYBACK_RIGHT	    = 3,
	V4L2_MPEG_AUDIO_DEC_PLAYBACK_MONO	    = 4,
	V4L2_MPEG_AUDIO_DEC_PLAYBACK_SWAPPED_STEREO = 5,
};
#define V4L2_CID_MPEG_AUDIO_DEC_MULTILINGUAL_PLAYBACK (V4L2_CID_MPEG_BASE+113)

/*  MPEG video controls specific to multiplexed streams */
#define V4L2_CID_MPEG_VIDEO_ENCODING 		(V4L2_CID_MPEG_BASE+200)
enum v4l2_mpeg_video_encoding {
	V4L2_MPEG_VIDEO_ENCODING_MPEG_1     = 0,
	V4L2_MPEG_VIDEO_ENCODING_MPEG_2     = 1,
	V4L2_MPEG_VIDEO_ENCODING_MPEG_4_AVC = 2,
};
#define V4L2_CID_MPEG_VIDEO_ASPECT 		(V4L2_CID_MPEG_BASE+201)
enum v4l2_mpeg_video_aspect {
	V4L2_MPEG_VIDEO_ASPECT_1x1     = 0,
	V4L2_MPEG_VIDEO_ASPECT_4x3     = 1,
	V4L2_MPEG_VIDEO_ASPECT_16x9    = 2,
	V4L2_MPEG_VIDEO_ASPECT_221x100 = 3,
};
#define V4L2_CID_MPEG_VIDEO_B_FRAMES 		(V4L2_CID_MPEG_BASE+202)
#define V4L2_CID_MPEG_VIDEO_GOP_SIZE 		(V4L2_CID_MPEG_BASE+203)
#define V4L2_CID_MPEG_VIDEO_GOP_CLOSURE 	(V4L2_CID_MPEG_BASE+204)
#define V4L2_CID_MPEG_VIDEO_PULLDOWN 		(V4L2_CID_MPEG_BASE+205)
#define V4L2_CID_MPEG_VIDEO_BITRATE_MODE 	(V4L2_CID_MPEG_BASE+206)
enum v4l2_mpeg_video_bitrate_mode {
	V4L2_MPEG_VIDEO_BITRATE_MODE_VBR = 0,
	V4L2_MPEG_VIDEO_BITRATE_MODE_CBR = 1,
};
#define V4L2_CID_MPEG_VIDEO_BITRATE 		(V4L2_CID_MPEG_BASE+207)
#define V4L2_CID_MPEG_VIDEO_BITRATE_PEAK 	(V4L2_CID_MPEG_BASE+208)
#define V4L2_CID_MPEG_VIDEO_TEMPORAL_DECIMATION (V4L2_CID_MPEG_BASE+209)
#define V4L2_CID_MPEG_VIDEO_MUTE 		(V4L2_CID_MPEG_BASE+210)
#define V4L2_CID_MPEG_VIDEO_MUTE_YUV 		(V4L2_CID_MPEG_BASE+211)
#define V4L2_CID_MPEG_VIDEO_DECODER_SLICE_INTERFACE		(V4L2_CID_MPEG_BASE+212)
#define V4L2_CID_MPEG_VIDEO_DECODER_MPEG4_DEBLOCK_FILTER	(V4L2_CID_MPEG_BASE+213)
#define V4L2_CID_MPEG_VIDEO_CYCLIC_INTRA_REFRESH_MB		(V4L2_CID_MPEG_BASE+214)
#define V4L2_CID_MPEG_VIDEO_FRAME_RC_ENABLE			(V4L2_CID_MPEG_BASE+215)
#define V4L2_CID_MPEG_VIDEO_HEADER_MODE				(V4L2_CID_MPEG_BASE+216)
enum v4l2_mpeg_video_header_mode {
	V4L2_MPEG_VIDEO_HEADER_MODE_SEPARATE			= 0,
	V4L2_MPEG_VIDEO_HEADER_MODE_JOINED_WITH_1ST_FRAME	= 1,

};
#define V4L2_CID_MPEG_VIDEO_MAX_REF_PIC			(V4L2_CID_MPEG_BASE+217)
#define V4L2_CID_MPEG_VIDEO_MB_RC_ENABLE		(V4L2_CID_MPEG_BASE+218)
#define V4L2_CID_MPEG_VIDEO_MULTI_SLICE_MAX_BYTES	(V4L2_CID_MPEG_BASE+219)
#define V4L2_CID_MPEG_VIDEO_MULTI_SLICE_MAX_MB		(V4L2_CID_MPEG_BASE+220)
#define V4L2_CID_MPEG_VIDEO_MULTI_SLICE_MODE		(V4L2_CID_MPEG_BASE+221)
enum v4l2_mpeg_video_multi_slice_mode {
	V4L2_MPEG_VIDEO_MULTI_SLICE_MODE_SINGLE		= 0,
	V4L2_MPEG_VIDEO_MULTI_SICE_MODE_MAX_MB		= 1,
	V4L2_MPEG_VIDEO_MULTI_SICE_MODE_MAX_BYTES	= 2,
};
#define V4L2_CID_MPEG_VIDEO_VBV_SIZE			(V4L2_CID_MPEG_BASE+222)
#define V4L2_CID_MPEG_VIDEO_DEC_PTS			(V4L2_CID_MPEG_BASE+223)
#define V4L2_CID_MPEG_VIDEO_DEC_FRAME			(V4L2_CID_MPEG_BASE+224)
#define V4L2_CID_MPEG_VIDEO_VBV_DELAY			(V4L2_CID_MPEG_BASE+225)
#define V4L2_CID_MPEG_VIDEO_REPEAT_SEQ_HEADER		(V4L2_CID_MPEG_BASE+226)

#define V4L2_CID_MPEG_VIDEO_H263_I_FRAME_QP		(V4L2_CID_MPEG_BASE+300)
#define V4L2_CID_MPEG_VIDEO_H263_P_FRAME_QP		(V4L2_CID_MPEG_BASE+301)
#define V4L2_CID_MPEG_VIDEO_H263_B_FRAME_QP		(V4L2_CID_MPEG_BASE+302)
#define V4L2_CID_MPEG_VIDEO_H263_MIN_QP			(V4L2_CID_MPEG_BASE+303)
#define V4L2_CID_MPEG_VIDEO_H263_MAX_QP			(V4L2_CID_MPEG_BASE+304)
#define V4L2_CID_MPEG_VIDEO_H264_I_FRAME_QP		(V4L2_CID_MPEG_BASE+350)
#define V4L2_CID_MPEG_VIDEO_H264_P_FRAME_QP		(V4L2_CID_MPEG_BASE+351)
#define V4L2_CID_MPEG_VIDEO_H264_B_FRAME_QP		(V4L2_CID_MPEG_BASE+352)
#define V4L2_CID_MPEG_VIDEO_H264_MIN_QP			(V4L2_CID_MPEG_BASE+353)
#define V4L2_CID_MPEG_VIDEO_H264_MAX_QP			(V4L2_CID_MPEG_BASE+354)
#define V4L2_CID_MPEG_VIDEO_H264_8X8_TRANSFORM		(V4L2_CID_MPEG_BASE+355)
#define V4L2_CID_MPEG_VIDEO_H264_CPB_SIZE		(V4L2_CID_MPEG_BASE+356)
#define V4L2_CID_MPEG_VIDEO_H264_ENTROPY_MODE		(V4L2_CID_MPEG_BASE+357)
enum v4l2_mpeg_video_h264_entropy_mode {
	V4L2_MPEG_VIDEO_H264_ENTROPY_MODE_CAVLC	= 0,
	V4L2_MPEG_VIDEO_H264_ENTROPY_MODE_CABAC	= 1,
};
#define V4L2_CID_MPEG_VIDEO_H264_I_PERIOD		(V4L2_CID_MPEG_BASE+358)
#define V4L2_CID_MPEG_VIDEO_H264_LEVEL			(V4L2_CID_MPEG_BASE+359)
enum v4l2_mpeg_video_h264_level {
	V4L2_MPEG_VIDEO_H264_LEVEL_1_0	= 0,
	V4L2_MPEG_VIDEO_H264_LEVEL_1B	= 1,
	V4L2_MPEG_VIDEO_H264_LEVEL_1_1	= 2,
	V4L2_MPEG_VIDEO_H264_LEVEL_1_2	= 3,
	V4L2_MPEG_VIDEO_H264_LEVEL_1_3	= 4,
	V4L2_MPEG_VIDEO_H264_LEVEL_2_0	= 5,
	V4L2_MPEG_VIDEO_H264_LEVEL_2_1	= 6,
	V4L2_MPEG_VIDEO_H264_LEVEL_2_2	= 7,
	V4L2_MPEG_VIDEO_H264_LEVEL_3_0	= 8,
	V4L2_MPEG_VIDEO_H264_LEVEL_3_1	= 9,
	V4L2_MPEG_VIDEO_H264_LEVEL_3_2	= 10,
	V4L2_MPEG_VIDEO_H264_LEVEL_4_0	= 11,
	V4L2_MPEG_VIDEO_H264_LEVEL_4_1	= 12,
	V4L2_MPEG_VIDEO_H264_LEVEL_4_2	= 13,
	V4L2_MPEG_VIDEO_H264_LEVEL_5_0	= 14,
	V4L2_MPEG_VIDEO_H264_LEVEL_5_1	= 15,
};
#define V4L2_CID_MPEG_VIDEO_H264_LOOP_FILTER_ALPHA	(V4L2_CID_MPEG_BASE+360)
#define V4L2_CID_MPEG_VIDEO_H264_LOOP_FILTER_BETA	(V4L2_CID_MPEG_BASE+361)
#define V4L2_CID_MPEG_VIDEO_H264_LOOP_FILTER_MODE	(V4L2_CID_MPEG_BASE+362)
enum v4l2_mpeg_video_h264_loop_filter_mode {
	V4L2_MPEG_VIDEO_H264_LOOP_FILTER_MODE_ENABLED				= 0,
	V4L2_MPEG_VIDEO_H264_LOOP_FILTER_MODE_DISABLED				= 1,
	V4L2_MPEG_VIDEO_H264_LOOP_FILTER_MODE_DISABLED_AT_SLICE_BOUNDARY	= 2,
};
#define V4L2_CID_MPEG_VIDEO_H264_PROFILE		(V4L2_CID_MPEG_BASE+363)
enum v4l2_mpeg_video_h264_profile {
	V4L2_MPEG_VIDEO_H264_PROFILE_BASELINE			= 0,
	V4L2_MPEG_VIDEO_H264_PROFILE_CONSTRAINED_BASELINE	= 1,
	V4L2_MPEG_VIDEO_H264_PROFILE_MAIN			= 2,
	V4L2_MPEG_VIDEO_H264_PROFILE_EXTENDED			= 3,
	V4L2_MPEG_VIDEO_H264_PROFILE_HIGH			= 4,
	V4L2_MPEG_VIDEO_H264_PROFILE_HIGH_10			= 5,
	V4L2_MPEG_VIDEO_H264_PROFILE_HIGH_422			= 6,
	V4L2_MPEG_VIDEO_H264_PROFILE_HIGH_444_PREDICTIVE	= 7,
	V4L2_MPEG_VIDEO_H264_PROFILE_HIGH_10_INTRA		= 8,
	V4L2_MPEG_VIDEO_H264_PROFILE_HIGH_422_INTRA		= 9,
	V4L2_MPEG_VIDEO_H264_PROFILE_HIGH_444_INTRA		= 10,
	V4L2_MPEG_VIDEO_H264_PROFILE_CAVLC_444_INTRA		= 11,
	V4L2_MPEG_VIDEO_H264_PROFILE_SCALABLE_BASELINE		= 12,
	V4L2_MPEG_VIDEO_H264_PROFILE_SCALABLE_HIGH		= 13,
	V4L2_MPEG_VIDEO_H264_PROFILE_SCALABLE_HIGH_INTRA	= 14,
	V4L2_MPEG_VIDEO_H264_PROFILE_STEREO_HIGH		= 15,
	V4L2_MPEG_VIDEO_H264_PROFILE_MULTIVIEW_HIGH		= 16,
};
#define V4L2_CID_MPEG_VIDEO_H264_VUI_EXT_SAR_HEIGHT	(V4L2_CID_MPEG_BASE+364)
#define V4L2_CID_MPEG_VIDEO_H264_VUI_EXT_SAR_WIDTH	(V4L2_CID_MPEG_BASE+365)
#define V4L2_CID_MPEG_VIDEO_H264_VUI_SAR_ENABLE		(V4L2_CID_MPEG_BASE+366)
#define V4L2_CID_MPEG_VIDEO_H264_VUI_SAR_IDC		(V4L2_CID_MPEG_BASE+367)
enum v4l2_mpeg_video_h264_vui_sar_idc {
	V4L2_MPEG_VIDEO_H264_VUI_SAR_IDC_UNSPECIFIED	= 0,
	V4L2_MPEG_VIDEO_H264_VUI_SAR_IDC_1x1		= 1,
	V4L2_MPEG_VIDEO_H264_VUI_SAR_IDC_12x11		= 2,
	V4L2_MPEG_VIDEO_H264_VUI_SAR_IDC_10x11		= 3,
	V4L2_MPEG_VIDEO_H264_VUI_SAR_IDC_16x11		= 4,
	V4L2_MPEG_VIDEO_H264_VUI_SAR_IDC_40x33		= 5,
	V4L2_MPEG_VIDEO_H264_VUI_SAR_IDC_24x11		= 6,
	V4L2_MPEG_VIDEO_H264_VUI_SAR_IDC_20x11		= 7,
	V4L2_MPEG_VIDEO_H264_VUI_SAR_IDC_32x11		= 8,
	V4L2_MPEG_VIDEO_H264_VUI_SAR_IDC_80x33		= 9,
	V4L2_MPEG_VIDEO_H264_VUI_SAR_IDC_18x11		= 10,
	V4L2_MPEG_VIDEO_H264_VUI_SAR_IDC_15x11		= 11,
	V4L2_MPEG_VIDEO_H264_VUI_SAR_IDC_64x33		= 12,
	V4L2_MPEG_VIDEO_H264_VUI_SAR_IDC_160x99		= 13,
	V4L2_MPEG_VIDEO_H264_VUI_SAR_IDC_4x3		= 14,
	V4L2_MPEG_VIDEO_H264_VUI_SAR_IDC_3x2		= 15,
	V4L2_MPEG_VIDEO_H264_VUI_SAR_IDC_2x1		= 16,
	V4L2_MPEG_VIDEO_H264_VUI_SAR_IDC_EXTENDED	= 17,
};
#define V4L2_CID_MPEG_VIDEO_H264_SEI_FRAME_PACKING		(V4L2_CID_MPEG_BASE+368)
#define V4L2_CID_MPEG_VIDEO_H264_SEI_FP_CURRENT_FRAME_0		(V4L2_CID_MPEG_BASE+369)
#define V4L2_CID_MPEG_VIDEO_H264_SEI_FP_ARRANGEMENT_TYPE	(V4L2_CID_MPEG_BASE+370)
enum v4l2_mpeg_video_h264_sei_fp_arrangement_type {
	V4L2_MPEG_VIDEO_H264_SEI_FP_ARRANGEMENT_TYPE_CHECKERBOARD	= 0,
	V4L2_MPEG_VIDEO_H264_SEI_FP_ARRANGEMENT_TYPE_COLUMN		= 1,
	V4L2_MPEG_VIDEO_H264_SEI_FP_ARRANGEMENT_TYPE_ROW		= 2,
	V4L2_MPEG_VIDEO_H264_SEI_FP_ARRANGEMENT_TYPE_SIDE_BY_SIDE	= 3,
	V4L2_MPEG_VIDEO_H264_SEI_FP_ARRANGEMENT_TYPE_TOP_BOTTOM		= 4,
	V4L2_MPEG_VIDEO_H264_SEI_FP_ARRANGEMENT_TYPE_TEMPORAL		= 5,
};
#define V4L2_CID_MPEG_VIDEO_H264_FMO			(V4L2_CID_MPEG_BASE+371)
#define V4L2_CID_MPEG_VIDEO_H264_FMO_MAP_TYPE		(V4L2_CID_MPEG_BASE+372)
enum v4l2_mpeg_video_h264_fmo_map_type {
	V4L2_MPEG_VIDEO_H264_FMO_MAP_TYPE_INTERLEAVED_SLICES		= 0,
	V4L2_MPEG_VIDEO_H264_FMO_MAP_TYPE_SCATTERED_SLICES		= 1,
	V4L2_MPEG_VIDEO_H264_FMO_MAP_TYPE_FOREGROUND_WITH_LEFT_OVER	= 2,
	V4L2_MPEG_VIDEO_H264_FMO_MAP_TYPE_BOX_OUT			= 3,
	V4L2_MPEG_VIDEO_H264_FMO_MAP_TYPE_RASTER_SCAN			= 4,
	V4L2_MPEG_VIDEO_H264_FMO_MAP_TYPE_WIPE_SCAN			= 5,
	V4L2_MPEG_VIDEO_H264_FMO_MAP_TYPE_EXPLICIT			= 6,
};
#define V4L2_CID_MPEG_VIDEO_H264_FMO_SLICE_GROUP	(V4L2_CID_MPEG_BASE+373)
#define V4L2_CID_MPEG_VIDEO_H264_FMO_CHANGE_DIRECTION	(V4L2_CID_MPEG_BASE+374)
enum v4l2_mpeg_video_h264_fmo_change_dir {
	V4L2_MPEG_VIDEO_H264_FMO_CHANGE_DIR_RIGHT	= 0,
	V4L2_MPEG_VIDEO_H264_FMO_CHANGE_DIR_LEFT	= 1,
};
#define V4L2_CID_MPEG_VIDEO_H264_FMO_CHANGE_RATE	(V4L2_CID_MPEG_BASE+375)
#define V4L2_CID_MPEG_VIDEO_H264_FMO_RUN_LENGTH		(V4L2_CID_MPEG_BASE+376)
#define V4L2_CID_MPEG_VIDEO_H264_ASO			(V4L2_CID_MPEG_BASE+377)
#define V4L2_CID_MPEG_VIDEO_H264_ASO_SLICE_ORDER	(V4L2_CID_MPEG_BASE+378)
#define V4L2_CID_MPEG_VIDEO_H264_HIERARCHICAL_CODING		(V4L2_CID_MPEG_BASE+379)
#define V4L2_CID_MPEG_VIDEO_H264_HIERARCHICAL_CODING_TYPE	(V4L2_CID_MPEG_BASE+380)
enum v4l2_mpeg_video_h264_hierarchical_coding_type {
	V4L2_MPEG_VIDEO_H264_HIERARCHICAL_CODING_B	= 0,
	V4L2_MPEG_VIDEO_H264_HIERARCHICAL_CODING_P	= 1,
};
#define V4L2_CID_MPEG_VIDEO_H264_HIERARCHICAL_CODING_LAYER	(V4L2_CID_MPEG_BASE+381)
#define V4L2_CID_MPEG_VIDEO_H264_HIERARCHICAL_CODING_LAYER_QP	(V4L2_CID_MPEG_BASE+382)
#define V4L2_CID_MPEG_VIDEO_MPEG4_I_FRAME_QP	(V4L2_CID_MPEG_BASE+400)
#define V4L2_CID_MPEG_VIDEO_MPEG4_P_FRAME_QP	(V4L2_CID_MPEG_BASE+401)
#define V4L2_CID_MPEG_VIDEO_MPEG4_B_FRAME_QP	(V4L2_CID_MPEG_BASE+402)
#define V4L2_CID_MPEG_VIDEO_MPEG4_MIN_QP	(V4L2_CID_MPEG_BASE+403)
#define V4L2_CID_MPEG_VIDEO_MPEG4_MAX_QP	(V4L2_CID_MPEG_BASE+404)
#define V4L2_CID_MPEG_VIDEO_MPEG4_LEVEL		(V4L2_CID_MPEG_BASE+405)
enum v4l2_mpeg_video_mpeg4_level {
	V4L2_MPEG_VIDEO_MPEG4_LEVEL_0	= 0,
	V4L2_MPEG_VIDEO_MPEG4_LEVEL_0B	= 1,
	V4L2_MPEG_VIDEO_MPEG4_LEVEL_1	= 2,
	V4L2_MPEG_VIDEO_MPEG4_LEVEL_2	= 3,
	V4L2_MPEG_VIDEO_MPEG4_LEVEL_3	= 4,
	V4L2_MPEG_VIDEO_MPEG4_LEVEL_3B	= 5,
	V4L2_MPEG_VIDEO_MPEG4_LEVEL_4	= 6,
	V4L2_MPEG_VIDEO_MPEG4_LEVEL_5	= 7,
};
#define V4L2_CID_MPEG_VIDEO_MPEG4_PROFILE	(V4L2_CID_MPEG_BASE+406)
enum v4l2_mpeg_video_mpeg4_profile {
	V4L2_MPEG_VIDEO_MPEG4_PROFILE_SIMPLE				= 0,
	V4L2_MPEG_VIDEO_MPEG4_PROFILE_ADVANCED_SIMPLE			= 1,
	V4L2_MPEG_VIDEO_MPEG4_PROFILE_CORE				= 2,
	V4L2_MPEG_VIDEO_MPEG4_PROFILE_SIMPLE_SCALABLE			= 3,
	V4L2_MPEG_VIDEO_MPEG4_PROFILE_ADVANCED_CODING_EFFICIENCY	= 4,
};
#define V4L2_CID_MPEG_VIDEO_MPEG4_QPEL		(V4L2_CID_MPEG_BASE+407)

/*  MPEG-class control IDs specific to the CX2341x driver as defined by V4L2 */
#define V4L2_CID_MPEG_CX2341X_BASE 				(V4L2_CTRL_CLASS_MPEG | 0x1000)
#define V4L2_CID_MPEG_CX2341X_VIDEO_SPATIAL_FILTER_MODE 	(V4L2_CID_MPEG_CX2341X_BASE+0)
enum v4l2_mpeg_cx2341x_video_spatial_filter_mode {
	V4L2_MPEG_CX2341X_VIDEO_SPATIAL_FILTER_MODE_MANUAL = 0,
	V4L2_MPEG_CX2341X_VIDEO_SPATIAL_FILTER_MODE_AUTO   = 1,
};
#define V4L2_CID_MPEG_CX2341X_VIDEO_SPATIAL_FILTER 		(V4L2_CID_MPEG_CX2341X_BASE+1)
#define V4L2_CID_MPEG_CX2341X_VIDEO_LUMA_SPATIAL_FILTER_TYPE 	(V4L2_CID_MPEG_CX2341X_BASE+2)
enum v4l2_mpeg_cx2341x_video_luma_spatial_filter_type {
	V4L2_MPEG_CX2341X_VIDEO_LUMA_SPATIAL_FILTER_TYPE_OFF                  = 0,
	V4L2_MPEG_CX2341X_VIDEO_LUMA_SPATIAL_FILTER_TYPE_1D_HOR               = 1,
	V4L2_MPEG_CX2341X_VIDEO_LUMA_SPATIAL_FILTER_TYPE_1D_VERT              = 2,
	V4L2_MPEG_CX2341X_VIDEO_LUMA_SPATIAL_FILTER_TYPE_2D_HV_SEPARABLE      = 3,
	V4L2_MPEG_CX2341X_VIDEO_LUMA_SPATIAL_FILTER_TYPE_2D_SYM_NON_SEPARABLE = 4,
};
#define V4L2_CID_MPEG_CX2341X_VIDEO_CHROMA_SPATIAL_FILTER_TYPE 	(V4L2_CID_MPEG_CX2341X_BASE+3)
enum v4l2_mpeg_cx2341x_video_chroma_spatial_filter_type {
	V4L2_MPEG_CX2341X_VIDEO_CHROMA_SPATIAL_FILTER_TYPE_OFF    = 0,
	V4L2_MPEG_CX2341X_VIDEO_CHROMA_SPATIAL_FILTER_TYPE_1D_HOR = 1,
};
#define V4L2_CID_MPEG_CX2341X_VIDEO_TEMPORAL_FILTER_MODE 	(V4L2_CID_MPEG_CX2341X_BASE+4)
enum v4l2_mpeg_cx2341x_video_temporal_filter_mode {
	V4L2_MPEG_CX2341X_VIDEO_TEMPORAL_FILTER_MODE_MANUAL = 0,
	V4L2_MPEG_CX2341X_VIDEO_TEMPORAL_FILTER_MODE_AUTO   = 1,
};
#define V4L2_CID_MPEG_CX2341X_VIDEO_TEMPORAL_FILTER 		(V4L2_CID_MPEG_CX2341X_BASE+5)
#define V4L2_CID_MPEG_CX2341X_VIDEO_MEDIAN_FILTER_TYPE 		(V4L2_CID_MPEG_CX2341X_BASE+6)
enum v4l2_mpeg_cx2341x_video_median_filter_type {
	V4L2_MPEG_CX2341X_VIDEO_MEDIAN_FILTER_TYPE_OFF      = 0,
	V4L2_MPEG_CX2341X_VIDEO_MEDIAN_FILTER_TYPE_HOR      = 1,
	V4L2_MPEG_CX2341X_VIDEO_MEDIAN_FILTER_TYPE_VERT     = 2,
	V4L2_MPEG_CX2341X_VIDEO_MEDIAN_FILTER_TYPE_HOR_VERT = 3,
	V4L2_MPEG_CX2341X_VIDEO_MEDIAN_FILTER_TYPE_DIAG     = 4,
};
#define V4L2_CID_MPEG_CX2341X_VIDEO_LUMA_MEDIAN_FILTER_BOTTOM 	(V4L2_CID_MPEG_CX2341X_BASE+7)
#define V4L2_CID_MPEG_CX2341X_VIDEO_LUMA_MEDIAN_FILTER_TOP 	(V4L2_CID_MPEG_CX2341X_BASE+8)
#define V4L2_CID_MPEG_CX2341X_VIDEO_CHROMA_MEDIAN_FILTER_BOTTOM	(V4L2_CID_MPEG_CX2341X_BASE+9)
#define V4L2_CID_MPEG_CX2341X_VIDEO_CHROMA_MEDIAN_FILTER_TOP 	(V4L2_CID_MPEG_CX2341X_BASE+10)
#define V4L2_CID_MPEG_CX2341X_STREAM_INSERT_NAV_PACKETS 	(V4L2_CID_MPEG_CX2341X_BASE+11)

/*  MPEG-class control IDs specific to the Samsung MFC 5.1 driver as defined by V4L2 */
#define V4L2_CID_MPEG_MFC51_BASE				(V4L2_CTRL_CLASS_MPEG | 0x1100)

#define V4L2_CID_MPEG_MFC51_VIDEO_DECODER_H264_DISPLAY_DELAY		(V4L2_CID_MPEG_MFC51_BASE+0)
#define V4L2_CID_MPEG_MFC51_VIDEO_DECODER_H264_DISPLAY_DELAY_ENABLE	(V4L2_CID_MPEG_MFC51_BASE+1)
#define V4L2_CID_MPEG_MFC51_VIDEO_FRAME_SKIP_MODE			(V4L2_CID_MPEG_MFC51_BASE+2)
enum v4l2_mpeg_mfc51_video_frame_skip_mode {
	V4L2_MPEG_MFC51_VIDEO_FRAME_SKIP_MODE_DISABLED		= 0,
	V4L2_MPEG_MFC51_VIDEO_FRAME_SKIP_MODE_LEVEL_LIMIT	= 1,
	V4L2_MPEG_MFC51_VIDEO_FRAME_SKIP_MODE_BUF_LIMIT		= 2,
};
#define V4L2_CID_MPEG_MFC51_VIDEO_FORCE_FRAME_TYPE			(V4L2_CID_MPEG_MFC51_BASE+3)
enum v4l2_mpeg_mfc51_video_force_frame_type {
	V4L2_MPEG_MFC51_VIDEO_FORCE_FRAME_TYPE_DISABLED		= 0,
	V4L2_MPEG_MFC51_VIDEO_FORCE_FRAME_TYPE_I_FRAME		= 1,
	V4L2_MPEG_MFC51_VIDEO_FORCE_FRAME_TYPE_NOT_CODED	= 2,
};
#define V4L2_CID_MPEG_MFC51_VIDEO_PADDING				(V4L2_CID_MPEG_MFC51_BASE+4)
#define V4L2_CID_MPEG_MFC51_VIDEO_PADDING_YUV				(V4L2_CID_MPEG_MFC51_BASE+5)
#define V4L2_CID_MPEG_MFC51_VIDEO_RC_FIXED_TARGET_BIT			(V4L2_CID_MPEG_MFC51_BASE+6)
#define V4L2_CID_MPEG_MFC51_VIDEO_RC_REACTION_COEFF			(V4L2_CID_MPEG_MFC51_BASE+7)
#define V4L2_CID_MPEG_MFC51_VIDEO_H264_ADAPTIVE_RC_ACTIVITY		(V4L2_CID_MPEG_MFC51_BASE+50)
#define V4L2_CID_MPEG_MFC51_VIDEO_H264_ADAPTIVE_RC_DARK			(V4L2_CID_MPEG_MFC51_BASE+51)
#define V4L2_CID_MPEG_MFC51_VIDEO_H264_ADAPTIVE_RC_SMOOTH		(V4L2_CID_MPEG_MFC51_BASE+52)
#define V4L2_CID_MPEG_MFC51_VIDEO_H264_ADAPTIVE_RC_STATIC		(V4L2_CID_MPEG_MFC51_BASE+53)
#define V4L2_CID_MPEG_MFC51_VIDEO_H264_NUM_REF_PIC_FOR_P		(V4L2_CID_MPEG_MFC51_BASE+54)


/*  Camera class control IDs */

#define V4L2_CID_CAMERA_CLASS_BASE 	(V4L2_CTRL_CLASS_CAMERA | 0x900)
#define V4L2_CID_CAMERA_CLASS 		(V4L2_CTRL_CLASS_CAMERA | 1)

#define V4L2_CID_EXPOSURE_AUTO			(V4L2_CID_CAMERA_CLASS_BASE+1)
enum  v4l2_exposure_auto_type {
	V4L2_EXPOSURE_AUTO = 0,
	V4L2_EXPOSURE_MANUAL = 1,
	V4L2_EXPOSURE_SHUTTER_PRIORITY = 2,
	V4L2_EXPOSURE_APERTURE_PRIORITY = 3
};
#define V4L2_CID_EXPOSURE_ABSOLUTE		(V4L2_CID_CAMERA_CLASS_BASE+2)
#define V4L2_CID_EXPOSURE_AUTO_PRIORITY		(V4L2_CID_CAMERA_CLASS_BASE+3)

#define V4L2_CID_PAN_RELATIVE			(V4L2_CID_CAMERA_CLASS_BASE+4)
#define V4L2_CID_TILT_RELATIVE			(V4L2_CID_CAMERA_CLASS_BASE+5)
#define V4L2_CID_PAN_RESET			(V4L2_CID_CAMERA_CLASS_BASE+6)
#define V4L2_CID_TILT_RESET			(V4L2_CID_CAMERA_CLASS_BASE+7)

#define V4L2_CID_PAN_ABSOLUTE			(V4L2_CID_CAMERA_CLASS_BASE+8)
#define V4L2_CID_TILT_ABSOLUTE			(V4L2_CID_CAMERA_CLASS_BASE+9)

#define V4L2_CID_FOCUS_ABSOLUTE			(V4L2_CID_CAMERA_CLASS_BASE+10)
#define V4L2_CID_FOCUS_RELATIVE			(V4L2_CID_CAMERA_CLASS_BASE+11)
#define V4L2_CID_FOCUS_AUTO			(V4L2_CID_CAMERA_CLASS_BASE+12)

#define V4L2_CID_ZOOM_ABSOLUTE			(V4L2_CID_CAMERA_CLASS_BASE+13)
#define V4L2_CID_ZOOM_RELATIVE			(V4L2_CID_CAMERA_CLASS_BASE+14)
#define V4L2_CID_ZOOM_CONTINUOUS		(V4L2_CID_CAMERA_CLASS_BASE+15)

#define V4L2_CID_PRIVACY			(V4L2_CID_CAMERA_CLASS_BASE+16)

#define V4L2_CID_IRIS_ABSOLUTE			(V4L2_CID_CAMERA_CLASS_BASE+17)
#define V4L2_CID_IRIS_RELATIVE			(V4L2_CID_CAMERA_CLASS_BASE+18)

#define V4L2_CID_AUTO_EXPOSURE_BIAS		(V4L2_CID_CAMERA_CLASS_BASE+19)

#define V4L2_CID_AUTO_N_PRESET_WHITE_BALANCE	(V4L2_CID_CAMERA_CLASS_BASE+20)
enum v4l2_auto_n_preset_white_balance {
	V4L2_WHITE_BALANCE_MANUAL		= 0,
	V4L2_WHITE_BALANCE_AUTO			= 1,
	V4L2_WHITE_BALANCE_INCANDESCENT		= 2,
	V4L2_WHITE_BALANCE_FLUORESCENT		= 3,
	V4L2_WHITE_BALANCE_FLUORESCENT_H	= 4,
	V4L2_WHITE_BALANCE_HORIZON		= 5,
	V4L2_WHITE_BALANCE_DAYLIGHT		= 6,
	V4L2_WHITE_BALANCE_FLASH		= 7,
	V4L2_WHITE_BALANCE_CLOUDY		= 8,
	V4L2_WHITE_BALANCE_SHADE		= 9,
};

#define V4L2_CID_WIDE_DYNAMIC_RANGE		(V4L2_CID_CAMERA_CLASS_BASE+21)
#define V4L2_CID_IMAGE_STABILIZATION		(V4L2_CID_CAMERA_CLASS_BASE+22)

#define V4L2_CID_ISO_SENSITIVITY		(V4L2_CID_CAMERA_CLASS_BASE+23)
#define V4L2_CID_ISO_SENSITIVITY_AUTO		(V4L2_CID_CAMERA_CLASS_BASE+24)
enum v4l2_iso_sensitivity_auto_type {
	V4L2_ISO_SENSITIVITY_MANUAL		= 0,
	V4L2_ISO_SENSITIVITY_AUTO		= 1,
};

#define V4L2_CID_EXPOSURE_METERING		(V4L2_CID_CAMERA_CLASS_BASE+25)
enum v4l2_exposure_metering {
	V4L2_EXPOSURE_METERING_AVERAGE		= 0,
	V4L2_EXPOSURE_METERING_CENTER_WEIGHTED	= 1,
	V4L2_EXPOSURE_METERING_SPOT		= 2,
	V4L2_EXPOSURE_METERING_MATRIX		= 3,
};

#define V4L2_CID_SCENE_MODE			(V4L2_CID_CAMERA_CLASS_BASE+26)
enum v4l2_scene_mode {
	V4L2_SCENE_MODE_NONE			= 0,
	V4L2_SCENE_MODE_BACKLIGHT		= 1,
	V4L2_SCENE_MODE_BEACH_SNOW		= 2,
	V4L2_SCENE_MODE_CANDLE_LIGHT		= 3,
	V4L2_SCENE_MODE_DAWN_DUSK		= 4,
	V4L2_SCENE_MODE_FALL_COLORS		= 5,
	V4L2_SCENE_MODE_FIREWORKS		= 6,
	V4L2_SCENE_MODE_LANDSCAPE		= 7,
	V4L2_SCENE_MODE_NIGHT			= 8,
	V4L2_SCENE_MODE_PARTY_INDOOR		= 9,
	V4L2_SCENE_MODE_PORTRAIT		= 10,
	V4L2_SCENE_MODE_SPORTS			= 11,
	V4L2_SCENE_MODE_SUNSET			= 12,
	V4L2_SCENE_MODE_TEXT			= 13,
};

#define V4L2_CID_3A_LOCK			(V4L2_CID_CAMERA_CLASS_BASE+27)
#define V4L2_LOCK_EXPOSURE			(1 << 0)
#define V4L2_LOCK_WHITE_BALANCE			(1 << 1)
#define V4L2_LOCK_FOCUS				(1 << 2)

#define V4L2_CID_AUTO_FOCUS_START		(V4L2_CID_CAMERA_CLASS_BASE+28)
#define V4L2_CID_AUTO_FOCUS_STOP		(V4L2_CID_CAMERA_CLASS_BASE+29)
#define V4L2_CID_AUTO_FOCUS_STATUS		(V4L2_CID_CAMERA_CLASS_BASE+30)
#define V4L2_AUTO_FOCUS_STATUS_IDLE		(0 << 0)
#define V4L2_AUTO_FOCUS_STATUS_BUSY		(1 << 0)
#define V4L2_AUTO_FOCUS_STATUS_REACHED		(1 << 1)
#define V4L2_AUTO_FOCUS_STATUS_FAILED		(1 << 2)

#define V4L2_CID_AUTO_FOCUS_RANGE		(V4L2_CID_CAMERA_CLASS_BASE+31)
enum v4l2_auto_focus_range {
	V4L2_AUTO_FOCUS_RANGE_AUTO		= 0,
	V4L2_AUTO_FOCUS_RANGE_NORMAL		= 1,
	V4L2_AUTO_FOCUS_RANGE_MACRO		= 2,
	V4L2_AUTO_FOCUS_RANGE_INFINITY		= 3,
};


/* FM Modulator class control IDs */

#define V4L2_CID_FM_TX_CLASS_BASE		(V4L2_CTRL_CLASS_FM_TX | 0x900)
#define V4L2_CID_FM_TX_CLASS			(V4L2_CTRL_CLASS_FM_TX | 1)

#define V4L2_CID_RDS_TX_DEVIATION		(V4L2_CID_FM_TX_CLASS_BASE + 1)
#define V4L2_CID_RDS_TX_PI			(V4L2_CID_FM_TX_CLASS_BASE + 2)
#define V4L2_CID_RDS_TX_PTY			(V4L2_CID_FM_TX_CLASS_BASE + 3)
#define V4L2_CID_RDS_TX_PS_NAME			(V4L2_CID_FM_TX_CLASS_BASE + 5)
#define V4L2_CID_RDS_TX_RADIO_TEXT		(V4L2_CID_FM_TX_CLASS_BASE + 6)

#define V4L2_CID_AUDIO_LIMITER_ENABLED		(V4L2_CID_FM_TX_CLASS_BASE + 64)
#define V4L2_CID_AUDIO_LIMITER_RELEASE_TIME	(V4L2_CID_FM_TX_CLASS_BASE + 65)
#define V4L2_CID_AUDIO_LIMITER_DEVIATION	(V4L2_CID_FM_TX_CLASS_BASE + 66)

#define V4L2_CID_AUDIO_COMPRESSION_ENABLED	(V4L2_CID_FM_TX_CLASS_BASE + 80)
#define V4L2_CID_AUDIO_COMPRESSION_GAIN		(V4L2_CID_FM_TX_CLASS_BASE + 81)
#define V4L2_CID_AUDIO_COMPRESSION_THRESHOLD	(V4L2_CID_FM_TX_CLASS_BASE + 82)
#define V4L2_CID_AUDIO_COMPRESSION_ATTACK_TIME	(V4L2_CID_FM_TX_CLASS_BASE + 83)
#define V4L2_CID_AUDIO_COMPRESSION_RELEASE_TIME	(V4L2_CID_FM_TX_CLASS_BASE + 84)

#define V4L2_CID_PILOT_TONE_ENABLED		(V4L2_CID_FM_TX_CLASS_BASE + 96)
#define V4L2_CID_PILOT_TONE_DEVIATION		(V4L2_CID_FM_TX_CLASS_BASE + 97)
#define V4L2_CID_PILOT_TONE_FREQUENCY		(V4L2_CID_FM_TX_CLASS_BASE + 98)

#define V4L2_CID_TUNE_PREEMPHASIS		(V4L2_CID_FM_TX_CLASS_BASE + 112)
enum v4l2_preemphasis {
	V4L2_PREEMPHASIS_DISABLED	= 0,
	V4L2_PREEMPHASIS_50_uS		= 1,
	V4L2_PREEMPHASIS_75_uS		= 2,
};
#define V4L2_CID_TUNE_POWER_LEVEL		(V4L2_CID_FM_TX_CLASS_BASE + 113)
#define V4L2_CID_TUNE_ANTENNA_CAPACITOR		(V4L2_CID_FM_TX_CLASS_BASE + 114)


/* Flash and privacy (indicator) light controls */

#define V4L2_CID_FLASH_CLASS_BASE		(V4L2_CTRL_CLASS_FLASH | 0x900)
#define V4L2_CID_FLASH_CLASS			(V4L2_CTRL_CLASS_FLASH | 1)

#define V4L2_CID_FLASH_LED_MODE			(V4L2_CID_FLASH_CLASS_BASE + 1)
enum v4l2_flash_led_mode {
	V4L2_FLASH_LED_MODE_NONE,
	V4L2_FLASH_LED_MODE_FLASH,
	V4L2_FLASH_LED_MODE_TORCH,
};

#define V4L2_CID_FLASH_STROBE_SOURCE		(V4L2_CID_FLASH_CLASS_BASE + 2)
enum v4l2_flash_strobe_source {
	V4L2_FLASH_STROBE_SOURCE_SOFTWARE,
	V4L2_FLASH_STROBE_SOURCE_EXTERNAL,
};

#define V4L2_CID_FLASH_STROBE			(V4L2_CID_FLASH_CLASS_BASE + 3)
#define V4L2_CID_FLASH_STROBE_STOP		(V4L2_CID_FLASH_CLASS_BASE + 4)
#define V4L2_CID_FLASH_STROBE_STATUS		(V4L2_CID_FLASH_CLASS_BASE + 5)

#define V4L2_CID_FLASH_TIMEOUT			(V4L2_CID_FLASH_CLASS_BASE + 6)
#define V4L2_CID_FLASH_INTENSITY		(V4L2_CID_FLASH_CLASS_BASE + 7)
#define V4L2_CID_FLASH_TORCH_INTENSITY		(V4L2_CID_FLASH_CLASS_BASE + 8)
#define V4L2_CID_FLASH_INDICATOR_INTENSITY	(V4L2_CID_FLASH_CLASS_BASE + 9)

#define V4L2_CID_FLASH_FAULT			(V4L2_CID_FLASH_CLASS_BASE + 10)
#define V4L2_FLASH_FAULT_OVER_VOLTAGE		(1 << 0)
#define V4L2_FLASH_FAULT_TIMEOUT		(1 << 1)
#define V4L2_FLASH_FAULT_OVER_TEMPERATURE	(1 << 2)
#define V4L2_FLASH_FAULT_SHORT_CIRCUIT		(1 << 3)
#define V4L2_FLASH_FAULT_OVER_CURRENT		(1 << 4)
#define V4L2_FLASH_FAULT_INDICATOR		(1 << 5)

#define V4L2_CID_FLASH_CHARGE			(V4L2_CID_FLASH_CLASS_BASE + 11)
#define V4L2_CID_FLASH_READY			(V4L2_CID_FLASH_CLASS_BASE + 12)
#define V4L2_CID_XE_FLASH_INTENSITY  (V4L2_CID_FLASH_CLASS_BASE + 13)
#define V4L2_CID_G_XE_FLASH_INSETRED    (V4L2_CID_FLASH_CLASS_BASE + 14)
#define V4L2_CID_XE_FLASH_CHARGING_CTRL    (V4L2_CID_FLASH_CLASS_BASE + 15)

/* JPEG-class control IDs */

#define V4L2_CID_JPEG_CLASS_BASE		(V4L2_CTRL_CLASS_JPEG | 0x900)
#define V4L2_CID_JPEG_CLASS			(V4L2_CTRL_CLASS_JPEG | 1)

#define	V4L2_CID_JPEG_CHROMA_SUBSAMPLING	(V4L2_CID_JPEG_CLASS_BASE + 1)
enum v4l2_jpeg_chroma_subsampling {
	V4L2_JPEG_CHROMA_SUBSAMPLING_444	= 0,
	V4L2_JPEG_CHROMA_SUBSAMPLING_422	= 1,
	V4L2_JPEG_CHROMA_SUBSAMPLING_420	= 2,
	V4L2_JPEG_CHROMA_SUBSAMPLING_411	= 3,
	V4L2_JPEG_CHROMA_SUBSAMPLING_410	= 4,
	V4L2_JPEG_CHROMA_SUBSAMPLING_GRAY	= 5,
};
#define	V4L2_CID_JPEG_RESTART_INTERVAL		(V4L2_CID_JPEG_CLASS_BASE + 2)
#define	V4L2_CID_JPEG_COMPRESSION_QUALITY	(V4L2_CID_JPEG_CLASS_BASE + 3)

#define	V4L2_CID_JPEG_ACTIVE_MARKER		(V4L2_CID_JPEG_CLASS_BASE + 4)
#define	V4L2_JPEG_ACTIVE_MARKER_APP0		(1 << 0)
#define	V4L2_JPEG_ACTIVE_MARKER_APP1		(1 << 1)
#define	V4L2_JPEG_ACTIVE_MARKER_COM		(1 << 16)
#define	V4L2_JPEG_ACTIVE_MARKER_DQT		(1 << 17)
#define	V4L2_JPEG_ACTIVE_MARKER_DHT		(1 << 18)


/* Image source controls */
#define V4L2_CID_IMAGE_SOURCE_CLASS_BASE	(V4L2_CTRL_CLASS_IMAGE_SOURCE | 0x900)
#define V4L2_CID_IMAGE_SOURCE_CLASS		(V4L2_CTRL_CLASS_IMAGE_SOURCE | 1)

#define V4L2_CID_VBLANK				(V4L2_CID_IMAGE_SOURCE_CLASS_BASE + 1)
#define V4L2_CID_HBLANK				(V4L2_CID_IMAGE_SOURCE_CLASS_BASE + 2)
#define V4L2_CID_ANALOGUE_GAIN			(V4L2_CID_IMAGE_SOURCE_CLASS_BASE + 3)
#define V4L2_CID_TEST_PATTERN_RED		(V4L2_CID_IMAGE_SOURCE_CLASS_BASE + 4)
#define V4L2_CID_TEST_PATTERN_GREENR		(V4L2_CID_IMAGE_SOURCE_CLASS_BASE + 5)
#define V4L2_CID_TEST_PATTERN_BLUE		(V4L2_CID_IMAGE_SOURCE_CLASS_BASE + 6)
#define V4L2_CID_TEST_PATTERN_GREENB		(V4L2_CID_IMAGE_SOURCE_CLASS_BASE + 7)


/* Image processing controls */

#define V4L2_CID_IMAGE_PROC_CLASS_BASE		(V4L2_CTRL_CLASS_IMAGE_PROC | 0x900)
#define V4L2_CID_IMAGE_PROC_CLASS		(V4L2_CTRL_CLASS_IMAGE_PROC | 1)

#define V4L2_CID_LINK_FREQ			(V4L2_CID_IMAGE_PROC_CLASS_BASE + 1)
#define V4L2_CID_PIXEL_RATE			(V4L2_CID_IMAGE_PROC_CLASS_BASE + 2)
#define V4L2_CID_TEST_PATTERN			(V4L2_CID_IMAGE_PROC_CLASS_BASE + 3)


/*  DV-class control IDs defined by V4L2 */
#define V4L2_CID_DV_CLASS_BASE			(V4L2_CTRL_CLASS_DV | 0x900)
#define V4L2_CID_DV_CLASS			(V4L2_CTRL_CLASS_DV | 1)

#define	V4L2_CID_DV_TX_HOTPLUG			(V4L2_CID_DV_CLASS_BASE + 1)
#define	V4L2_CID_DV_TX_RXSENSE			(V4L2_CID_DV_CLASS_BASE + 2)
#define	V4L2_CID_DV_TX_EDID_PRESENT		(V4L2_CID_DV_CLASS_BASE + 3)
#define	V4L2_CID_DV_TX_MODE			(V4L2_CID_DV_CLASS_BASE + 4)
enum v4l2_dv_tx_mode {
	V4L2_DV_TX_MODE_DVI_D	= 0,
	V4L2_DV_TX_MODE_HDMI	= 1,
};
#define V4L2_CID_DV_TX_RGB_RANGE		(V4L2_CID_DV_CLASS_BASE + 5)
enum v4l2_dv_rgb_range {
	V4L2_DV_RGB_RANGE_AUTO	  = 0,
	V4L2_DV_RGB_RANGE_LIMITED = 1,
	V4L2_DV_RGB_RANGE_FULL	  = 2,
};

#define	V4L2_CID_DV_RX_POWER_PRESENT		(V4L2_CID_DV_CLASS_BASE + 100)
#define V4L2_CID_DV_RX_RGB_RANGE		(V4L2_CID_DV_CLASS_BASE + 101)

#define V4L2_CID_FM_RX_CLASS_BASE		(V4L2_CTRL_CLASS_FM_RX | 0x900)
#define V4L2_CID_FM_RX_CLASS			(V4L2_CTRL_CLASS_FM_RX | 1)

#define V4L2_CID_TUNE_DEEMPHASIS		(V4L2_CID_FM_RX_CLASS_BASE + 1)
enum v4l2_deemphasis {
	V4L2_DEEMPHASIS_DISABLED	= V4L2_PREEMPHASIS_DISABLED,
	V4L2_DEEMPHASIS_50_uS		= V4L2_PREEMPHASIS_50_uS,
	V4L2_DEEMPHASIS_75_uS		= V4L2_PREEMPHASIS_75_uS,
};

#define V4L2_CID_RDS_RECEPTION			(V4L2_CID_FM_RX_CLASS_BASE + 2)

#endif
