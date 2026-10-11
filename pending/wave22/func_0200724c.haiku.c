#include "ffc/types.h"

extern void func_02007278(void);

void func_0200724c(uint8_t *p, int i) {
    if (i > 1 && i < 0x12) {
        uint32_t a = *(uint32_t *)(p + i * 0x14 + 0x20);
        uint32_t b = *(uint32_t *)(p + i * 0x14 + 0x24);
        *(uint32_t *)(p + a * 0x14 + 0x24) = b;
        *(uint32_t *)(p + b * 0x14 + 0x20) = a;
        func_02007278();
    }
}
