#include "ffc/types.h"

typedef struct {
    uint8_t pad[0x28];
    uint32_t f28;
    uint32_t f2c;
    uint32_t f30;
    uint32_t f34;
} S;

extern uint32_t func_021888bd(uint32_t, uint32_t, uint32_t);

uint32_t func_02073a68(S *p)
{
    return func_021888bd(p->f28, p->f34, p->f30);
}
