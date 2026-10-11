#include "ffc/types.h"

extern void *func_02056aec(void *obj);
extern void func_02056bc0(void *object, void *node);

void func_020778cc(void *self)
{
    uint8_t *p = (uint8_t *)self;

    ((void (*)(void *))(*(void ***)self)[5])(self);
    **(uint32_t **)(p + 0x90) = 1;
    func_02056bc0(p + 0x14, func_02056aec(self));
}
