#include "ffc/types.h"

void func_02036c80(uint32_t *obj, uint32_t value) {
    *obj = (*obj & 0xfc000fffU) | ((value << 18) >> 6);
}
