#include "ffc/types.h"

extern uint32_t func_020424e0(uint32_t x);
extern int func_ov003_0214dd5c(uint32_t a, uint32_t b);

void func_ov003_02165008(uint8_t *p) {
    uint32_t r = func_020424e0(*(uint32_t *)(p + 0x80));
    if (func_ov003_0214dd5c(r, *(uint32_t *)(p + 0x84)) != 0) {
        *(uint32_t *)(p + 0xc) = (*(uint32_t *)(p + 0xc) & ~0xffu) | 2u;
    }
}
