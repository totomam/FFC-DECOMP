#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_02056c9c(void *p, uint32_t v);
extern void func_02056830(uint32_t flags);
extern uint8_t data_ov007_021c3cc0[];

void *func_ov007_021a60c4(uint32_t a, uint32_t b)
{
    uint32_t *p = (uint32_t *)func_0205681c(0x8c);
    if (p != 0) {
        func_02056c9c(p, 0);
        p[0] = (uint32_t)data_ov007_021c3cc0;
        p[0x80 / 4] = 0;
        p[0x84 / 4] = a;
        p[0x88 / 4] = b;
        func_02056830(0x8000);
    }
    return p;
}
