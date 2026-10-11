#include "ffc/types.h"

void func_0201b7ec(uint8_t *base, int flag) {
    int d = flag ? 1 : -1;
    uint8_t *p = base + 0xa0;
    *p = (uint8_t)(*p + (uint8_t)d);
}
