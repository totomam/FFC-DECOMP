#include "ffc/types.h"

void func_02081a34(uint32_t a) {
    uint32_t *p = (uint32_t *)0x04001000;
    a |= (*p & ~7u);
    *p = a;
}
