#include "ffc/types.h"

typedef struct { uint32_t a, b; } Pair;

extern uint32_t data_ov002_021d4bf8[];
extern Pair data_ov002_021d5020;
extern uint32_t func_ov002_0219ce58(void *a, uint32_t b, int c);
extern void func_02056bc0(void *object, uint32_t node);

void func_ov002_0219ce1c(uint8_t *p)
{
    uint32_t idx = *(uint32_t *)(p + 0x88);
    uint32_t r = func_ov002_0219ce58(p + 0x8c, data_ov002_021d4bf8[idx], 1);
    func_02056bc0(p + 0x14, r);
    *(Pair *)(p + 0x80) = data_ov002_021d5020;
}
