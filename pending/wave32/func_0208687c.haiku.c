#include "ffc/types.h"

extern uint32_t data_021414f0;
extern void func_020849e0(uint32_t value, void *dst, uint32_t size);
extern void func_020867f4(uint32_t idx, void *p);

void func_0208687c(void)
{
    if (data_021414f0 == 0) {
        uint32_t v = 1;
        uint32_t *p = (uint32_t *)0x2ffffb0;
        data_021414f0 = v;
        p[0] = v - 2;
        p[1] = 0xffff0000;
        func_020849e0(0, (uint8_t *)p + 0x10, 0x28);
        {
            uint16_t *w = (uint16_t *)0x4000204;
            uint8_t *q = (uint8_t *)p + 0x40;
            *w = *w | ((uint32_t)w >> 15);
            *w = 0x80 | *w;
            func_020867f4(0, q);
            func_020867f4(1, q);
        }
    }
}
