#include "ffc/types.h"

extern uint32_t func_02036d18(const void *object);
extern uint32_t func_02036ce0(const void *object);
extern uint32_t func_02036cfc(const void *object);
extern uint32_t func_02036cd8(const void *object);
extern uint32_t func_02036f1c(const void *object);

uint32_t func_0201ebd8(void *a, void *obj)
{
    uint32_t r4;
    uint32_t r5;
    uint32_t t;
    uint32_t idx;
    uint32_t *base;

    t = func_02036d18(obj);
    r4 = 1;
    if (t == 1) {
        r4 = 0;
    }
    r5 = 0;
    if (func_02036ce0(obj) == 1) {
        if (func_02036cfc(obj) == 0 && r4) {
            r5 = 1;
        } else {
            r5 = 0;
        }
    } else {
        if (func_02036ce0(obj) == 0) {
            idx = func_02036cd8(obj);
            base = *(uint32_t **)((uint8_t *)a + 0x50);
            if (func_02036f1c(base + idx) != 0 && r4) {
                r5 = 1;
            } else {
                r5 = 0;
            }
        }
    }
    return r5;
}
