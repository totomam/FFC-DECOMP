#include "ffc/types.h"

extern void func_0207754c(void *self, uint32_t a, uint32_t b, uint32_t c, uint8_t d);
extern uint8_t data_ov001_02194ad0[];

void *func_ov001_0218ed2c(void *self, uint32_t a, uint32_t b, uint32_t c, uint8_t d, uint8_t e)
{
    func_0207754c(self, a, b, c, d);
    *(void **)self = data_ov001_02194ad0;
    ((uint8_t *)self)[0xb4] = e;
    return self;
}
