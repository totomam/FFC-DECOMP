#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern Pair data_ov009_021b0714;

void func_ov009_021a2bf4(uint8_t *p)
{
    uint32_t *x = *(uint32_t **)(p + 0x210);
    uint32_t a = x[1];
    uint32_t b = x[2];
    uint32_t m = a & (b ^ a);

    if (!(m & 0x100b)) {
        uint32_t c = *(uint32_t *)(p + 0x20c) - 1;
        *(uint32_t *)(p + 0x20c) = c;
        if (c != 0) {
            return;
        }
    }
    {
        Pair *d = (Pair *)(p + 0x80);
        *d = data_ov009_021b0714;
    }
}
