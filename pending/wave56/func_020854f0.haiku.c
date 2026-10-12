/* cflags: -nothumb */
#include "ffc/types.h"

void func_020854f0(const uint8_t *src, uint16_t *dst)
{
    uint32_t hdr = *(const uint32_t *)src;
    int32_t size = (int32_t)(hdr >> 8);
    uint32_t fp = hdr & 0xf;
    uint32_t acc = 0;
    uint32_t sh = 0;
    uint32_t ctl;
    int bit;

    src += 4;
    while (size > 0) {
        ctl = *src++;
        for (bit = 8; bit > 0; bit--) {
            if (!(ctl & 0x80)) {
                acc |= (uint32_t)(*src++) << sh;
                size--;
                sh ^= 8;
                if (sh == 0) {
                    *dst++ = (uint16_t)acc;
                    acc = 0;
                }
            } else {
                uint32_t n;
                uint32_t disp;
                int32_t len;
                if (fp == 0) {
                    n = 3;
                } else if (*src & 0xe0) {
                    n = 1;
                } else {
                    n = (*src & 0xf) << 4;
                    if (*src & 0x10) {
                        src++;
                        n = (n << 8) + ((uint32_t)(*src) << 4) + 0x100;
                    }
                    n += 0x11;
                }
                len = (int32_t)(n + (*src >> 4));
                disp = ((((uint32_t)(*src++) & 0xf) << 8) | *src++) + 1;
                size -= len;
                do {
                    uint32_t lr = ((8 - sh) ^ ((disp & 1) << 3)) ^ 8;
                    uint32_t r8 = (disp + ((8 - sh) >> 3)) & ~1u;
                    uint32_t h = *(uint16_t *)((uint8_t *)dst - r8);
                    acc |= ((h >> lr) & 0xff) << sh;
                    sh ^= 8;
                    if (sh == 0) {
                        *dst++ = (uint16_t)acc;
                        acc = 0;
                    }
                } while (--len > 0);
            }
            ctl <<= 1;
            if (size <= 0) {
                break;
            }
        }
    }
}
