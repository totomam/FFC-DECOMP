#include "ffc/types.h"

extern void func_02056c9c(void *p, int x);
extern uint8_t data_ov012_021d44f0[];

void *func_ov012_021d2654(void *self, uint32_t a, uint8_t b, uint8_t c, uint8_t d)
{
    uint8_t *p = (uint8_t *)self;
    func_02056c9c(self, 0);
    *(void **)p = data_ov012_021d44f0;
    *(uint32_t *)(p + 0x80) = a;
    *(uint8_t *)(p + 0x84) = b;
    *(uint8_t *)(p + 0x85) = c;
    *(uint8_t *)(p + 0x86) = d;
    return self;
}
