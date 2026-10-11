#include "ffc/types.h"

extern uint32_t data_020b93b8;
extern void func_0201bc64(uint32_t a, int b, int c);

void func_ov007_021b2884(uint8_t *base, int idx, uint8_t val)
{
    int i = idx - 1;
    uint8_t v = val;
    if (i >= 0 && i < 0x40) {
        uint8_t *p = base + i;
        p[0xbc] = v;
        func_0201bc64(data_020b93b8, 0xe, idx);
    }
}
