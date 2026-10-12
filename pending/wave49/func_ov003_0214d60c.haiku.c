#include "ffc/types.h"

extern uint32_t func_ov003_02153e10(void *out, uint32_t a, void *b, uint32_t c);
extern void func_ov003_0214d584(uint8_t *p, void *b, uint32_t c, uint32_t d);
extern void func_02084b2c(void *dst, int val, uint32_t n);
extern uint32_t func_0202d818(void *obj, int id, void *out);
extern uint32_t func_02081210(uint32_t off, void *t);
extern uint32_t func_0209a978(uint32_t v, uint32_t c);
extern uint32_t func_ov003_02154db8(void *obj, uint32_t s, uint32_t *out);
extern void func_ov003_0215b0c8(void *out, void *a);
extern void *func_ov003_02155b40(void *a);
extern void func_0202d6ec(void *n, uint32_t x, uint32_t y, uint32_t z);
extern void func_0202d68c(void *n, uint32_t x, uint32_t y, uint32_t z);
extern void func_0202d7dc(void *n);
extern void func_0202d75c(void *n);
extern void func_0202d794(void *n);
extern uint32_t func_0202d71c(void *n);
extern uint32_t func_ov003_0214d78c(void *n, uint32_t x, uint32_t y);
extern uint32_t func_0203b75c(uint32_t x);
extern uint32_t func_0203b688(void);
extern void func_02056bc0(uint32_t object, uint32_t node);
extern uint32_t data_ov003_0217999c[2];
extern uint32_t data_ov003_021799a4[2];

void func_ov003_0214d60c(uint8_t *p, void *a, void **b, uint32_t c, uint32_t s5, uint32_t s6, uint32_t s7)
{
    uint32_t t;
    uint32_t loc[4];
    uint32_t o58;
    uint32_t o3c;
    uint32_t r6;
    uint32_t lower;
    uint32_t idx;
    uint32_t n;
    uint32_t v;
    uint32_t w;
    int32_t m;
    uint32_t res;
    uint32_t o8;
    uint32_t oc;
    uint32_t r4;
    uint32_t r7;
    uint32_t *fld;

    func_ov003_02153e10(&t, *(uint32_t *)(p + 0x9c), b, c);
    func_ov003_0214d584(p, b, c, s6);
    func_02084b2c(loc, 0, 16);
    r6 = s5;
    if (*b != 0) {
        if (func_0202d818(*b, 7, loc) != 0 && (int32_t)loc[1] > 0) {
            r6 = (uint32_t)((int32_t)loc[1] >> 12);
        }
    }
    lower = func_02081210(r6 << 12, (void *)t) & 0xfffff000u;
    fld = (uint32_t *)(p + 0x33c);
    *fld += 0x1000;
    if ((int32_t)*fld >= (int32_t)lower) {
        lower = func_02081210(r6 << 12, (void *)t) & 0xfffff000u;
        *fld -= lower;
        *(uint32_t *)(p + 0x340) = func_0209a978(*(uint32_t *)(p + 0x340) + 1, c);
        idx = *(uint32_t *)(p + 0x340);
        n = (uint32_t)b[idx];
        if (func_ov003_02154db8(*(void **)(p + 0x9c), s7, &o58) == 0) {
            func_ov003_0215b0c8(&o3c, a);
            o58 = o3c;
        }
        {
            uint8_t *v1 = func_ov003_02155b40(a);
            uint8_t *v2 = func_ov003_02155b40(a);
            func_0202d6ec((void *)n, *(uint32_t *)(v1 + 8), o58, *(uint32_t *)(v2 + 0xc));
        }
        {
            uint8_t *q = func_ov003_02155b40(a);
            w = (uint16_t)(0x4000 - *(uint16_t *)(q + 0x10));
            m = (int32_t)(w * 0x168u);
            res = (uint32_t)((m + (int32_t)((uint32_t)(m >> 3) >> 28)) >> 4);
        }
        func_0202d68c((void *)n, 0, res, 0);
        func_0202d7dc((void *)n);
        func_0202d75c((void *)n);
        func_0202d794((void *)n);
        if (r6 == 0) {
            r6 = s5;
        }
        o8 = func_ov003_0214d78c((void *)n, data_ov003_0217999c[0], data_ov003_0217999c[1]);
        oc = func_0203b75c(1);
        r7 = func_ov003_0214d78c((void *)n, data_ov003_021799a4[0], data_ov003_021799a4[1]);
        r4 = func_0203b75c(r6);
        r6 = func_0203b688();
        func_02056bc0(r6, r4);
        func_02056bc0(r6, r7);
        func_02056bc0(r6, oc);
        func_02056bc0(r6, o8);
        func_02056bc0(r6, *(uint32_t *)(p + 0x334));
    }
}
