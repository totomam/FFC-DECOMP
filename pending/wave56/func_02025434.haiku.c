#include "ffc/types.h"

extern void *func_02023638(void *);
extern void func_020849f4(void *dst, void *src, uint32_t n);
extern uint32_t func_02025404(void *a, void *b);
extern void func_0202522c(void *a, uint32_t b, uint32_t c, void *d, void *e);
extern uint32_t func_0202538c(void *a, uint32_t b, uint32_t c, void *d);
extern void func_02025020(void *a);

void func_02025434(uint8_t *p, uint32_t n, uint32_t a, uint32_t b) {
    uint32_t off = 0x180;
    uint32_t idx = *(uint32_t *)(p + off) >> 4;
    uint8_t *q = (uint8_t *)func_02023638(*(void **)(p + 0xe4));
    if (q != 0) {
        uint32_t m = n - 1;
        if (n != 0) {
            do {
                q = q + 4 + 0x30 * *(uint32_t *)(*(uint8_t **)(p + 0xe4) + 0x18);
            } while (m-- != 0);
        }
        func_020849f4(q + 4 + 0x30 * idx, *(uint8_t **)(p + 0x1a0) + (a & ~1u), 0x30);
        return;
    }
    {
        uint32_t *s = *(uint32_t **)(p + 0xf0);
        uint32_t ret;
        uint8_t l16[0x14];
        uint32_t l24;
        uint32_t l28;
        uint8_t l2c[0x30];
        if (s == 0 || s[2] == 0 || s[3] == 0) {
            return;
        }
        ret = func_02025404(*(void **)(p + 0xe8), (uint8_t *)s + s[1] + s[4] + s[5 + n]);
        func_0202522c(*(void **)(p + 0xec), ret, b, &l24, &l28);
        if (func_0202538c(*(void **)(p + 0xf0), n, idx, l16) != 0) {
            func_02025020(l16);
            off += 0x20;
            func_020849f4(l2c, *(uint8_t **)(p + off) + (a & ~1u), 0x30);
        }
    }
}
