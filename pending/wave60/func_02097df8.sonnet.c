/* cflags: -lang c++ */
#include "ffc/types.h"
extern "C" void func_0209724c(void *p);
extern "C" uint32_t data_020b33a8[];
extern "C" uint32_t data_020b33bc[];
extern "C" uint32_t *func_02097df8(uint32_t *self)
{
    uint32_t *v = data_020b33a8;
    self[0] = (uint32_t)v;
    self[1] = (uint32_t)data_020b33bc;
    uint8_t *b = (uint8_t *)self + ((uint32_t *)((uint8_t*)self[0] - 0xc))[0];
    func_0209724c(b);
    *(uint32_t *)(b + 0x30) = 0;
    *(uint16_t *)(b + 0x34) = 0x20;
    return self;
}
