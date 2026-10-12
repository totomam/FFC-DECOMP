#include "ffc/types.h"

typedef struct { uint32_t a, b; } Pair;

extern void func_02061370(void *a, void *b);
extern void *func_02061374(void *a);
extern void func_0200a5dc(void *a, void *b);
extern void func_02065fe0(void *a, void *b, Pair p, uint32_t e, void *f);
extern void *func_0200a678(void *object);

void func_ov005_02197140(uint8_t *self, void *a1)
{
    Pair p;
    uint32_t loc[3];
    void *r;
    void **vt;

    func_02061370(*(void **)(self + 0x80), a1);
    r = func_02061374(*(void **)(self + 0x80));
    vt = *(void ***)*(void **)(self + 0x80);
    ((void (*)(void *, void *))vt[6])(*(void **)(self + 0x80), r);
    vt = *(void ***)*(void **)(self + 0x80);
    ((void (*)(void *, uint32_t))vt[5])(*(void **)(self + 0x80), 0xffffffffu);
    vt = *(void ***)*(void **)(self + 0x84);
    ((void (*)(void *))vt[15])(*(void **)(self + 0x84));
    func_0200a5dc(loc, a1);
    p.a = 0;
    p.b = 0;
    func_02065fe0(*(void **)(self + 0x84), *(void **)(self + 0x80), p, 0, loc);
    func_0200a678(loc);
}
