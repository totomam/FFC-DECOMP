#include "ffc/types.h"

extern void *func_ov002_021d2860(void *self);
extern void *func_02055a2c(void *obj, void *arg);
extern void func_02056bc0(void *object, void *node);

int func_ov002_021d2a7c(uint8_t *p)
{
    void *a = func_ov002_021d2860(p);
    void *b = func_02055a2c(*(uint8_t **)(p + 0xbc) + 0x80, a);
    func_02056bc0(p + 0x14, b);
    return 1;
}
