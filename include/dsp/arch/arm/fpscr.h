/*
 * fpscr.h
 *
 *  Created on: 27 февр. 2020 г.
 *      Author: Vladimir Sadovnikov <lsp.plugin@gmail.com>
 *
 * This file is part of tamgamp.lv2 <https://github.com/sadko4u/tamgamp.lv2>.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 3 of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */
#ifndef DSP_ARCH_ARM_FPSCR_H_
#define DSP_ARCH_ARM_FPSCR_H_

#define FPSCR_IOC               (1 << 0)    /* Invlid operation cumulative exception */
#define FPSCR_DZC               (1 << 1)    /* Division by zero cumulative exception */
#define FPSCR_OFC               (1 << 2)    /* Overflow cumulative exception */
#define FPSCR_UFC               (1 << 3)    /* Underflow cumulative exception */
#define FPSCR_IXC               (1 << 4)    /* Inexact cumulative exception */
#define FPSCR_IDC               (1 << 7)    /* Input decimal cumulative exception */
#define FPSCR_IOE               (1 << 8)    /* Invalid operation exception enable */
#define FPSCR_DZE               (1 << 9)    /* Division by zero exception enable */
#define FPSCR_OFE               (1 << 10)   /* Overflow exception enable */
#define FPSCR_UFE               (1 << 11)   /* Underflow exception enable */
#define FPSCR_IXE               (1 << 12)   /* Inexact exception enable */
#define FPSCR_IDE               (1 << 15)   /* Input Denormal exception enable */
#define FPSCR_LEN_MASK          (7 << 16)   /* Length, deprecated by ARM */
#define FPSCR_STRIDE_MASK       (3 << 20)   /* Stride, deprecated by ARM */
#define FPSCR_RMODE_MASK        (3 << 22)   /* Rounding mode mask */
#define FPSCR_RMODE_RN          (0 << 22)   /* Rounding to nearest */
#define FPSCR_RMODE_RP          (1 << 22)   /* Rounding towards plus infinity  */
#define FPSCR_RMODE_RM          (2 << 22)   /* Rounding towards minus infinity  */
#define FPSCR_RMODE_RZ          (3 << 22)   /* Rounding towards zero  */
#define FPSCR_FZ                (1 << 24)   /* Flush-to-zero mode */
#define FPSCR_DN                (1 << 25)   /* Default NaN mode control */
#define FPSCR_AHP               (1 << 26)   /* Alternative half-precision control */
#define FPSCR_QC                (1 << 27)   /* Cumulative saturation */
#define FPSCR_V                 (1 << 28)   /* Overflow condition flag */
#define FPSCR_C                 (1 << 29)   /* Carry condition flag */
#define FPSCR_Z                 (1 << 30)   /* Zero condition flag */
#define FPSCR_N                 (1 << 31)   /* Negative condition flag */

namespace arm
{
#ifdef ARCH_ARM
    inline uint32_t read_fpscr()
    {
        uint32_t fpscr;

        ARCH_ARM_ASM
        (
            __ASM_EMIT("vmrs %[fpscr], FPSCR")
            : [fpscr] "=&r" (fpscr)
            : :
        );

        return fpscr;
    }

    inline void write_fpscr(uint32_t fpscr)
    {
        ARCH_ARM_ASM
        (
            __ASM_EMIT("vmsr FPSCR, %[fpscr]")
            :
            : [fpscr] "r" (fpscr)
            :
        );
    }
#else
    inline uint32_t read_fpscr()
    {
        return 0;
    }

    inline void write_fpscr(uint32_t fpscr)
    {
    }
#endif /* ARCH_ARM */
}

#endif /* DSP_ARCH_ARM_FPSCR_H_ */
