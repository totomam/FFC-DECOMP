#include "ffc/types.h"

extern uint8_t data_ov003_0217ac5c[];

typedef struct S {
    void *vt;
    uint32_t p4;
    uint32_t p8;
    uint32_t pc;
    uint32_t p10;
    uint32_t p14;
    uint32_t p18;
    uint32_t p1c;
    uint32_t p20;
    uint32_t p24;
    uint32_t p28;
    uint32_t p2c;
    uint8_t p30;
} S;

void func_ov003_021675b8(S *s, uint32_t a1, uint32_t a2, uint32_t a3,
                         uint32_t b0, uint32_t b1, uint8_t b2, uint32_t b3, uint32_t b4)
{
    S *p = s;
    uint32_t pc;
    void *vt;
    p->p14 = a1;
    pc = p->pc;
    p->p20 = b0;
    pc = pc & ~0xffu;
    p->p24 = b1;
    vt = data_ov003_0217ac5c;
    p->p28 = b3;
    p->pc = pc;
    p->p2c = b4;
    p->vt = vt;
    p->p18 = a2;
    p->p1c = a3;
    p->p30 = b2;
}
