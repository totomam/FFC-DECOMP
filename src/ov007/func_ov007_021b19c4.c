#include "ffc/types.h"

extern int func_02075ac0(void *p);
extern void func_ov007_021b12f4(void *p);
extern void func_ov007_021b1a78(void *p, uint8_t idx);
extern uint64_t func_0209a76c(uint32_t a, uint32_t b);

void func_ov007_021b19c4(uint8_t *p) {
    if (func_02075ac0(*(void **)(p + 0xb8)) != 0) {
        func_ov007_021b12f4(p);
        return;
    }
    if (*(uint16_t *)(p + 0xca) == 0) {
        int32_t i;
        for (i = 0; i < 0x3c; i++) {
            func_ov007_021b1a78(p, (uint8_t)i);
        }
    }
    {
        uint64_t r = func_0209a76c((uint32_t)(*(uint16_t *)(p + 0xca)) + 1, 0x12c);
        *(uint16_t *)(p + 0xca) = (uint16_t)(r >> 32);
    }
}
