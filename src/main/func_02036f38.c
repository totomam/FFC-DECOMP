#include "ffc/types.h"

void func_02036f38(uint32_t *obj, uint32_t value) {
    *obj = (*obj & 0xfffffbffU) | ((value << 31) >> 21);
}
