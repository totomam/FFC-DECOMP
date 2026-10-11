#include "ffc/types.h"
extern uint32_t func_0207abbc(uint8_t *p, uint32_t x);
extern void func_0207b684(uint32_t x);
extern void func_0207b818(uint8_t *p, uint32_t x);
extern void func_020078bc(uint8_t *p);

void func_020066a4(uint8_t *self)
{
    uint32_t *dst = (uint32_t *)(self + 0x31ec);
    uint32_t r = func_0207abbc(self + 0xb4, 0x2800);
    func_0207b684(10);
    *dst = r;
    func_0207b818(self + 0x31f0, 11);
    func_020078bc(self + 0x31d8);
}
