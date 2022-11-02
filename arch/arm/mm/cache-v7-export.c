/* SPDX-License-Identifier: GPL-2.0-only */
/*
 *  linux/arch/arm/mm/cache-v7-export.c
 *
 *  Copyright (C) 2022 Daniel Estevez <daniel@destevez.net>
 *
 */

#include <linux/export.h>

// implemented in cache-v7.S
extern void v7_dma_inv_range(unsigned long start, unsigned long end);

EXPORT_SYMBOL(v7_dma_inv_range);
