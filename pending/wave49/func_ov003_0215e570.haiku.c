#include "ffc/types.h"

typedef struct {
    uint16_t x;
    uint16_t y;
    uint16_t z;
    uint16_t pad;
    uint32_t w;
} Out;

extern void *func_ov003_02153ed4(void *obj, uint32_t lo, uint32_t hi, Out *o, void *pair);
extern void *func_ov003_0214649c(void *obj);
extern Out *func_ov003_02153f98(void *obj, uint32_t idx);
extern uint32_t func_ov003_02153fb8(void *obj, uint32_t lo, uint32_t hi, Out *o, Out *o2);
extern uint8_t *func_ov003_021540a4(void *obj, uint32_t idx);
extern uint64_t func_0209a71c(uint64_t first, uint64_t second);
extern void *func_02081210();
extern uint32_t func_020817c8(int32_t first, int32_t second);
extern uint16_t func_ov003_0215c66c(uint16_t a, uint16_t b, uint32_t c);

void func_ov003_0215e570(uint8_t *p, Out *out)
{
    uint32_t pair[2];
    Out a;
    Out b;
    uint8_t *A;
    uint8_t *D;
    uint8_t *q;
    uint32_t off;
    uint32_t n;
    uint32_t r6;
    uint32_t v10c;
    uint32_t v114;
    int32_t d0, d4, d8, dc;
    int32_t sx_in, sy_in;
    uint64_t sxx, syy, sum;
    uint32_t e4, e8, sq, t, k, wa, wb;
    volatile uint16_t *sqc;
    volatile uint32_t *sp8;
    volatile uint32_t *res;
    Out *s;
    void *ret;

    A = *(uint8_t **)(p + 0xa8);
    v10c = *(uint32_t *)(p + 0x10c);
    v114 = *(uint32_t *)(p + 0x114);
    pair[0] = v10c;
    pair[1] = v114;

    ret = func_ov003_02153ed4(*(void **)(A + 0x9c), v10c, v114, &a, pair);
    r6 = (uint32_t)ret;
    if (r6 != 0) {
        s = func_ov003_02153f98(func_ov003_0214649c(A), r6);
        out->x = s->x;
        out->y = s->y;
        out->z = s->z;
        out->w = s->w;
        return;
    }

    s = func_ov003_02153f98(func_ov003_0214649c(A), 0);
    b.x = s->x;
    b.y = s->y;
    b.z = s->z;
    b.w = s->w;
    func_ov003_0214649c(A);
    n = func_ov003_02153fb8(func_ov003_0214649c(A), v10c, v114, &a, &a);
    if (n == 0) {
        out->x = b.x;
        out->y = b.y;
        out->z = b.z;
        out->w = b.w;
        return;
    }

    D = func_ov003_021540a4(func_ov003_0214649c(A), n);
    off = *(uint32_t *)(D + 0x10);
    d0 = *(int32_t *)(D + 0);
    d4 = *(int32_t *)(D + 4);
    d8 = *(int32_t *)(D + 8);
    dc = *(int32_t *)(D + 0xc);
    q = off ? D + off : 0;
    a.x = *(uint16_t *)q;
    a.y = *(uint16_t *)(q + 2);
    a.z = *(uint16_t *)(q + 4);
    a.w = *(uint32_t *)(q + 8);
    e4 = (uint32_t)d0 << 12;
    e8 = (uint32_t)d4 << 12;
    sx_in = (int32_t)v114 - (dc << 12);
    sy_in = (int32_t)v10c - (d8 << 12);

    sqc = (volatile uint16_t *)0x040002b0;
    *sqc = 1;
    sxx = func_0209a71c((uint64_t)(int64_t)(int32_t)sx_in, (uint64_t)(int64_t)(int32_t)sx_in);
    syy = func_0209a71c((uint64_t)(int64_t)(int32_t)sy_in, (uint64_t)(int64_t)(int32_t)sy_in);
    sum = (sxx + ((uint32_t)sqc >> 14)) + syy;
    sp8 = (volatile uint32_t *)((uint32_t)sqc + 8);
    sp8[0] = (uint32_t)sum;
    sp8[1] = (uint32_t)(sum >> 32);
    while (*sqc & ((uint32_t)sqc >> 11)) {
    }
    res = (volatile uint32_t *)((uint32_t)sqc + 4);
    sq = *res;

    if ((int32_t)sq <= (int32_t)e4) {
        out->x = a.x;
        out->y = a.y;
        out->z = a.z;
        out->w = a.w;
        return;
    }
    if ((int32_t)sq >= (int32_t)e8) {
        out->x = b.x;
        out->y = b.y;
        out->z = b.z;
        out->w = b.w;
        return;
    }

    t = (uint32_t)func_02081210(sq - e4, e8 - e4);
    out->x = func_ov003_0215c66c(b.x, a.x, t);
    out->y = func_ov003_0215c66c(b.y, a.y, t);
    out->z = func_ov003_0215c66c(b.z, a.z, t);
    k = ((uint32_t)res >> 14) - t;
    wa = func_020817c8((int32_t)a.w, (int32_t)k);
    wb = func_020817c8((int32_t)b.w, (int32_t)t);
    out->w = wb + wa;
}
