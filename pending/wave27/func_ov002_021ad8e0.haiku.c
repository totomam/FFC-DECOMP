#include "ffc/types.h"

extern void func_02005988(void *obj, uint32_t a);
extern void func_02063c28(void *self, void *obj, uint32_t b, int32_t c, int32_t d);
extern void *func_020059cc(void *object);
extern char data_ov002_021d5734;

void *func_ov002_021ad8e0(void *self, uint32_t a, uint32_t b, uint32_t c)
{
    uint32_t local[3];
    uint8_t *p = (uint8_t *)self;

    func_02005988(local, a);
    func_02063c28(self, local, b, 3, 1);
    func_020059cc(local);
    *(uint32_t *)p = (uint32_t)&data_ov002_021d5734;
    *(uint32_t *)(p + 0x80) = c;
    *(uint32_t *)(p + 0x84) = 0;
    *(uint32_t *)(p + 0x88) = 0;
    *(uint16_t *)(p + 0x8c) = 0;
    *(uint32_t *)(p + 0x90) = b;
    return self;
}
