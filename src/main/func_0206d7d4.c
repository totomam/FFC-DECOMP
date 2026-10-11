#include "ffc/types.h"

extern void func_0206cb44(void *p, uint16_t v);

void func_0206d7d4(void *a, void *b) {
    uint16_t v = *(uint16_t *)((uint8_t *)b + 2);
    if (v != 0) {
        func_0206cb44(a, v);
        return;
    }
    *(uint32_t *)((uint8_t *)a + 0x30b0) = 2;
    *(uint8_t *)((uint8_t *)a + 0x30b4) = 1;
}
