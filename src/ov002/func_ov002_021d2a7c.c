#include "ffc/types.h"

extern void *func_ov002_021d2860(void *self);
extern void *func_02055a2c(void *a, void *b);
extern void func_02056bc0(void *object, void *node);

int func_ov002_021d2a7c(void *self)
{
    uint8_t *p = (uint8_t *)self;
    void *n = func_ov002_021d2860(self);
    void *r = func_02055a2c((uint8_t *)*(void **)(p + 0xbc) + 0x80, n);
    func_02056bc0(p + 0x14, r);
    return 1;
}
