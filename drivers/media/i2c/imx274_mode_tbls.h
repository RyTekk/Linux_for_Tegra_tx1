/*
 * imx274.c - imx274 sensor driver
 *
 * Copyright (c) 2016, NVIDIA CORPORATION, All Rights Reserved.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __IMX274_I2C_TABLES__
#define __IMX274_I2C_TABLES__

#include <media/camera_common.h>


#define IMX274_TABLE_WAIT_MS 0
#define IMX274_TABLE_END 1
#define IMX274_WAIT_MS 1

#define imx274_reg struct reg_8

static const imx274_reg imx274_start[] = {
	{0x3000, 0x00}, /* mode select streaming on */
	{0x303E, 0x02},
	{IMX274_TABLE_WAIT_MS, IMX274_WAIT_MS},
	{0x30F4, 0x00},
	{0x3018, 0xA2},
	{IMX274_TABLE_WAIT_MS, IMX274_WAIT_MS},
	{IMX274_TABLE_END, 0x00}
};

static const imx274_reg imx274_stop[] = {
	{IMX274_TABLE_WAIT_MS, IMX274_WAIT_MS},
	{0x3000, 0x12}, /* mode select streaming off */
	{IMX274_TABLE_END, 0x00}
};

static const imx274_reg tp_colorbars[] = {
	/* test pattern */
	{0x303C, 0x11},
	{0x303D, 0x0B},
	{0x370B, 0x11},
	{0x370E, 0x00},
	{0x377F, 0x01},
	{0x3781, 0x01},
	{IMX274_TABLE_END, 0x00}
};


/* Mode 1 : 3840X2160 10 bits 30fps*/
static const imx274_reg mode_3840X2160[] = {
	{IMX274_TABLE_WAIT_MS, IMX274_WAIT_MS},
	/* input freq. 24M */
	{0x3120, 0xF0},
	{0x3122, 0x02},
	{0x3129, 0x9c},
	{0x312A, 0x02},
	{0x312D, 0x02},

	{0x310B, 0x00},
	{0x304C, 0x00},
	{0x304D, 0x03},
	{0x331C, 0x1A},
	{0x3502, 0x02},
	{0x3529, 0x0E},
	{0x352A, 0x0E},
	{0x352B, 0x0E},
	{0x3538, 0x0E},
	{0x3539, 0x0E},
	{0x3553, 0x00},
	{0x357D, 0x05},
	{0x357F, 0x05},
	{0x3581, 0x04},
	{0x3583, 0x76},
	{0x3587, 0x01},
	{0x35BB, 0x0E},
	{0x35BC, 0x0E},
	{0x35BD, 0x0E},
	{0x35BE, 0x0E},
	{0x35BF, 0x0E},
	{0x366E, 0x00},
	{0x366F, 0x00},
	{0x3670, 0x00},
	{0x3671, 0x00},
	{0x30EE, 0x01},
	{0x3304, 0x32},
	{0x3306, 0x32},
	{0x3590, 0x32},
	{0x3686, 0x32},
	/* resolution */
	{0x30E2, 0x01},
	{0x30F6, 0x07},
	{0x30F7, 0x01},
	{0x30F8, 0xC6},
	{0x30F9, 0x11},
	{0x3130, 0x86},
	{0x3131, 0x08},
	{0x3132, 0x7E},
	{0x3133, 0x08},
	/* mode setting */
	{0x3004, 0x01},
	{0x3005, 0x01},
	{0x3006, 0x00},
	{0x3007, 0x02},
	{0x3A41, 0x08},
	{0x3342, 0x0A},
	{0x3343, 0x00},
	{0x3344, 0x16},
	{0x3345, 0x00},
	{0x3528, 0x0E},
	{0x3554, 0x1F},
	{0x3555, 0x01},
	{0x3556, 0x01},
	{0x3557, 0x01},
	{0x3558, 0x01},
	{0x3559, 0x00},
	{0x355A, 0x00},
	{0x35BA, 0x0E},
	{0x366A, 0x1B},
	{0x366B, 0x1A},
	{0x366C, 0x19},
	{0x366D, 0x17},
	{0x33A6, 0x01},
	{0x306B, 0x05},

	{0x300E, 0x01},

	{IMX274_TABLE_WAIT_MS, IMX274_WAIT_MS},
	{IMX274_TABLE_END, 0x0000}
};

