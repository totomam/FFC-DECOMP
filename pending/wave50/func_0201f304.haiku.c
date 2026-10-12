#include "ffc/types.h"

extern void func_02036560(void *p, int x);
extern void func_0203654c(void *p, int x);

void func_0201f304(uint8_t *self, int idx, uint8_t *src) {
    uint8_t *dst;
    uint16_t *s;
    uint16_t *d;
    int n;

    dst = *(uint8_t **)(self + 0x58) + idx * 0x60;

    *(uint32_t *)(dst + 0x00) = *(uint32_t *)(src + 0x00);
    *(uint32_t *)(dst + 0x08) = *(uint32_t *)(src + 0x08);
    *(uint32_t *)(dst + 0x10) = *(uint32_t *)(src + 0x10);
    *(uint32_t *)(dst + 0x18) = *(uint32_t *)(src + 0x18);
    *(uint32_t *)(dst + 0x20) = *(uint32_t *)(src + 0x20);
    *(uint32_t *)(dst + 0x28) = *(uint32_t *)(src + 0x28);
    *(uint32_t *)(dst + 0x2c) = *(uint32_t *)(src + 0x2c);

    s = (uint16_t *)(src + 0x30);
    d = (uint16_t *)(dst + 0x30);
    n = 0x11;
    do {
        *d++ = *s++;
    } while (--n);

    *(uint32_t *)(dst + 0x54) = *(uint32_t *)(src + 0x54);
    *(uint32_t *)(dst + 0x58) = *(uint32_t *)(src + 0x58);
    *(uint32_t *)(dst + 0x5c) = *(uint32_t *)(src + 0x5c);

    func_02036560(*(uint8_t **)(self + 0x58) + idx * 0x60, 0);
    func_0203654c(*(uint8_t **)(self + 0x58) + idx * 0x60, idx);
}
