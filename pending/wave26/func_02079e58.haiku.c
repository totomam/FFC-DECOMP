#include "ffc/types.h"

extern void func_0207c908(void *p);
extern void func_0207c914(void *p, int32_t a, int32_t b);

void func_02079e58(uint8_t *a)
{
    *(uint8_t *)(a + 0x2e) = 0;
    *(uint8_t *)(a + 0x2d) = 0;
    *(uint8_t *)(a + 0x2f) = 0;
    *(uint8_t *)(a + 0x40) = 0x7f;
    *(uint8_t *)(a + 0x41) = 0x7f;
    *(uint16_t *)(a + 0x34) = 0;
    *(uint16_t *)(a + 0x3e) = 0;
    func_0207c908(a + 0x1c);
    func_0207c914(a + 0x1c, 0x7f00, 1);
}
