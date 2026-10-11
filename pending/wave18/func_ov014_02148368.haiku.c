#include "ffc/types.h"

extern uint8_t data_ov014_02155acc[];
extern void func_ov014_021483c0(void *self);

void *func_ov014_02148368(void *p, int32_t a1, int32_t a2, int32_t a3)
{
    volatile uint32_t *w = (volatile uint32_t *)p;
    volatile uint8_t *b = (volatile uint8_t *)p;
    uint32_t z = 0;
    w[0] = (uint32_t)data_ov014_02155acc;
    w[6] = (uint32_t)a2;
    w[1] = z;
    w[2] = z;
    w[3] = z - 2;
    b[0x14] = 0;
    w[0x47] = (uint32_t)a3;
    func_ov014_021483c0(p);
    return p;
}
