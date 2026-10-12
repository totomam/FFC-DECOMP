#include "ffc/types.h"
typedef struct { uint32_t a:8; uint32_t b:8; uint32_t c:16; } S;
extern int32_t func_02083720(int32_t x);
extern void func_02078dd0(void *p, uint32_t x, int32_t a, int32_t b, uint32_t d, const void *q, S v);
extern uint8_t data_020a1930[];
extern uint8_t data_020a1924[];

void func_02078eb4(void *p, uint32_t x, int32_t a, int32_t b, uint32_t d)
{
    S s;
    int32_t i6, i4;
    uint8_t *base, *e;
    if (a >= 8) i6 = 3; else i6 = 31 - func_02083720(a);
    if (b >= 8) i4 = 3; else i4 = 31 - func_02083720(b);
    base = data_020a1930 + (i4 << 3);
    e = base + i6 * 2; s.a = base[i6 * 2];
    s.b = e[1];
    func_02078dd0(p, x, a, b, d, data_020a1924, s);
}
