#include "ffc/types.h"

extern void func_02021338(int x);
extern int func_ov008_021a27ec(void *p, uint32_t x);
extern void func_ov008_021a2598(void *p);

void func_ov008_021a23a8(uint8_t *a0, uint32_t a1, uint32_t a2)
{
    uint32_t *w;
    uint32_t mask;
    uint32_t cur;
    int d;

    w = (uint32_t *)(*(uint8_t **)(a0 + 0x124) + ((a1 >> 5) << 2));
    mask = 1u << (a1 & 31);
    cur = (*w & mask) ? 1u : 0u;

    if (a2 == cur) {
        return;
    }

    if (a2) {
        *w = *w | mask;
    } else {
        *w = *w & ~mask;
    }

    if (a2) {
        func_02021338(0xbf);
        d = func_ov008_021a27ec(a0, a1);
        *(int *)(a0 + 0x138) += d;
        a0[0x13c]++;
    } else {
        func_02021338(0xc0);
        d = func_ov008_021a27ec(a0, a1);
        *(int *)(a0 + 0x138) -= d;
        a0[0x13c]--;
    }
    func_ov008_021a2598(a0);
}
