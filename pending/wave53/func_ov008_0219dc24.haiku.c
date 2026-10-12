#include "ffc/types.h"

extern void func_02021338(uint32_t x);
extern uint32_t func_ov008_0219e2d0(void *a, int i);
extern void func_0201c220(void *p, int n);
extern void func_0201bf94(void *p, uint32_t v, int n);
extern void func_ov008_0219dde4(void *a);
extern void func_ov008_0219e32c(void *a);
extern void func_ov008_0219de5c(void *a);
extern void func_ov005_02196f14(uint32_t p);
extern void func_ov008_0219da58(void *a);
extern void func_02056c4c(void *p);
extern void func_ov008_0219d9c4(void *a);
extern void *data_020b93b8;

#define WORD(p, off) (*(uint32_t *)((uint8_t *)(p) + (off)))

void func_ov008_0219dc24(void *a0)
{
    uint8_t *a = (uint8_t *)a0;
    int i;

    if (WORD(a, 0x110) != 1) {
        return;
    }
    func_02021338(0x116);
    for (i = 0; i < 5; i++) {
        if (a[0xec + i]) {
            a[0xec + i] = 0;
            uint32_t v = func_ov008_0219e2d0(a, i);
            if (v > WORD(a, 0x104)) {
                continue;
            }
            {
                uint32_t *pp = (uint32_t *)(a + 0x104);
                *pp = *pp - v;
            }
            func_0201c220(data_020b93b8, 3);
            func_0201bf94(data_020b93b8, ((uint32_t *)WORD(a, 0xf4))[i], 1);
        }
    }
    a[0x10c] = 0;
    func_ov008_0219dde4(a);
    func_ov008_0219e32c(a);
    func_ov008_0219de5c(a);
    WORD(a, 0x108) = 0;
    func_ov005_02196f14(WORD(a, 0xe8));
    func_ov008_0219da58(a);
    {
        uint32_t obj = WORD(a, 0xc0);
        uint32_t o;
        uint32_t vt;
        func_02056c4c((void *)(obj + 0x14));
        o = *(uint32_t *)(obj + 0x98);
        vt = *(uint32_t *)o;
        ((void (*)(uint32_t, int, int))(*(uint32_t *)(vt + 0x38)))(o, 1, 0);
    }
    func_ov008_0219d9c4(a);
}
