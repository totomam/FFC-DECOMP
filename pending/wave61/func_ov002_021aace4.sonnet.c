#include "ffc/types.h"
extern char data_ov002_021d52c4;
uint32_t *func_ov002_021aace4(uint32_t *p, uint32_t a, uint32_t b, uint8_t c, uint32_t d, uint8_t e)
{

    p[3] &= ~0xffu;
    p[0] = (uint32_t)&data_ov002_021d52c4;
    p[5] = a;
    p[6] = b;
    *(uint8_t*)(p + 7) = c;
    p[8] = d;
    *((uint8_t*)p + 0x24) = e;
    return p;
}
