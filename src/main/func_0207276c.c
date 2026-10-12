#include "ffc/types.h"
extern uint32_t func_ov000_0215b490(void);
extern void func_ov000_0215b37c(void);
extern void func_02056c4c(void *p);

void func_0207276c(int a, int b, int c, int d, int e, uint8_t *obj)
{
    uint32_t r;
    uint8_t *o;
    if (a != 0) return;
    o = *(uint8_t **)(&e + 1);
    r = func_ov000_0215b490();
    if (b != 0) {
        func_ov000_0215b37c();
        *(uint32_t *)(o + 0x94) = 3;
    } else if (r == *(uint32_t *)(o + 0x84)) {
        func_02056c4c(o + 0x48);
        *(uint32_t *)(o + 0x94) = 2;
    }
}
