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
    phi = (uint32_t *)(p + 0x5c);
    plo = (uint32_t *)(p + 0x58);
    buf = p + 0x14;
    pcnt = (uint32_t *)(p + 0x54);
    while (len != 0) {
        k = 0x40 - *pcnt;
        if (k > len) {
            k = len;
        }
        func_02084b2c(buf + *pcnt, src, k);
        *pcnt += k;
        len -= k;
        if (*pcnt >= 0x40) {
            data_020b2b10(p);
            *pcnt = 0;
            if (*plo + 1 == 0) {
                *phi += 1;
            }
            *plo += 1;
        }
    }
}
