#include "ffc/types.h"

extern uint32_t func_ov004_0214f740(uint8_t *a);
extern uint32_t func_ov004_0214ea04(uint8_t *a, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4);
extern void func_01fff0f4(uint32_t *out, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5);
extern uint32_t func_020817c8(uint32_t first, uint32_t second);
extern uint32_t func_02081210(uint32_t first, uint32_t second);
extern uint32_t func_01ffcd9c(uint32_t p, uint32_t idx, uint32_t f);
extern uint32_t func_01fff09c(uint32_t p, uint32_t x, uint32_t y);
extern void func_01ffb318(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
extern void func_ov004_0214f780(uint8_t *a);

uint32_t func_ov004_0214ef54(uint32_t *out, uint8_t *a, uint32_t idx, uint32_t *arr4, uint32_t *arr5,
                              uint32_t p6, uint32_t p7, uint32_t p8, uint32_t p9, uint32_t p10, uint32_t p11)
{
    uint32_t flag, r6, tmp, v, r4, i, off;
    uint8_t *base, *e;
    int32_t s;

    off = idx << 2;
    flag = (idx != func_ov004_0214f740(a)) ? 1 : 0;
    r6 = func_ov004_0214ea04(a, p6, p7, p8, 1);

    tmp = 0;
    func_01fff0f4(&tmp, arr4[idx], p7, p8, p9, flag);
    v = tmp;
    if (tmp != p9) {
        s = (int32_t)tmp - (int32_t)p11;
        v = (s > 0) ? (uint32_t)s : 0;
    }

    if (flag == 0) {
        r4 = func_020817c8(v, p10);
    } else {
        r4 = func_02081210(v, p10);
    }

    tmp = 0;
    func_01fff0f4(&tmp, arr5[idx], p7, p8, r4, flag);
    v = tmp;
    if (tmp != r4) {
        s = (int32_t)tmp;
        v = (s > 0) ? tmp : 0;
    }

    if (r6 != func_ov004_0214ea04(a, p6, p7, p8, 1)) {
        for (i = 0; i < *(uint32_t *)(a + 0x110); i++) {
            uint32_t hit = 0;
            base = *(uint8_t **)(a + 0x10c);
            e = base + i * 0x38;
            if (e[0x34] == 0) {
                if (*(uint32_t *)(e + 0x10) == p7 && *(uint32_t *)(e + 0x14) == p8) {
                    hit = 1;
                }
            }
            if (hit) {
                e[0x35] = 0;
                e[0x34] = 1;
                {
                    void *obj = *(void **)(e + 0x18);
                    void **vt = *(void ***)obj;
                    ((void (*)(void *))vt[11])(obj);
                }
            }
        }
    }

    if (*(uint32_t *)(a + 0x94) != 0) {
        r4 = func_01ffcd9c(*(uint32_t *)(a + 0x94), idx, 0);
        tmp = func_01fff09c(*(uint32_t *)(a + 0x98 + off), p7, p8);
        func_01ffb318(r4, p7, p8, tmp, flag);
        if (*(uint32_t *)(a + 0xdc) == 1) {
            r4 = func_01ffcd9c(*(uint32_t *)(a + 0x94), idx, 1);
            tmp = func_01fff09c(*(uint32_t *)(a + 0xa0 + off), p7, p8);
            func_01ffb318(r4, p7, p8, tmp, flag);
        }
    }

    func_ov004_0214f780(a);
    *out = v;
    return 0;
}
