#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Pair;

extern void func_ov012_021cd9b0(uint8_t *p);
extern void func_ov005_02196144(uint32_t v, uint8_t n);
extern void func_ov012_021cda20(uint8_t *p);
extern void func_02069724(Pair *out, uint8_t *p);
extern void func_02069828(uint8_t *p, Pair s);

int func_ov012_021cd95c(uint8_t *p)
{
    Pair t;
    if (p[260] == 0) {
        p[260] = p[261];
    } else {
        p[260]--;
    }
    func_ov012_021cd9b0(p);
    func_ov005_02196144(*(uint32_t *)(p + 0xec), (uint8_t)(p[260] + 1));
    func_ov012_021cda20(p);
    func_02069724(&t, p);
    func_02069828(p, t);
    return 1;
}
