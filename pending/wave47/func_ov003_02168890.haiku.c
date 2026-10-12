#include "ffc/types.h"

extern uint32_t func_020424e0(uint32_t a);
extern uint32_t func_ov003_02146494(void);
extern uint32_t func_ov003_021464f4(uint32_t a, uint32_t b);
extern uint32_t *func_ov003_02155b40(uint32_t a);
extern void func_ov003_02155b44(uint32_t *out, uint32_t a);
extern int32_t func_020817c8(int32_t first, int32_t second);
extern uint32_t func_ov003_02149964(uint32_t a, uint32_t b);
extern void *func_0205681c(uint32_t size);
extern void func_0203919c(uint32_t *out, uint32_t a);
extern uint32_t func_02032d24(void *a, uint32_t b, uint32_t c, uint32_t *d, uint32_t e, uint32_t f);
extern void *func_020059cc(void *object);
extern int16_t data_020a1bd0[];

void func_ov003_02168890(uint8_t *self)
{
    uint32_t pair54[2];
    uint32_t out[4];
    int32_t tmp[6];
    uint32_t obj[3];
    uint32_t *q;
    uint32_t *r4;
    uint32_t h, base, r6, sv;
    int32_t a;
    uint16_t x;
    uint32_t *alloc;
    int flag = 0;

    func_020424e0(*(uint32_t *)(self + 0x80));
    r4 = (uint32_t *)(func_ov003_02146494() + 0xb0);
    h = func_020424e0(*(uint32_t *)(self + 0x80));
    sv = func_ov003_021464f4(h, *r4);
    *(uint32_t *)(self + 0x98) = sv;
    q = func_ov003_02155b40(sv);
    *(uint16_t *)(self + 0x9c) = *(uint16_t *)((uint8_t *)q + 0x10);

    func_ov003_02155b44(out, *(uint32_t *)(self + 0x98));
    x = *(uint16_t *)(self + 0x9c);
    a = (int32_t)x >> 4;
    tmp[1] = data_020a1bd0[2 * a + 1];
    tmp[0] = data_020a1bd0[2 * a];
    base = out[0];
    tmp[2] = func_020817c8(tmp[0], base + 0x1000);
    tmp[3] = func_020817c8(tmp[1], base + 0x1000);
    r6 = tmp[2];

    q = func_ov003_02155b40(*(uint32_t *)(self + 0x98));
    tmp[4] = q[2] + tmp[3];
    tmp[5] = q[3] + r6;
    func_020424e0(*(uint32_t *)(self + 0x80));
    *(uint32_t *)(self + 0xa4) = func_ov003_02149964(tmp[4], tmp[5]);

    alloc = func_0205681c(0xb0);
    r6 = (uint32_t)alloc;
    if (alloc != 0) {
        func_0203919c(obj, *(uint32_t *)(self + 0x84));
        pair54[0] = 0x80;
        pair54[1] = 0x60;
        r6 = func_02032d24(alloc, pair54[0], pair54[1], obj, 4, 0);
        flag = 1;
    }
    *(uint32_t *)(self + 0xa0) = r6;
    if (flag) {
        func_020059cc(obj);
    }
}
