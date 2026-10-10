#include "ffc/types.h"

extern void func_0209935c(uint32_t v);

void *func_020970c0(uint8_t *p) {
    uint8_t buf[0x18];
    uint32_t v = *(uint32_t *)(p + 4);
    if (v != 0) {
        func_0209935c(v);
    }
    return p;
}
