#include "ffc/types.h"

extern int func_0208f6b8(void *p, uint32_t a, uint32_t b);

#define U32(p, o) (*(uint32_t *)((uint8_t *)(p) + (o)))

int func_0208f758(void *s) {
    uint8_t *p = (uint8_t *)s;
    uint32_t r3;
    int r0;

    U32(p, 0x28) = 0;
    if (p[0xd] != 0) {
        return -1;
    }
    if (((U32(p, 4) << 22) >> 29) == 0) {
        return -1;
    }
    r3 = (U32(p, 8) << 29) >> 29;
    if (r3 == 1 || (((U32(p, 4) << 27) >> 29) & 1) == 0) {
        p[0xd] = 1;
        U32(p, 0x28) = 0;
        return -1;
    }
    if (r3 >= 3) {
        U32(p, 8) = (U32(p, 8) & ~7u) | ((r3 - 1) & 7);
        if (r3 == 3) {
            U32(p, 0x28) = U32(p, 0x30);
        }
        return p[0x12 + (r3 - 3)];
    }
    U32(p, 8) = (U32(p, 8) & ~7u) | 2;
    r0 = func_0208f6b8(p, 0, 0);
    if (r0 == 0 && U32(p, 0x28) != 0) {
        uint8_t *q = *(uint8_t **)(p + 0x24);
        U32(p, 0x28) -= 1;
        *(uint8_t **)(p + 0x24) = q + 1;
        return *q;
    }
    if (r0 == 1) {
        p[0xd] = 1;
    } else {
        U32(p, 8) &= ~7u;
        p[0xc] = 1;
    }
    U32(p, 0x28) = 0;
    return -1;
}
