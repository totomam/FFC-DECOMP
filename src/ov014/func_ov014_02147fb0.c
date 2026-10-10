#include "ffc/types.h"

extern uint16_t data_020a7d44[];
extern uint16_t data_020a7d64[];
extern void func_ov014_02147ec8(int a, int b, int c);

void func_ov014_02147fb0(int a, uint32_t i)
{
    func_ov014_02147ec8(a, data_020a7d44[i], data_020a7d64[i]);
}
