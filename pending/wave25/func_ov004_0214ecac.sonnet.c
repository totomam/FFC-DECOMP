#include "ffc/types.h"
typedef struct { uint32_t a; uint32_t b; } Pair;
extern void func_01ffdd5c(uint32_t *out, Pair t, Pair s, uint32_t z);
void func_ov004_0214ecac(uint8_t *base, int idx, uint32_t *pa, uint32_t *pb) {
    Pair s;
    Pair out;
    s.a = *pa;
    s.b = *pb;
    Pair *e = (Pair *)((uint8_t *)((Pair *)base + idx) + 0x158);
    func_01ffdd5c((uint32_t*)&out, *e, s, 0);
    *pa = out.a;
    *pb = out.b;
}
