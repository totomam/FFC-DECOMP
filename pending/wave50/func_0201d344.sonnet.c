#include "ffc/types.h"

extern int32_t func_0209a76c(int32_t a, int32_t b);
extern void func_0201e8e0(void *out, int32_t idx);
typedef struct { int32_t count; int32_t zero; uint8_t *keep; } Iter;
typedef struct { uint8_t *p; Iter *it; } S;
extern void func_0201d3a8(int32_t a, int32_t b, S s1, S s2, void *c);
extern void func_02056858(void *p);

void func_0201d344(int32_t a, int32_t b, int32_t c, int32_t d)
{
    Iter it;
    S s1, s2;
    struct { uint8_t *base; int32_t count; } arr;
    int32_t idx = func_0209a76c(b - a, 0x18);
    if (idx <= 0x14) idx = 0;
    func_0201e8e0(&arr, idx);
    uint8_t *base = arr.base;
    int32_t n = arr.count;
    it.keep = base;
    it.zero = 0;
    it.count = n;
    s2.p = base + n * 0x18;
    s2.it = &it;
    s1.p = base;
    s1.it = &it;
    func_0201d3a8(a, b, s1, s2, &c);
    func_02056858(it.keep);
}
