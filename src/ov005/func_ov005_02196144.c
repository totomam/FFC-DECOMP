#include "ffc/types.h"

extern uint32_t func_0209a76c(uint32_t a, uint32_t b);
extern void func_020055a4(uint32_t a);
extern void func_020055f0(uint32_t a, uint32_t b, uint32_t c);

void func_ov005_02196144(uint8_t *p, uint32_t x) {
    int32_t i;
    for (i = 0; i < p[0x9c]; i++) {
        if (i == 0) {
            func_0209a76c(x, 10);
            func_020055a4(*(uint32_t *)(*(uint32_t *)(p + 0x80 + i * 4) + 0x50));
        } else {
            uint64_t t = ((uint64_t (*)(uint32_t, uint32_t))func_0209a76c)(x, 10);
            func_020055f0(*(uint32_t *)(*(uint32_t *)(p + 0x80 + i * 4) + 0x50),
                          *(uint32_t *)(*(uint32_t *)(p + 0x80) + 0x50),
                          (uint32_t)(t >> 32));
        }
        x = (uint8_t)func_0209a76c(x, 10);
    }
}
