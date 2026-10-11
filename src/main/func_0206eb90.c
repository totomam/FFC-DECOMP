#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Pair;

extern uint32_t data_0213df18;
extern uint32_t func_0204f854(uint32_t);
extern void func_0204e1dc(uint32_t, void (*)(void), void *);
extern void func_0206ebc8(void);
extern Pair data_020b2048;

void func_0206eb90(void *p)
{
    *(uint8_t *)((char *)p + 0x88) = 0;
    uint32_t r = func_0204f854(data_0213df18);
    func_0204e1dc(r, func_0206ebc8, p);
    *(Pair *)((char *)p + 0x80) = data_020b2048;
}