/* Mode 1 : 3840X2160 10 bits 60fps*/
static const imx274_reg mode_3840X2160_60fps[] = {
	{IMX274_TABLE_WAIT_MS, IMX274_WAIT_MS},
	/* input freq. 24M */
	{0x3120, 0xF0},
	{0x3122, 0x02},
	{0x3129, 0x9c},
	{0x312A, 0x02},
	{0x312D, 0x02},

	{0x310B, 0x00},
	{0x304C, 0x00},
	{0x304D, 0x03},
	{0x331C, 0x1A},
	{0x3502, 0x02},
	{0x3529, 0x0E},
	{0x352A, 0x0E},
	{0x352B, 0x0E},
	{0x3538, 0x0E},
	{0x3539, 0x0E},
	{0x3553, 0x00},
	{0x357D, 0x05},
	{0x357F, 0x05},
	{0x3581, 0x04},
	{0x3583, 0x76},
	{0x3587, 0x01},
	{0x35BB, 0x0E},
	{0x35BC, 0x0E},
	{0x35BD, 0x0E},
	{0x35BE, 0x0E},
	{0x35BF, 0x0E},
	{0x366E, 0x00},
	{0x366F, 0x00},
	{0x3670, 0x00},
	{0x3671, 0x00},
	{0x30EE, 0x01},
	{0x3304, 0x32},
	{0x3306, 0x32},
	{0x3590, 0x32},
	{0x3686, 0x32},
	/* resolution */
	{0x30E2, 0x01},
	{0x30F6, 0x07},
	{0x30F7, 0x01},
	{0x30F8, 0xC6},
	{0x30F9, 0x11},
	{0x3130, 0x86},
	{0x3131, 0x08},
	{0x3132, 0x7E},
	{0x3133, 0x08},
	/* mode setting */
	{0x3004, 0x01},
	{0x3005, 0x01},
	{0x3006, 0x00},
	{0x3007, 0x02},
	{0x3A41, 0x08},
	{0x3342, 0x0A},
	{0x3343, 0x00},
	{0x3344, 0x16},
	{0x3345, 0x00},
	{0x3528, 0x0E},
	{0x3554, 0x1F},
	{0x3555, 0x01},
	{0x3556, 0x01},
	{0x3557, 0x01},
	{0x3558, 0x01},
	{0x3559, 0x00},
	{0x355A, 0x00},
	{0x35BA, 0x0E},
	{0x366A, 0x1B},
	{0x366B, 0x1A},
	{0x366C, 0x19},
	{0x366D, 0x17},
	{0x33A6, 0x01},
	{0x306B, 0x05},

	{0x300E, 0x00},

	{IMX274_TABLE_WAIT_MS, IMX274_WAIT_MS},
	{IMX274_TABLE_END, 0x0000}
};

/* Mode 3 : 1920X1080 10 bits 60fps*/
static imx274_reg mode_1920X1080[] = {
	{IMX274_TABLE_WAIT_MS, IMX274_WAIT_MS},
	/* input freq. 24M */
	{0x3120, 0xF0},
	{0x3122, 0x02},
	{0x3129, 0x9c},
	{0x312A, 0x02},
	{0x312D, 0x02},

	{0x310B, 0x00},
	{0x304C, 0x00},
	{0x304D, 0x03},
	{0x331C, 0x1A},
	{0x3502, 0x02},
	{0x3529, 0x0E},
	{0x352A, 0x0E},
	{0x352B, 0x0E},
	{0x3538, 0x0E},
	{0x3539, 0x0E},
	{0x3553, 0x00},
	{0x357D, 0x05},
	{0x357F, 0x05},
	{0x3581, 0x04},
	{0x3583, 0x76},
	{0x3587, 0x01},
	{0x35BB, 0x0E},
	{0x35BC, 0x0E},
	{0x35BD, 0x0E},
	{0x35BE, 0x0E},
	{0x35BF, 0x0E},
	{0x366E, 0x00},
	{0x366F, 0x00},
	{0x3670, 0x00},
	{0x3671, 0x00},
	{0x30EE, 0x01},
	{0x3304, 0x32},
	{0x3306, 0x32},
	{0x3590, 0x32},
	{0x3686, 0x32},
	/* resolution */
	{0x30E2, 0x02},
	{0x30F6, 0x04},
	{0x30F7, 0x01},
	{0x30F8, 0x06},
	{0x30F9, 0x09},
	{0x3130, 0x4E},
	{0x3131, 0x04},
	{0x3132, 0x46},
	{0x3133, 0x04},
	/* mode setting */
	{0x3004, 0x02},
	{0x3005, 0x21},
	{0x3006, 0x00},
	{0x3007, 0x11},
	{0x3A41, 0x08},
	{0x3342, 0x0A},
	{0x3343, 0x00},
	{0x3344, 0x1A},
	{0x3345, 0x00},
	{0x3528, 0x0E},
	{0x3554, 0x00},
	{0x3555, 0x01},
	{0x3556, 0x01},
	{0x3557, 0x01},
	{0x3558, 0x01},
	{0x3559, 0x00},
	{0x355A, 0x00},
	{0x35BA, 0x0E},
	{0x366A, 0x1B},
	{0x366B, 0x1A},
	{0x366C, 0x19},
	{0x366D, 0x17},
	{0x33A6, 0x01},
	{0x306B, 0x05},

	{0x300E, 0x01},

	{IMX274_TABLE_WAIT_MS, IMX274_WAIT_MS},
	{IMX274_TABLE_END, 0x0000}
};

