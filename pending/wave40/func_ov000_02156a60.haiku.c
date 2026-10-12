#include "ffc/types.h"

extern uint32_t func_02092864(const uint8_t *text);
extern uint32_t func_ov000_02156ca8(uint8_t *a, uint8_t *b, uint32_t c);
extern uint32_t func_02086b04(uint32_t a, uint32_t b, const uint8_t *c, uint32_t d, uint32_t e);
extern const uint8_t data_ov000_02169e14[];
extern const uint8_t data_ov000_02169e68[];

uint32_t func_ov000_02156a60(uint8_t *p)
{
    uint8_t *r4 = p + 0x1a34;
    const uint8_t *r6 = data_ov000_02169e14;
    uint32_t a, t, c, d, s;
    uint32_t k = 0x1124;
    uint32_t o = 0x1a34;
    uint32_t one = 1;
    uint32_t k2 = one << 10;

    if (*(uint32_t *)(p + 0x1008) != 0) {
        r6 = data_ov000_02169e68;
    }
    a = func_02092864((const uint8_t *)*(uint32_t *)(p + k));
    t = func_02092864(r6);
    c = func_02092864((const uint8_t *)*(uint32_t *)(p + k + 4));
    s = t - 4;
    s = s + c;
    s = a + s;
    s = s + k2;
    if (func_ov000_02156ca8(p, p + o, s) != 1) {
        return 1;
    }
    d = func_02086b04(*(uint32_t *)(r4 + 4), *(uint32_t *)(r4 + 0xc), r6,
                      *(uint32_t *)(p + k + 4), *(uint32_t *)(p + k));
    *(uint32_t *)(r4 + 4) += d;
    return 0;
}
