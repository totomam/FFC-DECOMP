#include "ffc/types.h"

extern void func_ov004_02149bb8(void *p);
extern void func_ov004_0214ad08(void *p);
extern uint8_t data_ov004_02158dcc[];

uint8_t *func_ov004_0214aba0(uint8_t *a, int unused, uint8_t c)
{
    uint8_t *s;
    uint32_t v;

    func_ov004_02149bb8(a);
    *(void **)a = (void *)data_ov004_02158dcc;
    *(uint32_t *)(a + 0x88) = 0;
    *(uint32_t *)(a + 0x8c) = 0;
    *(uint8_t *)(a + 0x94) = c;
    *(uint8_t *)(a + 0x95) = 0;
    *(uint32_t *)(a + 0x98) = 0;
    *(uint32_t *)(a + 0x9c) = 0;
    *(uint32_t *)(a + 0xa0) = 0;
    *(uint32_t *)(a + 0xa4) = 0;
    *(uint32_t *)(a + 0xa8) = 0;
    *(uint32_t *)(a + 0xac) = 0;
    *(uint32_t *)(a + 0xb4) = 0;
    *(uint32_t *)(a + 0xb8) = 0;
    s = a + 0x48;
    v = s[0x12];
    v = (v & ~0xffu) | 1u;
    s[0x12] = (uint8_t)v;
    func_ov004_0214ad08(a);
    return a;
}
