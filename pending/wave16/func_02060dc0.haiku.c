#include "ffc/types.h"

typedef struct {
    uint32_t w[4];
} S16;

typedef struct {
    uint8_t pad[0x14];
    uint32_t x;
    S16 s;
} Obj;

extern uint32_t func_02060b0c(uint32_t x, S16 s);

uint32_t func_02060dc0(Obj *a)
{
    return func_02060b0c(a->x, a->s);
}
