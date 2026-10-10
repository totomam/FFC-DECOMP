#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

void func_ov004_0214e830(Pair *out, uint8_t *base, uint32_t idx) {
    Pair *p = (Pair *)(base + idx * 8 + 0x158);
    *out = *p;
}
