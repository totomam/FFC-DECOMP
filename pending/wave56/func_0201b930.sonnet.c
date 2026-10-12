#include "ffc/types.h"

extern uint32_t func_02081210(uint32_t a, uint32_t b);
extern uint32_t func_02015938(uint32_t a);
extern void func_0206c1a0(int32_t *out, uint32_t in);
extern uint32_t data_020b8e44;

typedef struct { int32_t p[12]; int32_t v[12]; } Vec;

uint32_t func_0201b930(uint8_t *self, uint32_t idx, uint32_t val) {
    uint32_t off = idx << 2;

    if (*(uint32_t *)(self + 0xdc + off) != 0) {
        if (val == *(uint32_t *)(self + 0xe8 + off)) goto L00a4;
    }
    *(uint32_t *)(self + 0xe8 + off) = val;
    if (val == 0) return 0;
    {
        uint32_t m = 0x19;
        uint32_t u = 1;
        uint32_t a, b, c, d, cntg, k;
        int32_t n;
        m <<= 14;
        a = func_02081210(val << 12, m);
        u <<= 12;
        b = func_02081210(u << 1, a);
        n = ((int32_t)(b + u) >> 12) - 1;
        c = func_02081210(u, a);
        d = func_02081210(c - u, (uint32_t)n << 12);
        cntg = 1;
        for (k = 0; k < (uint32_t)n; k++) {
            Vec tmp;
            func_0206c1a0(tmp.v, func_02015938(data_020b8e44));
            if (tmp.v[0] <= (int32_t)d) cntg++;
        }
        *(uint32_t *)(self + 0xf4 + off) = cntg;
    }
L00a4:
    if (*(uint32_t *)(self + 0xe8 + off) == 0) return 0;
    *(uint32_t *)(self + 0xdc + off) = *(uint32_t *)(self + 0xdc + off) + 1;
    if (*(uint32_t *)(self + 0xdc + off) < *(uint32_t *)(self + 0xf4 + off)) return 0;
    *(uint32_t *)(self + 0xdc + off) = 0;
    return 1;
}
