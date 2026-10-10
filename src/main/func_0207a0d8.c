#include "ffc/types.h"

extern void func_020797bc(uint32_t a);

void func_0207a0d8(uint32_t self) {
    uint8_t *s = (uint8_t *)self;
    uint32_t v = *(uint32_t *)(s + 0x4c);
    if (v) {
        func_020797bc(v);
        *(uint32_t *)(s + 0x4c) = 0;
        *(uint32_t *)(s + 0x50) = 0;
    }
}
