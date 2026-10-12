#include "ffc/types.h"

typedef struct { uint32_t x; uint32_t y; } Pair;

extern void func_02056c9c(void *p, uint32_t v);
extern uint32_t func_0203b9cc(Pair p, uint32_t v, int flag);
extern void func_0206133c(void *object);
extern char data_ov005_02199068[];

void *func_ov005_0219704c(void *self, Pair p, void *d)
{
    Pair s;
    void *obj;

    func_02056c9c(self, 0);
    *(void **)self = data_ov005_02199068;
    *(void **)((uint8_t *)self + 0x80) = d;
    s.x = 0x100;
    s.y = 0x20;
    obj = (void *)((uint32_t (*)(void *))(*(void ***)d)[8])(d);
    *(uint32_t *)((uint8_t *)self + 0x84) = func_0203b9cc(s, (uint32_t)obj, 1);
    func_0206133c(*(void **)((uint8_t *)self + 0x80));
    obj = *(void **)((uint8_t *)self + 0x84);
    ((void (*)(void *, Pair))(*(void ***)obj)[3])(obj, p);
    obj = *(void **)((uint8_t *)self + 0x84);
    ((void (*)(void *, uint32_t))(*(void ***)obj)[8])(obj, 3);
    return self;
}
