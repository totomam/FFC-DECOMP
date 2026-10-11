#include "ffc/types.h"

extern uint8_t data_ov003_0217b10c[];

typedef struct {
    void *vtbl;      /* 0x00 */
    uint32_t f04;
    uint32_t f08;
    uint32_t f0c;
    uint32_t f10;
    uint32_t f14;
    uint32_t f18;
    uint32_t f1c;
    uint32_t f20;
    uint32_t f24;
    uint32_t f28;
    uint32_t f2c;
    uint32_t f30;
    uint32_t f34;
} S;

void func_ov003_02165804(S *p, uint32_t a1, uint32_t a2, uint32_t a3,
                         uint32_t a4, uint32_t a5, uint32_t a6,
                         uint32_t a7, uint32_t a8, uint32_t a9)
{
    uint32_t mask = 0xff;
    uint32_t v = p->f0c & ~mask;
    p->f14 = a1;
    p->f20 = a4;
    p->f28 = a6;
    p->f2c = a7;
    p->f30 = a8;
    p->f34 = a9;
    p->f0c = v;
    p->vtbl = data_ov003_0217b10c;
    p->f18 = a2;
    p->f1c = a3;
    p->f24 = a5;
}
