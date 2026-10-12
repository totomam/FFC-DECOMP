#include "ffc/types.h"

extern void func_02084b2c(void *dst, const void *src, uint32_t n);
extern void (*data_020b2b10)(void *);

void func_02083c10(uint8_t *p, void *src, uint32_t len) {
    uint32_t *phi;
    uint32_t *plo;
    uint8_t *buf;
    uint32_t *pcnt;
    uint32_t k;

    if (len == 0) {
        return;
    }
    phi = (uint32_t *)p;
    plo = (uint32_t *)p;
    buf = p;
    phi = (uint32_t *)(p + 0x5c);
    plo = (uint32_t *)(p + 0x58);
    buf = p + 0x14;
    pcnt = (uint32_t *)(p + 0x54);
    do {
        k = 0x40 - *(uint32_t *)(p + 0x54);
        if (k > len) {
            k = len;
        }
        func_02084b2c(buf + *(uint32_t *)(p + 0x54), src, k);
        len -= k;
        *pcnt += k;
        if (*pcnt >= 0x40) {
            data_020b2b10(p);
            *(uint32_t *)(p + 0x54) = 0;
            if (++*plo == 0) {
                ++*phi;
            }
        }
    } while (len != 0);
}
