#include "ffc/types.h"

extern uint32_t func_ov007_021ae604(uint32_t a);
extern uint32_t func_020722b4(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern uint32_t func_020721f0(uint32_t a, uint32_t b, uint32_t c, uint32_t *d);
extern uint32_t func_020721bc(uint32_t a, uint32_t b, uint32_t *c);
extern int64_t func_ov000_021553a8(uint32_t a);
extern void func_02084b2c(void *p, int v, uint32_t n);
extern void func_02093bc8(void *dst, uint32_t src);
extern uint32_t func_0201f850(uint32_t a, uint32_t b, void *c);
extern uint32_t data_020b8e44;
extern uint32_t data_020b93b8;

int func_ov007_021ae3e8(uint32_t a0, int64_t a1, uint32_t a3)
{
    uint32_t L[17];
    uint32_t r6;
    uint32_t *R;

    if (func_ov007_021ae604(a0) >= 0x3c) {
        return 0;
    }
    L[0] = ~0u;
    r6 = 0;
    if (a1 != 0) {
        R = *(uint32_t **)data_020b8e44;
        if (func_020722b4(R[0x84 / 4], R[0x80 / 4], a0, r6) == 0) {
            r6 = func_020721f0(R[0x84 / 4], (uint32_t)a1, (uint32_t)(a1 >> 32), &L[0]);
        }
    } else {
        R = *(uint32_t **)data_020b8e44;
        r6 = func_020721bc(R[0x84 / 4], a0, &L[0]);
        a1 = func_ov000_021553a8(a0);
    }
    if (r6 != 0) {
        uint32_t m;
        uint32_t w14;
        func_02084b2c(&L[1], 0, 0x40);
        L[1] = (L[1] & ~7u) | 2u;
        func_02093bc8(&L[5], a3);
        w14 = *(uint32_t *)(a3 + 0x14);
        m = ((uint8_t *)L)[8] & ~0x1fu;
        {
            uint8_t f = (uint8_t)((w14 << 19) >> 27);
            ((uint8_t *)L)[8] = (uint8_t)(m | (f & 0x1f));
            uint8_t g = (uint8_t)w14;
            L[10] = (L[10] & ~0xffu) | (uint32_t)(uint8_t)g;
        }
        L[13] = 9;
        L[14] = 0xb;
        L[15] = 1;
        L[11] = 0;
        L[12] = 0;
        L[16] = 0;
        L[3] = (uint32_t)a1;
        L[4] = (uint32_t)(a1 >> 32);
        func_0201f850(data_020b93b8, L[0], &L[1]);
    }
    return r6;
}
