#include "ffc/types.h"

extern void *func_ov006_021b3f44(void *p);
extern uint32_t func_ov006_021b3888(void *a, void *b, uint32_t n);
extern uint8_t *data_ov006_021bc72c;

typedef struct {
    uint8_t *f0;
    uint8_t *f4;
    uint32_t f8;
} R;

R *func_ov006_021a65c4(void *a)
{
    uint32_t tmp;
    R *r4 = (R *)func_ov006_021b3f44(*(void **)(data_ov006_021bc72c + 0x60));
    uint32_t x = func_ov006_021b3888(a, &tmp, 4);
    uint8_t *p;

    r4->f8 = x;
    p = (uint8_t *)x + 0x20;
    r4->f0 = p + 0x10;
    r4->f4 = p + *(uint32_t *)(p + 4) + 8;
    return r4;
}
