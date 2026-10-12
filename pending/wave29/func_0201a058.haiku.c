#include "ffc/types.h"

extern void func_02053234(void *object);
extern void func_0201a1d0(void *a, void *b);

void *func_0201a058(void *self, void *arg)
{
    uint8_t *o = (uint8_t *)self;
    uint8_t *p;
    uint32_t i;

    func_02053234(self);
    *(int32_t *)(o + 0x4) = 0;
    o[0xc] = 0;
    *(int32_t *)(o + 0x10) = -1;
    *(int32_t *)(o + 0x14) = -1;
    p = o + 0x18;
    for (i = 0; i < 3; i++) {
        *(int32_t *)(p + (i << 2)) = 0;
    }
    *(void **)(o + 0x24) = self;
    func_0201a1d0(self, arg);
    return self;
}
