#include "ffc/types.h"

typedef struct {
    uint32_t x;
    uint32_t y;
} Pair;

void func_0201f1a8(uint8_t *a, int32_t idx, uint8_t *b) {
    uint8_t *dst;
    uint16_t *s;
    uint16_t *d;
    uint32_t n;
    dst = *(uint8_t **)(a + 0x54);
    dst = dst + idx * 0x58;
    s = (uint16_t *)(b + 4);
    d = (uint16_t *)(dst + 4);
    n = 0x15;
    do {
        *d = *s;
        s++;
        d++;
        n--;
    } while (n != 0);
    *(uint32_t *)(dst + 0x30) = *(uint32_t *)(b + 0x30);
    s = (uint16_t *)(b + 0x34);
    d = (uint16_t *)(dst + 0x34);
    n = 0x14;
    do {
        *(uint8_t *)d = *(uint8_t *)s;
        s = (uint16_t *)((uint8_t *)s + 1);
        d = (uint16_t *)((uint8_t *)d + 1);
        n--;
    } while (n != 0);
    *(Pair *)(dst + 0x48) = *(Pair *)(b + 0x48);
    *(Pair *)(dst + 0x50) = *(Pair *)(b + 0x50);
}