/* Mode 5 : 1280X720 10 bits */
static imx274_reg mode_1280X720[] = {
	{IMX274_TABLE_WAIT_MS, IMX274_WAIT_MS},
	/* input freq. 24M */
	{0x3120, 0xF0},
	{0x3122, 0x02},
	{0x3129, 0x9c},
	{0x312A, 0x02},
	{0x312D, 0x02},

	{0x310B, 0x00},
	{0x304C, 0x00},
	{0x304D, 0x03},
	{0x331C, 0x1A},
	{0x3502, 0x02},
	{0x3529, 0x0E},
	{0x352A, 0x0E},
	{0x352B, 0x0E},
	{0x3538, 0x0E},
	{0x3539, 0x0E},
	{0x3553, 0x00},
	{0x357D, 0x05},
	{0x357F, 0x05},
	{0x3581, 0x04},
	{0x3583, 0x76},
	{0x3587, 0x01},
	{0x35BB, 0x0E},
	{0x35BC, 0x0E},
	{0x35BD, 0x0E},
	{0x35BE, 0x0E},
	{0x35BF, 0x0E},
	{0x366E, 0x00},
	{0x366F, 0x00},
	{0x3670, 0x00},
	{0x3671, 0x00},
	{0x30EE, 0x01},
	{0x3304, 0x32},
	{0x3306, 0x32},
	{0x3590, 0x32},
	{0x3686, 0x32},
	/* resolution */
	{0x30E2, 0x03},
	{0x30F6, 0x04},
	{0x30F7, 0x01},
	{0x30F8, 0x06},
	{0x30F9, 0x09},
	{0x3130, 0xE2},
	{0x3131, 0x02},
	{0x3132, 0xDE},
	{0x3133, 0x02},
	/* mode setting */
	{0x3004, 0x03},
	{0x3005, 0x31},
	{0x3006, 0x00},
	{0x3007, 0x09},
	{0x3A41, 0x04},
	{0x3342, 0x0A},
	{0x3343, 0x00},
	{0x3344, 0x1B},
	{0x3345, 0x00},
	{0x3528, 0x0E},
	{0x3554, 0x00},
	{0x3555, 0x01},
	{0x3556, 0x01},
	{0x3557, 0x01},
	{0x3558, 0x01},
	{0x3559, 0x00},
	{0x355A, 0x00},
	{0x35BA, 0x0E},
	{0x366A, 0x1B},
	{0x366B, 0x19},
	{0x366C, 0x17},
	{0x366D, 0x17},
	{0x33A6, 0x01},
	{0x306B, 0x05},

	{IMX274_TABLE_WAIT_MS, IMX274_WAIT_MS},
	{IMX274_TABLE_END, 0x0000}
};

enum {
	IMX274_MODE_3840X2160,
	IMX274_MODE_3840X2160_60FPS,
	IMX274_MODE_1920X1080,
	IMX274_MODE_1280X720,
	IMX274_MODE_START_STREAM,
	IMX274_MODE_STOP_STREAM,
	IMX274_MODE_TEST_PATTERN,
};

static const imx274_reg *mode_table[] = {
	[IMX274_MODE_3840X2160] = mode_3840X2160,
	[IMX274_MODE_3840X2160_60FPS] = mode_3840X2160_60fps,
	[IMX274_MODE_1920X1080] = mode_1920X1080,
	[IMX274_MODE_1280X720] = mode_1280X720,

	[IMX274_MODE_START_STREAM]		= imx274_start,
	[IMX274_MODE_STOP_STREAM]		= imx274_stop,
	[IMX274_MODE_TEST_PATTERN]		= tp_colorbars,
};

static const int imx274_30_fr[] = {
	30,
};

static const int imx274_60_fr[] = {
	60,
};

static const int imx274_mode_1920X1080_60_fr[] = {
	60,
};

static const struct camera_common_frmfmt imx274_frmfmt[] = {
	{{3864, 2160},	imx274_60_fr, 1, 0, IMX274_MODE_3840X2160_60FPS},
	{{3864, 2160},	imx274_30_fr, 1, 0, IMX274_MODE_3840X2160},
	{{1932, 1080},	imx274_60_fr, 1, 0, IMX274_MODE_1920X1080},
	{{1280, 720},	imx274_60_fr, 1, 0, IMX274_MODE_1280X720},
};
#endif  /* __IMX274_I2C_TABLES__ */
