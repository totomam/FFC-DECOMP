#include "ffc/types.h"

extern int func_02078de4(void *a, uint8_t *b, int c, int d, int e, uint16_t f);
extern uint8_t *data_ov006_021bc820;

int func_ov006_021b4510(void *p0, int p1, int p2, int p3, uint16_t s0, int idx)
{
    return func_02078de4(p0, data_ov006_021bc820 + idx * 8, p1, p2, p3, s0);
}
