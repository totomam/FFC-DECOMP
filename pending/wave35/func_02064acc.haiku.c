#include "ffc/types.h"

extern uint32_t func_02064ab4(uint8_t *p);
extern void func_02064978(uint8_t *p);
extern void func_02064b44(uint8_t *p, uint32_t v);

void func_02064acc(uint8_t *p, uint32_t r1, uint32_t r2)
{
    uint32_t r4;

    if (*(uint32_t *)(p + 0x40) == r1 && !(r2 & 1)) {
        if (!(r2 & 4)) {
            return;
        }
        if (p[0x2c] != 0) {
            return;
        }
    }
    *(uint32_t *)(p + 0x40) = r1;
    *(uint32_t *)(p + 0x78) = func_02064ab4(p);
    p[0x2c] = 1;
    if (r2 & 2) {
        r4 = *(uint32_t *)(p + 0x48);
    } else {
        r4 = 0;
    }
    func_02064978(p);
    func_02064b44(p, r4);
}
