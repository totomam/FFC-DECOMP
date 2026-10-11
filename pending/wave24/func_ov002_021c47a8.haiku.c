#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Pair;

extern void func_02056c9c(void *p, uint32_t x);
extern uint8_t data_ov002_021d72b0[];
extern Pair data_ov002_021d7370;

void *func_ov002_021c47a8(void *p, uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4)
{
    uint8_t *s = (uint8_t *)p;
    uint32_t v0, v1;
    func_02056c9c(p, 0);
    *(uint8_t **)s = data_ov002_021d72b0;
    *(uint32_t *)(s + 0x94) = a1;
    *(uint32_t *)(s + 0x98) = a2;
    *(uint32_t *)(s + 0x9c) = a3;
    *(uint32_t *)(s + 0xa0) = a4;
    v0 = data_ov002_021d7370.a;
    v1 = data_ov002_021d7370.b;
    *(uint32_t *)(s + 0x80) = v0;
    *(uint32_t *)(s + 0x84) = v1;
    return p;
}
