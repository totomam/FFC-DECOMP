#include "ffc/types.h"

extern void func_0209d02c(void *base, int count, int size, void *(*ctor)(void *object));
extern void func_020367a8(void *p);
extern void func_02056844(void *p);
extern void *func_02035fd0(void *object);

void *func_02014170(void *self)
{
    func_0209d02c((uint8_t *)self + 0x104, 5, 0x60, func_02035fd0);
    func_020367a8((uint8_t *)self + 0xac);
    func_02056844(self);
    return self;
}
