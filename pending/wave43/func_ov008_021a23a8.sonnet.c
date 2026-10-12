/* cflags: -lang c++ */
#include "ffc/types.h"

extern "C" {
extern void func_02021338(int x);
extern int func_ov008_021a27ec(void *p, uint32_t x);
extern void func_ov008_021a2598(void *p);
void func_ov008_021a23a8(uint8_t *a0, uint32_t a1, uint32_t a2);
}

struct BM {
    uint32_t *w; uint32_t m;
    BM(uint32_t *base, uint32_t i) : w(base + (i >> 5)), m(1u << (i & 31)) {}
    ~BM() {}
    BM(const BM&o) : w(o.w), m(o.m) {}
};

inline void setb(BM b, uint32_t v){ if (v) *b.w |= b.m; else *b.w &= ~b.m; }

void func_ov008_021a23a8(uint8_t *a0, uint32_t a1, uint32_t a2)
{
    uint32_t *base = *(uint32_t **)(a0 + 0x124);
    BM b(base, a1);
    int d;
    uint32_t cur = (*b.w & b.m) ? 1u : 0u;

    if (a2 == cur) {
        return;
    }
    setb(b, a2);
    if (a2) {
        func_02021338(0xbf);
        d = func_ov008_021a27ec(a0, a1);
        *(int *)(a0 + 0x138) += d;
        a0[0x13c]++;
    } else {
        func_02021338(0xc0);
        d = func_ov008_021a27ec(a0, a1);
        *(int *)(a0 + 0x138) -= d;
        a0[0x13c]--;
    }
    func_ov008_021a2598(a0);
}
