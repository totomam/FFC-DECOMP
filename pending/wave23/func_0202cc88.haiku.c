#include "ffc/types.h"

extern void func_02023e70(uint32_t a, uint32_t b, uint32_t c);

void func_0202cc88(uint8_t *p) {
    int i;
    for (i = 0; i < 45; i++) {
        func_02023e70(*(uint32_t *)(p + 0x5d4 + i * 4), 0, 0);
    }
}
