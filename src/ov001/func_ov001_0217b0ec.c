#include "ffc/types.h"

extern void func_ov000_021653f4(void *p);

void func_ov001_0217b0ec(uint8_t *self) {
    if (*(void **)(self + 0x10) != 0) {
        func_ov000_021653f4(**(void ***)(self + 0x10));
        (*(uint32_t **)(self + 0x10))[0] = 0;
        func_ov000_021653f4(*(void **)(*(uint8_t **)(self + 0x10) + 4));
        (*(uint32_t **)(self + 0x10))[1] = 0;
        func_ov000_021653f4(*(void **)(*(uint8_t **)(self + 0x10) + 8));
        (*(uint32_t **)(self + 0x10))[2] = 0;
        func_ov000_021653f4(*(void **)(*(uint8_t **)(self + 0x10) + 0xc));
        (*(uint32_t **)(self + 0x10))[3] = 0;
        func_ov000_021653f4(*(void **)(*(uint8_t **)(self + 0x10) + 0x10));
        (*(uint32_t **)(self + 0x10))[4] = 0;
        func_ov000_021653f4(*(void **)(*(uint8_t **)(self + 0x10) + 0x14));
        (*(uint32_t **)(self + 0x10))[5] = 0;
        func_ov000_021653f4(*(void **)(*(uint8_t **)(self + 0x10) + 0xc8));
        *(uint32_t *)(*(uint8_t **)(self + 0x10) + 0xc8) = 0;
        func_ov000_021653f4(*(void **)(self + 0x10));
        *(void **)(self + 0x10) = 0;
    }
}
