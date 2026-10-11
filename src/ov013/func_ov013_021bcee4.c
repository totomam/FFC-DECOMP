#include "ffc/types.h"

typedef struct { uint32_t a, b; } S;
extern S data_ov013_021c3f08;

void func_ov013_021bcee4(uint8_t *p) {
    if (*(uint32_t *)(p + 0x8c) == 0) {
        uint32_t v = *(uint32_t *)(p + 0xc);
        v &= ~0xffu;
        v |= 2;
        *(uint32_t *)(p + 0xc) = v;
    } else {
        S *d = &data_ov013_021c3f08; S *q = (S*)(p+0x80); *q = *d;
    }
}
