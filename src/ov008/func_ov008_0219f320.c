#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Pair;

extern void func_ov008_0219f374(uint8_t *p);
extern void func_ov005_02196144(uint32_t v, uint8_t n);
extern void func_ov008_0219f3e0(uint8_t *p);
extern void func_02069724(Pair *out, uint8_t *p);
extern void func_02069828(uint8_t *p, Pair s);

int func_ov008_0219f320(uint8_t *p)
{
    Pair t;
    if (p[256] == 0) {
        p[256] = p[257];
    } else {
        p[256]--;
    }
    func_ov008_0219f374(p);
    func_ov005_02196144(*(uint32_t *)(p + 0xe8), (uint8_t)(p[256] + 1));
    func_ov008_0219f3e0(p);
    func_02069724(&t, p);
    func_02069828(p, t);
    return 1;
}
