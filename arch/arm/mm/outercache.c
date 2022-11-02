/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * arch/arm/mm/outercache.c
 *
 * Copyright (C) 2022 Daniel Estevez <daniel@destevez.net>
 */

#include <linux/export.h>
#include <linux/types.h>
#include <asm/outercache.h>

void arm_cache_outer_inv_range(phys_addr_t start, phys_addr_t end)
{
	outer_inv_range(start, end);
}

EXPORT_SYMBOL(arm_cache_outer_inv_range);
