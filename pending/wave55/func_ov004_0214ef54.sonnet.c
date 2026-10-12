/* cflags: -lang c++ */
#include "ffc/types.h"
struct S { uint32_t a, b; S(const S &o) : a(o.a), b(o.b) {} };
extern "C" {
extern uint32_t func_ov004_0214f740(uint8_t *a);
extern uint32_t func_ov004_0214ea04(uint8_t *a, uint32_t p1, S s, uint32_t p4);
extern void func_01fff0f4(uint32_t *out, uint32_t p1, S s, uint32_t p4, uint32_t p5);
extern uint32_t func_020817c8(int32_t first, int32_t second);
extern uint32_t func_02081210(int32_t first, int32_t second);
extern uint32_t func_01ffcd9c(uint32_t p, uint32_t idx, uint32_t f);
extern uint32_t func_01fff09c(uint32_t p, uint32_t x, uint32_t y);
extern void func_01ffb318(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
extern void func_ov004_0214f780(uint8_t *a);
void func_ov004_0214ef54(uint32_t *out, uint8_t *a, uint32_t idx, uint32_t *arr4, uint32_t *arr5,
    uint32_t p6, S sv, int32_t p9, int32_t p10, int32_t p11);
}
static inline bool eq(S x, S y) { return x.a == y.a && x.b == y.b; }
static inline const int32_t &mx(const int32_t &x, const int32_t &y) { return x < y ? y : x; }

void func_ov004_0214ef54(uint32_t *out, uint8_t *a, uint32_t idx, uint32_t *arr4, uint32_t *arr5,
    uint32_t p6, S sv, int32_t p9, int32_t p10, int32_t p11)
{
    uint32_t flag, r6, r4, i, off;
    int32_t t, v;
    flag = (idx == func_ov004_0214f740(a)) ? 0 : 1;
    r6 = func_ov004_0214ea04(a, p6, sv, 1);
    off = idx << 2;
    func_01fff0f4((uint32_t *)&t, arr4[idx], sv, p9, flag);
    v = t;
    if (t != p9) { int32_t d = t - p11; int32_t z = 0; v = mx(z, d); }
    if (flag == 0) r4 = func_020817c8(v, p10);
    else r4 = func_02081210(v, p10);
    func_01fff0f4((uint32_t *)&t, arr5[idx], sv, r4, flag);
    v = t;
    if (t != (int32_t)r4) { int32_t z = 0; v = mx(z, v); }
    if (r6 != func_ov004_0214ea04(a, p6, sv, 1)) {
        for (i = 0; i < *(uint32_t *)(a + 0x110); i++) {
            uint8_t *e = *(uint8_t **)(a + 0x10c) + i * 0x38;
            uint32_t hit = 0;
            if (e[0x34] == 0) {
                if (eq(*(S *)(e + 0x10), sv)) hit = 1;
            }
            if (hit) {
                e[0x35] = 0;
                (*(uint8_t **)(a + 0x10c) + i * 0x38)[0x34] = 1;
                void *obj = *(void **)(*(uint8_t **)(a + 0x10c) + i * 0x38 + 0x18);
                ((void (*)(void *))(*(void ***)obj)[11])(obj);
            }
        }
    }
    if (*(uint32_t *)(a + 0x94) != 0) {
        r4 = func_01ffcd9c(*(uint32_t *)(a + 0x94), idx, 0);
        r6 = func_01fff09c(*(uint32_t *)(a + 0x98 + off), sv.a, sv.b);
        func_01ffb318(r4, sv.a, sv.b, r6, flag);
        if (*(uint32_t *)(a + 0xdc) == 1) {
            r4 = func_01ffcd9c(*(uint32_t *)(a + 0x94), idx, 1);
            r6 = func_01fff09c(*(uint32_t *)(a + 0xa0 + off), sv.a, sv.b);
            func_01ffb318(r4, sv.a, sv.b, r6, flag);
        }
    }
    func_ov004_0214f780(a);
    *out = v;
}
