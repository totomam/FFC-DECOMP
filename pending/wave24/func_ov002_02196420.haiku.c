#include "ffc/types.h"

extern void func_02056c9c(void *p, uint32_t x);
extern uint32_t data_ov002_021d4778;
extern uint32_t data_ov002_021d47e8[];

typedef struct Pair { uint32_t a; uint32_t b; } Pair;

void *func_ov002_02196420(void *pp, uint32_t a, uint32_t b, uint32_t c)
{
    uint8_t *p = (uint8_t *)pp;
    func_02056c9c(p, 0);
    *(void **)p = &data_ov002_021d4778;
    *(uint32_t *)(p + 0x88) = a;
    *(uint32_t *)(p + 0x90) = b;
    *(uint8_t *)(p + 0x94) = 0;
    *(uint32_t *)(p + 0x98) = c;
    *(Pair *)(p + 0x80) = *(Pair *)data_ov002_021d47e8;
    return p;
}
