/* 
 * Copyright 2022, Capgemini Engineering
 * 
 * SPDX-License-Identifier: BSD-2-Clause
 *
 */

#include <sel4_timer.h>

void __udelay(unsigned long usec)
{
    udelay(usec);
}
