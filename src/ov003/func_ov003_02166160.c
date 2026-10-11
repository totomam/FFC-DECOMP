#include "ffc/types.h"

extern void func_02056c9c(void *p, int x);
extern int data_ov003_0217a9d4[];

void *func_ov003_02166160(uint8_t *self, uint32_t a, uint32_t b, uint32_t c,
                          uint32_t d, uint32_t e, uint8_t f)
{
    func_02056c9c(self, 0);
    *(int **)self = data_ov003_0217a9d4;
    *(uint32_t *)(self + 0x80) = a;
    *(uint32_t *)(self + 0x84) = b;
    *(uint32_t *)(self + 0x88) = c;
    *(uint32_t *)(self + 0x8c) = d;
    *(uint32_t *)(self + 0x90) = 0;
    *(uint32_t *)(self + 0x98) = e;
    *(uint8_t *)(self + 0x9c) = f;
    return self;
}
