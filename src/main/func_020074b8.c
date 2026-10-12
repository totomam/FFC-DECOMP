#include "ffc/types.h"

extern int func_02007654(uint8_t *p);
extern void func_02007530(uint8_t *p, uint32_t mask, uint32_t w, int set);
extern int func_020073e4(uint8_t *p, uint32_t x, uint32_t y, uint32_t z);

int func_020074b8(uint8_t *p, uint32_t x, uint32_t y, uint32_t z, uint16_t v, uint32_t w)
{
    uint32_t old;
    uint32_t nv;

    if (func_02007654(p) != 0) {
        nv = v;
        old = ((uint16_t *)p)[0x102];
        func_02007530(p, (uint16_t)(~nv & old), w, 1);
        func_02007530(p, (uint16_t)(old & nv), w, 0);
    } else {
        if (func_020073e4(p, x, y, z) == 0) {
            return 0;
        }
        func_02007530(p, (uint16_t)~v, 0, 1);
    }
    ((uint16_t *)p)[0x102] = (uint16_t)v;
    return 1;
}
