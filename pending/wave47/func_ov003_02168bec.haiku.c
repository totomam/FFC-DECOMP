#include "ffc/types.h"

extern void *func_020424e0(void *x);
extern void *func_ov003_02146494(void *x);
extern void *func_ov003_021464f4(void *x, void *y);
extern void *func_ov003_02155b40(void);
extern void func_ov003_02155b44(void *out, void *y);
extern int32_t func_020817c8(int32_t first, int32_t second);
extern int32_t func_ov003_02148b50(int32_t x, int32_t y);
extern int32_t func_02056aec(void *p);
extern int32_t func_ov003_0215b394(void *a, int32_t b, int32_t c, int32_t d, int32_t e, int32_t f, int32_t g);
extern int32_t func_ov003_0214c2c4(void *a, void *b, int32_t c, int32_t d, int32_t e, int32_t f, int32_t g);
extern void func_02056bc0(void *object, void *node);
extern int16_t data_020a1bd0[];

void func_ov003_02168bec(uint8_t *a)
{
    int32_t blk[4];
    uint8_t *r4;
    uint8_t *r6;
    int32_t bv;
    int32_t av;
    int32_t f_bv;
    int32_t f_av;
    int32_t pos[2];
    int32_t *q;
    int32_t res;
    int32_t c0;
    int32_t c2;
    int32_t res2;
    uint32_t idx;

    r4 = *(uint8_t **)((uint8_t *)func_ov003_02146494(func_020424e0(*(void **)(a + 0x80))) + 0xb0);
    if (r4 == 0) {
        return;
    }
    r6 = func_ov003_021464f4(func_020424e0(*(void **)(a + 0x80)), r4);
    if (r6 == 0) {
        return;
    }
    idx = *(uint16_t *)((uint8_t *)func_ov003_02155b40() + 0x10);
    func_ov003_02155b44(blk, r6);
    idx = idx >> 4;
    bv = data_020a1bd0[idx * 2 + 1];
    av = data_020a1bd0[idx * 2];
    f_bv = func_020817c8(bv, blk[0] + 0x1000);
    f_av = func_020817c8(av, blk[0] + 0x1000);
    q = (int32_t *)func_ov003_02155b40();
    pos[0] = q[2] + f_bv;
    pos[1] = q[3] + f_av;
    func_020424e0(*(void **)(a + 0x80));
    res = func_ov003_02148b50(pos[0], pos[1]);
    c0 = func_02056aec(a);
    c2 = func_ov003_0215b394(r6, 1, 1, 0x1000, 0, 0, 0);
    res2 = func_ov003_0214c2c4(func_020424e0(*(void **)(a + 0x80)), r6, pos[0], pos[1], res, 0x14, 0xeb);
    func_02056bc0(a + 0x14, (void *)res2);
    func_02056bc0(a + 0x14, (void *)c2);
    func_02056bc0(a + 0x14, (void *)c0);
}
