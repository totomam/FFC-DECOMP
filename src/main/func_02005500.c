#include "ffc/types.h"

extern void func_0205f2c8(uint32_t a, uint32_t b);
extern void func_0205f4b8(uint32_t a, uint32_t b);
extern void func_0205f4d8(uint32_t a, uint32_t b);
extern void func_0205f4f8(uint32_t a, uint32_t b);
extern uint32_t func_020054d0(uint8_t *p, uint32_t a, uint32_t b);
extern void func_0205f264(uint32_t a, uint32_t b);
extern void func_0205f3a8(uint32_t a, uint32_t b, uint32_t c);

void func_02005500(uint8_t *p, uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e)
{
    uint32_t r;

    func_0205f2c8(*(uint32_t *)(p + 0x94), e);
    func_0205f4b8(*(uint32_t *)(p + 0x94), a);
    func_0205f4d8(*(uint32_t *)(p + 0x94), b);
    func_0205f4f8(*(uint32_t *)(p + 0x94), *(uint32_t *)(p + 0x90));
    r = func_020054d0(p, c, d);
    func_0205f264(*(uint32_t *)(p + 0x94), r);
    func_0205f3a8(*(uint32_t *)(p + 0x94), 0, 0);
}
