#include "ffc/types.h"

extern uint8_t data_020ac7d8[];

struct S {
    void *p0;
    uint32_t p4;
    uint32_t p8;
    uint32_t pc;
};

void func_0200f808(struct S *s)
{
    s->p8 = 0;
    s->pc = 0x100a8;
    s->p0 = data_020ac7d8;
}
