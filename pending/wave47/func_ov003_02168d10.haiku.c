#include "ffc/types.h"

extern uint32_t func_020424e0(uint32_t x);
extern uint8_t *func_ov003_02146494(void);
extern uint8_t *func_ov003_021464f4(uint32_t h, uint8_t *b);
extern uint8_t *func_ov003_02155b40(uint8_t *a);
extern void func_ov003_02155b44(int32_t *out, uint8_t *a);
extern int16_t data_020a1bd0[];
extern int32_t func_020817c8(int32_t first, int32_t second);
extern int32_t func_02056aec(uint8_t *self);
extern int32_t func_ov003_0215b394(uint8_t *a, int32_t b, int32_t c, int32_t d, int32_t e, int32_t f, int32_t g);
extern int32_t func_ov003_0214c720(uint32_t h, uint8_t *b, int32_t x, int32_t y, uint8_t z, int32_t w, int32_t v);
extern void func_02056bc0(uint8_t *object, int32_t node);

void func_ov003_02168d10(uint8_t *self)
{
    uint8_t *r5;
    uint8_t *r6;
    uint8_t *p;
    int32_t base;
    int32_t a, b;
    int32_t idx;
    int32_t v7, v7c, sum84, sum88;
    int32_t c;
    int32_t v7b;
    int32_t node;
    uint16_t lvl;

    func_020424e0(*(uint32_t *)(self + 0x80));
    r5 = *(uint8_t **)(func_ov003_02146494() + 0xb0);
    if (r5 == 0) {
        return;
    }
    r6 = func_ov003_021464f4(func_020424e0(*(uint32_t *)(self + 0x80)), r5);
    if (r6 == 0) {
        return;
    }
    lvl = *(uint16_t *)(func_ov003_02155b40(r6) + 0x10);
    func_ov003_02155b44(&base, r6);
    idx = ((int32_t)lvl) >> 4;
    b = data_020a1bd0[idx * 2 + 1];
    a = data_020a1bd0[idx * 2];
    v7 = func_020817c8(a, base + 0x1000);
    v7c = func_020817c8(b, base + 0x1000);
    p = func_ov003_02155b40(r6);
    sum88 = v7 + *(int32_t *)(p + 0xc);
    sum84 = *(int32_t *)(p + 8) + v7c;
    c = self[0x84] ? 0x16 : 0x15;
    node = func_02056aec(self);
    v7b = func_ov003_0215b394(r6, 1, 1, 0x1000, 0, 0, 0);
    func_ov003_0214c720(func_020424e0(*(uint32_t *)(self + 0x80)), r6, sum84, sum88, self[0x84], c, 0xee);
    func_02056bc0(self + 0x14, node);
    func_02056bc0(self + 0x14, v7b);
    func_02056bc0(self + 0x14, v7);
}
