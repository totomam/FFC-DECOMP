#include "ffc/types.h"

extern void *func_02069210(void *object);
extern void *func_0203b95c(void *a, void *b, uint32_t c, uint32_t d);
extern uint32_t func_02064390(void *object, uint32_t first, uint32_t second);
extern void func_02056bc0(void *object, void *node);
extern char data_ov007_021c2acc[];
extern char data_ov007_021c2894[];

void *func_ov007_0219a9f4(void *self, void *arg)
{
    func_02069210(self);
    *(void **)self = (void *)data_ov007_021c2acc;
    *(void **)((char *)self + 0x94) = func_0203b95c(*(void **)(data_ov007_021c2894 + 0x18), arg, 0, 1);
    ((void (*)(void *, uint32_t, uint32_t))((void **)(**(void ***)((char *)self + 0x94)))[14])(*(void **)((char *)self + 0x94), 1, 0);
    ((void (*)(void *, uint32_t))((void **)(**(void ***)((char *)self + 0x94)))[8])(*(void **)((char *)self + 0x94), 3);
    ((void (*)(void *))((void **)(**(void ***)((char *)self + 0x94)))[10])(*(void **)((char *)self + 0x94));
    func_02064390(*(void **)((char *)self + 0x94), 0x80, 0x60);
    func_02056bc0((char *)self + 0x48, *(void **)((char *)self + 0x94));
    return self;
}
