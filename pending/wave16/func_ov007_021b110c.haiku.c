#include "ffc/types.h"

extern uint32_t func_ov007_021b10a8(uint8_t *p);
extern void func_ov000_0215c000(int32_t a, void *b, void *c);
extern uint8_t data_ov007_021c5c7c[];

uint32_t func_ov007_021b110c(uint8_t *p)
{
    uint32_t v = func_ov007_021b10a8(p);
    *(uint32_t *)(p + 0xc0) = v;
    func_ov000_0215c000(0, data_ov007_021c5c7c, p + 0xc0);
}
