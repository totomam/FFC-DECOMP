#include "ffc/types.h"

extern void func_020890f8(uint32_t *p);
extern int func_020891f4(int a, int b);
extern void func_0204f830(uint32_t v, int b);
extern uint32_t data_0213df18;
extern uint32_t data_020b2040[2];

typedef struct { uint32_t a, b; } Pair;

void func_0206eb48(uint32_t *p)
{
    int k = 1;
    func_020890f8(p);
    if (func_020891f4(15, k) == 0) {
        p[3] = (p[3] & ~0xffu) | 2u;
        return;
    }
    func_0204f830(data_0213df18, k);
    *(Pair *)(p + 0x20) = *(Pair *)data_020b2040;
}
