#include "ffc/types.h"

typedef struct { uint32_t a, b, c; } Triple;
typedef struct { uint32_t a, b; } Pair;

extern void func_ov002_021ae1d4(void *p, Pair v);

void func_ov002_021ae234(void *p, Triple t)
{
    uint32_t *w = (uint32_t *)p;
    w[0x64] = t.a;
    w[0x65] = t.b;
    if (w[0x30] == 1) {
        w[0x64] = -t.a;
    }
    func_ov002_021ae1d4(p, *(Pair *)&w[0x62]);
}
