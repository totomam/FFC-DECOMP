#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern uint64_t func_0209a76c(uint32_t a, uint32_t b);
extern void func_ov005_02196144(uint32_t v, uint8_t n);
extern void func_ov008_021a25cc(void *p);
extern void func_ov008_021a2614(void *p);
extern void func_ov008_021a2450(void *p);
extern void func_02069724(Pair *out, void *p);
extern void func_02069828(void *p, Pair v);

int func_ov008_021a24e0(void *p0)
{
    uint8_t *p = (uint8_t *)p0;
    uint8_t v = p[0x130];
    Pair s;
    Pair *q = &s;

    p[0x131] = (uint8_t)(func_0209a76c(p[0x131] + v, v + 1) >> 32);
    func_ov005_02196144(*(uint32_t *)(p + 0x120), (uint8_t)(p[0x131] + 1));
    func_ov008_021a25cc(p0);
    func_ov008_021a2614(p0);
    func_ov008_021a2450(p0);
    func_02069724(q, p0);
    func_02069828(p0, *q);
    return 1;
}
