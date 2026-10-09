#include "ffc/types.h"

extern uint32_t func_02086ad4(void *object, uint32_t first, ...);
extern void func_02005988(void *dst, void *src);
extern void func_0201845c(void *object, void *arg);
extern void *func_020059cc(void *object);
extern uint8_t data_020ad1fc[];

void func_02018508(void *param0)
{
    uint8_t buf4[0x44];
    uint8_t buf6[0xc];

    func_02086ad4(buf4, (uint32_t)data_020ad1fc);
    func_02005988(buf6, buf4);
    func_0201845c(param0, buf6);
    func_020059cc(buf6);
}
