#include "ffc/types.h"

extern uint32_t func_02007494(void *p);
extern uint32_t func_0200652c(void *p);
extern void func_020064ec(void *p, uint32_t v);
extern uint32_t func_020067f4(void *p);
extern void func_020066f4(void *p, uint32_t v);

uint32_t func_02006548(uint8_t *p)
{
    uint32_t r;

    if (p[0] == 0) {
        return 0;
    }
    r = func_02007494(p + 0x2bb8);
    if (r != 0) {
        if (p[2] != 0) {
            if (func_0200652c(p) != 0) {
                func_020064ec(p, 0);
                p[2] = 0;
            }
        }
        if (p[3] != 0) {
            if (func_020067f4(p) != 0) {
                func_020066f4(p, 0);
                p[3] = 0;
            }
        }
    }
    return r;
}
