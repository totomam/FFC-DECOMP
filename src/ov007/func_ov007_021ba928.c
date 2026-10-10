#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern void func_ov001_0218dff4(void *p, uint32_t x);
extern uint8_t data_ov007_021c7644[];
extern uint8_t data_ov007_021c7804[];

void *func_ov007_021ba928(void *p, uint32_t x, uint32_t c, uint32_t d)
{
    func_ov001_0218dff4(p, x);
    *(void **)p = data_ov007_021c7644;
    *(uint32_t *)((uint8_t *)p + 0xb8) = c;
    *(uint32_t *)((uint8_t *)p + 0xbc) = d;
    *(Pair *)((uint8_t *)p + 0xb0) = *(Pair *)data_ov007_021c7804;
    return p;
}
