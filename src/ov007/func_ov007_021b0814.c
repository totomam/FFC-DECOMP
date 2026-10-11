#include "ffc/types.h"
typedef struct { uint32_t a; uint32_t b; } Pair;
typedef struct S {
    uint8_t pad0[0xb0];
    Pair pr;
    uint32_t pad1; uint32_t *pp; uint32_t pad2[1];
    uint32_t st;
} S;
extern void func_ov007_021b08ec(S *);
extern Pair data_ov007_021c5b70;

void func_ov007_021b0814(S *p)
{
    S *s = p;
    if (s->st == 1) {
        *s->pp = 2;
        func_ov007_021b08ec(p);
    }
    s->pr = data_ov007_021c5b70;
}
