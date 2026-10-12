#include "ffc/types.h"

typedef struct {
    uint8_t pad0[2];
    uint16_t ctr;
    uint8_t pad1[0x4c];
    uint32_t w;
} FfcGlob;

extern FfcGlob data_ov000_0216bc60;
extern void func_ov000_02145d44(uint8_t *p, uint32_t a, uint8_t *src, uint32_t len, uint32_t a5, uint32_t flags);

#define BS(x) ((uint16_t)((((uint16_t)(x)) >> 8) | (((uint16_t)(x)) << 8)))

void func_ov000_02145e18(uint8_t *p, uint32_t n, uint8_t *src, uint32_t m, uint32_t a5, uint8_t a6)
{
    uint16_t off = 0;
    uint8_t *dp = p;
    uint32_t r6;

    p[-0x14] = 0x45;
    p[-0x13] = 0;
    data_ov000_0216bc60.ctr++;
    *(uint16_t *)(p - 0x10) = BS(data_ov000_0216bc60.ctr);
    p[-0xc] = 0x80;
    p[-0xb] = a6;
    *(uint16_t *)(p - 8) = BS(data_ov000_0216bc60.w & 0xffff);
    *(uint16_t *)(p - 6) = BS(data_ov000_0216bc60.w & 0xffff);
    *(uint16_t *)(p - 4) = BS(a5 >> 16);
    *(uint16_t *)(p - 2) = BS(a5 & 0xffff);

    if (n > 0x5c8) {
        do {
            func_ov000_02145d44(p, 0, dp, 0x5c8, a5, 0x2000 | off);
            dp += 0x5c8;
            n -= 0x5c8;
            off = (uint16_t)(off + 0xb9);
        } while (n > 0x5c8);

        if (n != 0) {
            if (m != 0) {
                func_ov000_02145d44(p, 0, dp, n, a5, 0x2000 | off);
            } else {
                func_ov000_02145d44(p, 0, dp, n, a5, off);
            }
            off = (uint16_t)(off + ((n << 13) >> 16));
            n = 0;
        }
    }

    if (n + m > 0x5c8) {
        do {
            r6 = 0x5c8 - n;
            func_ov000_02145d44(p, n, src, r6, a5, 0x2000 | off);
            src += r6;
            off = (uint16_t)(off + 0xb9);
            m -= r6;
            n = 0;
        } while (m > 0x5c8);
    }

    if (n + m != 0) {
        func_ov000_02145d44(p, n, src, m, a5, off);
    }
}
