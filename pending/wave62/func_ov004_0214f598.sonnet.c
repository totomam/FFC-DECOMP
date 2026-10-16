#include "ffc/types.h"
extern void func_01fff000(int *out, uint32_t v);
extern uint32_t func_02081210(uint32_t a, uint32_t b);
static inline uint32_t sh(uint32_t n) { return n << 12; }
void func_ov004_0214f598(uint32_t *out, uint8_t *p)
{
    struct { int pad[5]; int a; int b; int q; } s;
    uint32_t k;
    if (p[0xf5] == 0) {
        func_01fff000((int *)out, *(uint32_t *)(p + 0x98));
        return;
    }
    k = sh(2);
    func_01fff000(&s.a, *(uint32_t *)(p + 0x9c));
    int x = s.a;
    func_01fff000(&s.b, *(uint32_t *)(p + 0x98));
    *out = func_02081210(s.b + x, k);
}
