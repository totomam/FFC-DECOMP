#include "ffc/types.h"

extern uint32_t data_020b10c4;
extern uint32_t data_0213df20;
extern void func_0205f654(uint32_t *p, uint32_t a);

uint32_t *func_0205f574(uint32_t *p, uint32_t r1, uint32_t r2, uint32_t r3)
{
    p[3] = p[3] & ~0xffu;
    p[0] = (uint32_t)&data_020b10c4;
    p[5] = data_0213df20;
    p[6] = r1;
    if (r2 == 0) {
        r2 = r1;
    }
    *((uint8_t *)p + 0x3c) = 0;
    p[18] = 0x100;
    p[19] = 0xc0;
    p[8] = 0;
    p[13] = 0;
    p[14] = 0;
    p[16] = 0;
    p[17] = 0;
    p[7] = r2;
    func_0205f654(p, r3);
    return p;
}
