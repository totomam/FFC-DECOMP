#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Pair;

extern void func_020643a8(void *obj, uint32_t a, uint32_t b);
extern void func_0205f52c(uint32_t p, uint32_t a, uint32_t b, Pair *c);

void func_ov007_0219bbe0(void *obj, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3)
{
    Pair p3;
    Pair o2;
    uint32_t pad[4];
    Pair o1;
    Pair *ap = (Pair *)&a0;
    Pair args;
    uint8_t *base = (uint8_t *)obj;
    uint32_t y;

    args = *ap;
    func_020643a8(obj, args.a, args.b);
    ((void (*)(Pair *, void *))(*(void ***)obj)[7])(&o1, obj);
    y = o1.b;
    ((void (*)(Pair *, void *))(*(void ***)obj)[7])(&o2, obj);
    p3.a = o2.a + *(uint32_t *)(base + 0x84);
    p3.b = y + *(uint32_t *)(base + 0x88);
    func_0205f52c(*(uint32_t *)(*(uint8_t **)(base + 0x80) + 0x94), p3.a, p3.b, &o2);
}
