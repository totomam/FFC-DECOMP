#include "ffc/types.h"

extern void *func_020424e0(void *p);
extern void *func_0203b720(void);
extern void *func_ov003_0214d454(void *p);
extern void func_02056bc0(void *object, void *node);
extern void func_0201cf34(void *obj, void *buf);
extern void func_0201ce70(void *obj, void *buf);
extern void *func_02056aec(void *p);
extern void *func_ov003_02152980(void *a, uint32_t b, uint32_t c, uint32_t d, uint8_t e);
extern void *data_020b93b8;

void func_ov003_021680f8(uint8_t *a)
{
    uint32_t loc[0x26];
    void *r4;
    void *r6;
    void *r7;
    void *res;
    uint32_t v;
    uint32_t t;
    uint32_t old;
    uint8_t *obj;

    r4 = func_020424e0(*(void **)(a + 0x80));
    old = *(uint32_t *)(a + 0x90);
    *(uint32_t *)(a + 0x90) = *(uint32_t *)(a + 0x90) + 1;

    switch (old) {
    case 0:
        r6 = func_0203b720();
        res = func_ov003_0214d454(r4);
        obj = a + 0x14;
        func_02056bc0(obj, res);
        func_02056bc0(obj, r6);
        return;
    case 1:
        func_0201cf34(data_020b93b8, loc);
        if ((((loc[7] << 0x19) >> 0x1e) == *(uint32_t *)(a + 0x84))) {
            t = *(uint32_t *)(a + 0xc);
            t &= ~0xffu;
            t |= 2;
            *(uint32_t *)(a + 0xc) = t;
            return;
        }
        v = (loc[7] << 0x19) >> 0x1e;
        t = loc[7];
        t = (t & ~0x60u) | ((*(uint32_t *)(a + 0x84) << 0x1e) >> 0x19);
        loc[7] = t;
        func_0201ce70(data_020b93b8, loc);
        r7 = func_02056aec(a);
        res = func_ov003_02152980(*(void **)((uint8_t *)r4 + 0x180), v,
                                  *(uint32_t *)(a + 0x84), *(uint32_t *)(a + 0x88),
                                  *(uint8_t *)(a + 0x8c));
        obj = a + 0x14;
        func_02056bc0(obj, res);
        func_02056bc0(obj, r7);
        return;
    default:
        return;
    }
}
