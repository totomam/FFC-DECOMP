#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern void func_01ffdd5c(uint32_t *out, uint32_t x, uint32_t y, Pair s, uint32_t z);

void func_ov004_0214ecac(uint8_t *base, uint32_t idx, uint32_t *pa, uint32_t *pb) {
    uint32_t out[2];
    Pair s;
    uint32_t *p;
    s.a = *pa;
    s.b = *pb;
    p = (uint32_t *)(base + (idx << 3) + 0x158);
    func_01ffdd5c(out, p[0], p[1], s, 0);
    *pa = out[0];
    *pb = out[1];
}
