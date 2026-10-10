#include "ffc/types.h"

void func_02075ad0(void *s, uint32_t *a, uint32_t *b) {
    if (a) {
        *a = *(uint32_t *)((uint8_t *)s + 0x48);
    }
    if (b) {
        *b = *(uint32_t *)((uint8_t *)s + 0x4c);
    }
}
