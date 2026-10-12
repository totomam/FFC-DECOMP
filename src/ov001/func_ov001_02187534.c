#include "ffc/types.h"

extern uint32_t func_02092864(const uint8_t *text);
extern uint64_t func_0209a76c(int i, uint32_t t);
extern void func_ov001_02185588(uint8_t *dst, uint8_t *src, uint32_t n);

void func_ov001_02187534(uint8_t *p, int8_t *a, int n)
{
    int8_t *base;
    int i;
    uint32_t t = func_02092864(p + 0x54);
    base = (int8_t *)(p + 0x54);
    for (i = 0; i < n; i++) {
        uint32_t off = (uint32_t)(func_0209a76c(i, t) >> 32);
        int m = (int)base[off] * i;
        uint8_t *d = p + (m % 8);
        int8_t old = (int8_t)d[0x74];
        uint8_t *e = p + (i % 8);
        int8_t s = (int8_t)e[0x74];
        d[0x74] = (uint8_t)((int8_t)(s ^ a[i]) ^ old);
    }
    func_ov001_02185588(p + (0x1b << 6), p + 0x74, 8);
}
