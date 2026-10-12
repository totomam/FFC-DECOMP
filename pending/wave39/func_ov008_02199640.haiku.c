#include "ffc/types.h"

extern void func_020694ac(void *p, uint32_t a, uint32_t b);
extern uint32_t data_ov008_021a7908[];

void *func_ov008_02199640(void *p)
{
    uint8_t *b = (uint8_t *)p;
    uint32_t *q;
    uint32_t *r;
    uint8_t i;

    func_020694ac(p, 0, 0);
    *(uint32_t **)b = data_ov008_021a7908;
    q = (uint32_t *)(b + 0xcc);
    q[0] = 0;
    r = (uint32_t *)(b + 0xf0);
    q[1] = 0;
    q[2] = 0;
    q = (uint32_t *)(b + 0xf0);
    q[1] = 0;
    q[2] = 0;
    r[0] = 0;
    b[0x140] = 0;
    b[0x141] = 0;
    b[0x142] = 0;
    b[0x143] = 0xff;
    b[0x144] = 0;
    for (i = 0; i < 0x40; i++) {
        b[0x100 + i] = 0;
    }
    return p;
}
