#include "ffc/types.h"

extern int func_02006f10(uint8_t *p, int16_t a, int16_t b, int16_t c);
extern uint32_t func_0200766c(uint8_t *p);
extern void func_02007564(uint8_t *p, int a, int b);
extern void func_020066f4(uint8_t *p, int a);

int func_02006488(uint8_t *p, int a, int b, int c)
{
    int r;
    uint32_t off;
    if (p[0] == 0) {
        return 0;
    }
    off = 0x2ba4;
    r = func_02006f10(p + off, (int16_t)a, (int16_t)b, (int16_t)c);
    if (r != 0 && p[2] == 0) {
        off += 0x14;
        *(uint32_t *)(p + 4) = func_0200766c(p + off);
        func_02007564(p + off, 1, 6);
        if (p[3] != 0) {
            func_020066f4(p, 0);
            p[3] = 0;
        }
        p[2] = 1;
    }
    return r;
}
