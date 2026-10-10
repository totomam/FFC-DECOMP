#include "ffc/types.h"

extern void *func_0204dc74(void *a, uint32_t b);

uint32_t func_0204dc94(void *a, uint32_t b) {
    uint32_t r = b;
    void *p = func_0204dc74(a, b);
    if (p != 0) {
        r = *(uint32_t *)((uint8_t *)p + 0x14);
    }
    return r;
}
