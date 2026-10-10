#include "ffc/types.h"

extern void func_0207b8ac(void *p, uint16_t a, int32_t b);

void func_02007a0c(void *p, uint16_t a, int32_t b) {
    if (b < 0) {
        b = 0;
    }
    func_0207b8ac(p, a, b);
    *(uint16_t *)((uint8_t *)p + 0xa) = a;
}
