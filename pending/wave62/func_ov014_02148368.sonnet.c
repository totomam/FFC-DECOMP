#include "ffc/types.h"
extern uint32_t data_ov014_02155acc;
extern void func_ov014_021483c0(void *p);
void *func_ov014_02148368(uint32_t *p, uint32_t a, uint32_t b, uint32_t c)
{
    p[0] = (uint32_t)&data_ov014_02155acc;
    p[1] = 0;
    p[2] = 0;
    p[3] = -2;
    *(uint8_t *)(p + 5) = 0;
    p[6] = b;
    p[0x47] = c;
    func_ov014_021483c0(p);
    return p;
}
