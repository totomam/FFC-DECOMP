#include "ffc/types.h"

typedef struct Inner {
    uint8_t pad[0x34];
    uint16_t f;
} Inner;

typedef struct Outer {
    uint32_t pad;
    Inner *p;
} Outer;

extern Outer data_ov006_021bc828;

uint32_t func_ov006_021b4cd4(uint32_t x)
{
    uint32_t flag = (*(uint16_t *)0x2ffffa8 & 0x8000) >> 15;
    if (flag) {
        return 0;
    }
    if (x == (data_ov006_021bc828.p->f & x)) {
        return 1;
    }
    return 0;
}
