#include "ffc/types.h"

void *func_02090380(void *dst, void *src, uint32_t n) {
    uint8_t *d = (uint8_t *)dst;
    uint8_t *s = (uint8_t *)src;
    if (n != 0) {
        do {
            *d++ = *s++;
            n--;
        } while (n != 0);
    }
    return dst;
}
