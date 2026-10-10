#include "ffc/types.h"

extern uint32_t func_02060c2c(uint32_t);
extern uint32_t func_02060ae8(uint32_t, uint32_t);

typedef struct {
    uint8_t pad[0x40];
    uint32_t field40;
} S0;

uint32_t func_0206b068(S0 *p, uint32_t x)
{
    return func_02060ae8(func_02060c2c(p->field40), x);
}
