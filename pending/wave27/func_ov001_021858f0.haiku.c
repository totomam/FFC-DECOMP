#include "ffc/types.h"

extern void func_ov000_02165914(void);
extern uint32_t func_ov000_02165418(uint32_t x, uint32_t y);
extern void func_ov001_02185748(uint8_t *p);

void func_ov001_021858f0(uint8_t *p, uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e)
{
    if (c == 0 && *(uint32_t *)0x0217098c != 1) {
        return;
    }
    func_ov000_02165914();
    *(uint32_t *)(p + 0x58) = d;
    *(uint32_t *)(p + 0x5c) = e;
    *(uint32_t *)p = b;
    *(uint32_t *)(p + 4) = a;
    *(uint32_t *)(p + 0x54) = 0;
    *(uint32_t *)(p + 0x28) = 0;
    *(uint32_t *)(p + 0x20) = func_ov000_02165418(2, 2);
    func_ov001_02185748(p + 0x14);
    func_ov001_02185748(p + 8);
}
