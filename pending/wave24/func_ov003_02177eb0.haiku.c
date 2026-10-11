#include "ffc/types.h"

extern void func_02056c9c(void *p, uint32_t x);
extern uint32_t data_ov003_0217bce0[];

uint32_t *func_ov003_02177eb0(uint32_t *p, uint32_t a, uint32_t b, uint32_t c, uint32_t d)
{
    func_02056c9c(p, 0);
    p[0] = (uint32_t)data_ov003_0217bce0;
    p[0x20] = a;
    p[0x21] = b;
    p[0x22] = c;
    p[0x23] = d;
    p[0x24] = 0;
    p[0x25] = 0;
    p[0x26] = 0;
    return p;
}
