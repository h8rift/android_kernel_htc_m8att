/*
 * clk.h
 *
 * DSP-BIOS Bridge driver support functions for TI OMAP processors.
 *
 * Provides Clock functions.
 *
 * Copyright (C) 2005-2006 Texas Instruments, Inc.
 *
 * This package is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * THIS PACKAGE IS PROVIDED ``AS IS'' AND WITHOUT ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, WITHOUT LIMITATION, THE IMPLIED
 * WARRANTIES OF MERCHANTIBILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

#ifndef _CLK_H
#define _CLK_H

enum dsp_clk_id {
	DSP_CLK_IVA2 = 0,
	DSP_CLK_GPT5,
	DSP_CLK_GPT6,
	DSP_CLK_GPT7,
	DSP_CLK_GPT8,
	DSP_CLK_WDT3,
	DSP_CLK_MCBSP1,
	DSP_CLK_MCBSP2,
	DSP_CLK_MCBSP3,
	DSP_CLK_MCBSP4,
	DSP_CLK_MCBSP5,
	DSP_CLK_SSI,
	DSP_CLK_NOT_DEFINED
};

extern void dsp_clk_exit(void);

extern void dsp_clk_init(void);

void dsp_gpt_wait_overflow(short int clk_id, unsigned int load);

extern int dsp_clk_enable(enum dsp_clk_id clk_id);

u32 dsp_clock_enable_all(u32 dsp_per_clocks);

extern int dsp_clk_disable(enum dsp_clk_id clk_id);

extern u32 dsp_clk_get_iva2_rate(void);

u32 dsp_clock_disable_all(u32 dsp_per_clocks);

extern void ssi_clk_prepare(bool FLAG);

#endif 
