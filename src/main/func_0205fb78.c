#include "ffc/types.h"

extern int func_02057be4(void *self, uint32_t size, uint32_t count, uint32_t elem);
extern uint32_t data_0209fd38[];
extern char data_020b1108[];

void *func_0205fb78(void *self, uint32_t a, uint32_t b, uint32_t c,
                    uint32_t s5, uint32_t s6, uint32_t s7, uint32_t s8)
{
    uint32_t *p = (uint32_t *)self;
    func_02057be4(self, s5, data_0209fd38[s6] * s7, 0x24);
    p[0xf] = a;
    ((void **)self)[0] = data_020b1108;
    p[0x11] = b;
    p[0x10] = s6;
    p[0x12] = c;
    p[0x13] = s8;
    return self;
}
