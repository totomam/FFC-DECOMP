#include "ffc/types.h"

extern uint8_t data_020ab298[];

struct S {
    void *p0;
    uint32_t p4;
    uint32_t p8;
    uint32_t pc;
};

void func_0200e728(struct S *s)
{
    s->p8 = 0;
    s->pc = 0x100a4;
    s->p0 = data_020ab298;
}
