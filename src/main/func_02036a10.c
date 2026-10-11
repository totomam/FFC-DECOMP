#include "ffc/types.h"

extern uint8_t func_020369d4(uint8_t *p, uint32_t flag);

void func_02036a10(uint8_t *p, uint32_t idx, uint32_t flag, uint8_t v, uint32_t w)
{
    uint32_t off = idx << 2;
    uint8_t *q = p + off;
    uint8_t *b = p + 0x35;
    uint32_t r;
    q[0x34] = (flag != 0);
    b[off] = v;
    if (b[off] == 0) {
        r = func_020369d4(p, flag);
    } else {
        r = w;
    }
    q[0x36] = r;
}
