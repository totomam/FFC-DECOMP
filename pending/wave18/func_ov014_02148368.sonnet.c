#include "ffc/types.h"

extern uint8_t data_ov014_02155acc[];
extern void func_ov014_021483c0(void *self);

typedef struct { void *vt; int32_t a, b, c; uint8_t d; } S;

void *func_ov014_02148368(void *p, int32_t a1, int32_t a2, int32_t a3)
{
    int32_t *w = (int32_t *)p;
    int32_t z = 0;
    w[0] = (int32_t)data_ov014_02155acc;
    w[1] = z;
    w[2] = z;
    w[3] = z - 2;
    w[6] = a2;
    *((uint8_t *)p + 0x14) = z;
    w[0x47] = a3;
    func_ov014_021483c0(p);
    return p;
}
