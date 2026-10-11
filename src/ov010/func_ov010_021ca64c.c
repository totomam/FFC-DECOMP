#include "ffc/types.h"

extern void func_ov010_021ca934(void *p, int x);
extern void func_ov010_021ca694(void *p);
extern void func_ov009_0219a330(void *x);

void func_ov010_021ca64c(uint8_t *p) {
    uint32_t s = *(uint32_t *)(p + 0x2c4);
    switch (s) {
    case 0xb: {
        uint32_t v = p[0x279];
        uint8_t *q = *(uint8_t **)(p + 0x2c8);
        *(uint32_t *)(q + 4) = v;
        func_ov010_021ca934(p, 1);
        break;
    }
    case 0xc:
        func_ov010_021ca694(p);
        break;
    case (uint32_t)-2: {
        uint32_t i = p[0x279];
        func_ov009_0219a330(*(void **)(p + 0xd8 + (i << 2)));
        break;
    }
    default:
        break;
    }
}
