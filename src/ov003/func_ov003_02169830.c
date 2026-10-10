#include "ffc/types.h"

extern uint32_t func_020424e0(uint32_t x);
extern uint32_t func_ov003_021498bc(uint32_t r0, uint32_t r1);

typedef struct {
    uint8_t pad[0x14];
    uint32_t a;
    uint32_t b;
} S;

uint32_t func_ov003_02169830(S *p)
{
    return func_ov003_021498bc(func_020424e0(p->a), p->b);
}
