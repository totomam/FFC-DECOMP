#include "ffc/types.h"

extern void func_02056c9c(void *o, uint32_t x);
extern void *data_020b93b8;
extern void func_0201f960(void *a, uint32_t b, void *c);
extern void func_ov003_0215ac70(void *a, uint32_t *b, uint32_t *c);
extern uint32_t func_02091b10(void *o, uint32_t first, ...);
extern void *func_0203b8bc(void *x);
extern void func_0202afc0(void *o, void *a, uint32_t b, uint32_t c, uint32_t d);
extern void func_02056bc0(void *o, void *n);
extern uint32_t func_ov003_02148ae4(uint32_t x);
extern uint32_t data_020a7d38;
extern void func_0202b240(void *o, void *p);
extern void func_0202b24c(void *o, void *p);
extern char data_ov003_021799d8[];
extern char data_ov003_021799f8[];
extern char data_ov003_021799e8[];
extern char data_ov003_02179a0c[];

void *func_ov003_0214ed00(void *obj, uint32_t p1, uint32_t p2, uint32_t p3)
{
    uint8_t *o = (uint8_t *)obj;
    uint32_t sb;
    uint32_t sa;
    uint32_t outc;
    uint8_t bufA[0x18];
    uint8_t str2[0x20];
    uint8_t str1[0x44];
    uint32_t l18, l1c;
    uint32_t r4;
    void *m;

    func_02056c9c(obj, 0);
    *(void **)(o + 0) = data_ov003_021799d8;
    *(uint32_t *)(o + 0x80) = p1;
    *(uint32_t *)(o + 0x84) = p2;
    *(uint32_t *)(o + 0x88) = p3;
    func_0201f960(data_020b93b8, p3, &outc);
    sa = 0;
    sb = 0;
    func_ov003_0215ac70(bufA, &sa, &sb);
    if (sa == 0) {
        sa = 10;
    }
    func_02091b10(str1 + 1, (uint32_t)data_ov003_021799e8, (uint32_t)data_ov003_021799f8);
    if (sb != 0) {
        func_02091b10(str2, (uint32_t)data_ov003_02179a0c, (uint32_t)data_ov003_021799f8, sa, sb);
        r4 = (uint32_t)str2;
    } else {
        r4 = 0;
    }
    *(void **)(o + 0x8c) = func_0203b8bc(*(void **)(o + 0x84));
    *(uint32_t *)((uint8_t *)*(void **)(o + 0x8c) + 0x2c) = 0x23;
    *(uint32_t *)((uint8_t *)*(void **)(o + 0x8c) + 0x18) = 0;
    *(uint32_t *)((uint8_t *)*(void **)(o + 0x8c) + 0x1c) = 0x40000000;
    func_0202afc0(*(void **)(o + 0x8c), str1 + 1, 0, 0, r4);
    {
        uint32_t *mm = (uint32_t *)*(void **)(o + 0x8c);
        mm[3] = mm[3] & ~0xffu;
        mm[8] = 0;
        *((uint8_t *)mm + 0x41) = 1;
    }
    func_02056bc0(o + 0x48, *(void **)(o + 0x8c));
    *(uint32_t *)(o + 0x90) = l18;
    *(uint32_t *)(o + 0x98) = l1c;
    *(uint32_t *)(o + 0x94) = data_020a7d38 + func_ov003_02148ae4(*(uint32_t *)(o + 0x80));
    func_0202b240(*(void **)(o + 0x8c), o + 0x90);
    *(uint32_t *)(o + 0xa4) = 0;
    *(uint32_t *)(o + 0xa0) = 0;
    *(uint32_t *)(o + 0x9c) = 0;
    func_0202b24c(*(void **)(o + 0x8c), o + 0x9c);
    return obj;
}
