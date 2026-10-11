#include "ffc/types.h"

extern void func_02021338(uint32_t a);
extern void func_02021344(uint32_t a, uint32_t b);

void func_ov003_0215b1b0(uint8_t *obj, uint32_t x, uint32_t flag)
{
    uint8_t *inner = *(uint8_t **)(obj + 0xa8);
    if (inner[0xc] == 0) {
        return;
    }
    if (flag) {
        func_02021338(x);
        return;
    }
    func_02021344(x, 0);
}
