#include "ffc/types.h"

void func_02036c6c(uint32_t *obj, uint32_t value) {
    *obj = (*obj & 0xfffff1ffU) | ((value << 29) >> 20);
}
