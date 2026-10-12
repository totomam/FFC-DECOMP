#include "ffc/types.h"

extern void func_02023e70(uint32_t a, uint32_t b, uint32_t c);

void func_0202bfd4(uint8_t *p) {
    uint32_t i = 0;
    uint32_t n = *(uint32_t *)(p + 0xb20);
    if (n <= i) {
        return;
    }
    do {
        func_02023e70(*(uint32_t *)(p + i * 4 + 0x19c), 0, 0);
        i++;
    } while (i < *(uint32_t *)(p + 0xb20));
}
