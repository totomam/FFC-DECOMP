#include "ffc/types.h"

extern uint32_t func_02036cd8(const void *object);
extern uint32_t func_02036cfc(const void *object);

uint32_t func_0201f184(uint32_t unused, const void *obj) {
    if (func_02036cd8(obj) == 0) {
        return 0;
    }
    if (func_02036cfc(obj) == 0) {
        return 1;
    }
    return 0;
}
