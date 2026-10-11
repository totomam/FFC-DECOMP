#include "ffc/types.h"

extern uint32_t data_020b93b8;
extern void func_0201bc64(uint32_t a, int b, int c);

void func_ov007_021b2884(uint8_t *base, int8_t idx, uint8_t val)
{
    int8_t i = idx - 1;
    if (i >= 0 && i < 0x40) {
        base[i + 0xbc] = val;
        func_0201bc64(data_020b93b8, 0xe, idx);
    }
}
