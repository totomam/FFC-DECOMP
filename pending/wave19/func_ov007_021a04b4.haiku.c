#include "ffc/types.h"

extern void func_0201b8ec(uint32_t a, uint8_t b);
extern uint32_t data_020b93b8;

void func_ov007_021a04b4(uint8_t *p)
{
    if (p[0x17c]) {
        func_0201b8ec(data_020b93b8, p[0x16a]);
        p[0x17c] = 0;
    }
}
