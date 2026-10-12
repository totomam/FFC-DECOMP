#include "ffc/types.h"

extern uint32_t func_ov000_021456e4(uint8_t *p, uint32_t n);
extern int func_ov000_02146660(uint32_t hi, uint32_t lo);
extern void func_ov000_021465b4(void *a, uint8_t *b, uint32_t n);
extern void func_ov000_02146534(void *a, uint8_t *b, uint32_t n);

void func_ov000_0214669c(void *a, uint8_t *b, uint32_t n)
{
    uint8_t *base = (uint8_t *)a;
    int32_t w0, w1, w2;
    uint32_t hi, lo;

    if (n < 8) {
        return;
    }
    if (func_ov000_021456e4(b, n) != 0xffff) {
        return;
    }
    w0 = *(uint16_t *)(base + 0xc);
    w1 = *(uint16_t *)(base + 0xe);
    w2 = *(uint16_t *)(base + 0x10);
    hi = ((uint32_t)(uint16_t)((w0 >> 8) | (w0 << 8)) << 16) | (uint16_t)((w1 >> 8) | (w1 << 8));
    lo = ((uint32_t)(uint16_t)((w2 >> 8) | (w2 << 8)) << 16) | (uint16_t)((*(uint16_t *)(base + 0x12) >> 8) | (*(uint16_t *)(base + 0x12) << 8));
    if (func_ov000_02146660(hi, lo) == 0) {
        return;
    }
    switch (b[0]) {
    case 0:
        func_ov000_021465b4(a, b, n);
        return;
    case 8:
        func_ov000_02146534(a, b, n);
        return;
    }
}
