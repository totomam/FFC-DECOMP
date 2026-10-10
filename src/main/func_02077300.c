#include "ffc/types.h"

void func_02077300(uint8_t *p, uint32_t v) {
    uint32_t *q = *(uint32_t **)(p + 0x9c);
    if (q) {
        *q = v;
    }
}
