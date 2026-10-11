#include "ffc/types.h"

extern void *func_ov002_021a4c80(void *p);
extern void func_02056bc0(void *object, void *node);
extern void *func_02056aec(void *p);

void func_ov002_021a389c(uint8_t *self)
{
    void *a = *(void **)(self + 0x80);
    func_02056bc0(self + 0x14, func_ov002_021a4c80(a));
    func_02056bc0(self + 0x14, func_02056aec(self));
}
