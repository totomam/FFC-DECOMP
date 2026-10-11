#include "ffc/types.h"

extern void func_02056bf4(void *p, uint32_t v);
extern void func_02019d4c(uint32_t a, uint32_t b, uint32_t c);
extern uint32_t data_020b8e44;

void func_ov001_0218b458(uint8_t *a)
{
    uint32_t off = 0x730;
    uint8_t *p = a + 0x48;
    uint32_t x = *(uint32_t *)(a + off);
    uint32_t y = *(uint32_t *)(a + off - 4);
    func_02056bf4(p, y);
    func_02056bf4(p, x);
    func_02019d4c(data_020b8e44, *(uint32_t *)(a + off - 4), *(uint32_t *)(a + off));
}
