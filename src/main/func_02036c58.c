#include "ffc/types.h"

void func_02036c58(uint32_t *obj, uint32_t value) {
    *obj = (*obj & 0xFFFFFE3FU) | ((value << 29) >> 23);
}
