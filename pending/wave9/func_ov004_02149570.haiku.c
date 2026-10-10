#include "ffc/types.h"

extern void func_02021338(uint32_t arg);
extern uint64_t data_ov004_02158714;

void func_ov004_02149570(uint8_t *p)
{
    uint64_t v;
    func_02021338(0x8e);
    v = data_ov004_02158714;
    *(uint32_t *)(p + 0x80) = (uint32_t)v;
    *(uint32_t *)(p + 0x84) = (uint32_t)(v >> 32);
}
