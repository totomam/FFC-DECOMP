#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern uint32_t func_ov002_021c85f8(uint8_t *p);
extern void func_02055914(uint32_t arg, void *obj);
extern uint32_t data_020abbf8[];

void func_ov002_021a157c(uint8_t *p, uint32_t b, uint8_t c, uint32_t d, uint8_t e)
{
    uint8_t *r4 = (uint8_t *)func_0205681c(0x24);
    if (r4 != 0) {
        uint32_t r = func_ov002_021c85f8(p + 0x144);
        *(uint32_t *)(r4 + 0x08) = 0;
        *(uint32_t *)(r4 + 0x0c) = 0x100f3;
        *(uint32_t **)(r4 + 0x00) = data_020abbf8;
        *(uint32_t *)(r4 + 0x10) = b;
        *(uint32_t *)(r4 + 0x14) = r;
        r4[0x18] = c;
        *(uint32_t *)(r4 + 0x1c) = d;
        *(uint8_t *)(r4 + 0x20) = e;
    }
    p += 0xf0;
    func_02055914(*(uint32_t *)p, r4);
}
