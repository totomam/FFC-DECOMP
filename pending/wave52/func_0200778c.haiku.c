#include "ffc/types.h"

extern void func_02006024(void *dst, uint32_t v, uint32_t z, uint32_t x);

void func_0200778c(uint8_t *p, uint32_t mask, uint32_t x, uint32_t flag)
{
    int i;
    if (flag != 0) {
        for (i = 0; i < 16; i++) {
            if (((uint16_t)(1u << i)) & mask) {
                func_02006024(p + 0x28 + i * 0x18, *(uint32_t *)(p + i * 0x18 + 0x34), 0, x);
            }
        }
    } else {
        for (i = 0; i < 16; i++) {
            if (((uint16_t)(1u << i)) & mask) {
                func_02006024(p + 0x28 + i * 0x18, *(uint32_t *)(p + i * 0x18 + 0x34), 0x7f, x);
            }
        }
    }
}
