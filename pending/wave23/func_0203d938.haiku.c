#include "ffc/types.h"

extern void func_02005988(void *dst, void *src);
extern uint32_t func_0203d96c(void *a, void *b, void *c, void *tmp);
extern void *func_020059cc(void *object);
extern uint8_t data_020aeec8[];

uint32_t func_0203d938(void *a, void *b, void *c)
{
    uint8_t tmp[12];
    uint32_t r;

    func_02005988(tmp, data_020aeec8);
    r = func_0203d96c(a, b, c, tmp);
    func_020059cc(tmp);
    return r;
}
