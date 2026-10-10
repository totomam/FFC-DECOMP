#include "ffc/types.h"

extern void func_02069404(void *object, uint32_t value);

typedef void (*VFn)(void *);

void func_ov011_021bd4d8(uint8_t *self)
{
    void *a = *(void **)(self + 0x98);
    ((VFn)(*(void ***)a)[10])(a);
    void *b = *(void **)(self + 0x9c);
    ((VFn)(*(void ***)b)[11])(b);
    func_02069404(self, 4);
}
