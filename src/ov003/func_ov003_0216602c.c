#include "ffc/types.h"

extern void func_02056c9c(uint32_t *p, uint32_t x);
extern char data_ov003_0217a9bc[];

uint32_t *func_ov003_0216602c(uint32_t *p, uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint8_t e, uint32_t f)
{
    func_02056c9c(p, 0);
    p[0] = (uint32_t)data_ov003_0217a9bc;
    p[32] = a;
    p[33] = b;
    p[34] = c;
    p[35] = d;
    *((uint8_t *)p + 0x90) = e;
    p[37] = f;
    p[38] = 0;
    return p;
}
