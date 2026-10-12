#include "ffc/types.h"

extern uint32_t func_ov000_0215b490(void);
extern void func_ov000_0215b37c(void);
extern void func_02056c4c(void *p);

void func_0207276c(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint8_t *obj)
{
    if (a == 0) {
        uint32_t r = func_ov000_0215b490();
        if (b != 0) {
            func_ov000_0215b37c();
            *(uint32_t *)(obj + 0x94) = 3;
            return;
        }
        if (r != *(uint32_t *)(obj + 0x84)) {
            return;
        }
        func_02056c4c(obj + 0x48);
        *(uint32_t *)(obj + 0x94) = 2;
    }
}
