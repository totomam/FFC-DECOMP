#include "ffc/types.h"

extern uint32_t func_02086ad4(void *object, uint32_t first, ...);
extern void func_02005988(void *dst, void *src);
extern void func_02018c48(void *object, void *arg);
extern void *func_020059cc(void *object);
extern uint8_t data_020ad2e4[];

void func_02018c18(void *param0)
{
    uint8_t buf4[0x44];
    uint8_t buf6[0xc];

    func_02086ad4(buf4, (uint32_t)data_020ad2e4);
    func_02005988(buf6, buf4);
    func_02018c48(param0, buf6);
    func_020059cc(buf6);
}
