#include "ffc/types.h"

extern uint32_t func_ov000_02146660(uint32_t a, uint32_t b);
extern uint32_t func_ov000_02146af0(void *p, void *q, uint32_t c);
extern uint32_t func_ov000_02146720(void *p, void *q);
extern uint32_t func_ov000_02146a60(void *p, void *q, uint32_t c);
extern void func_020870e8(void);

uint32_t func_ov000_02146b30(void *p, void *q, uint32_t c)
{
    uint16_t *h = (uint16_t *)p;
    uint32_t a = ((uint32_t)(uint16_t)((h[6] >> 8) | (h[6] << 8)) << 16) | (uint16_t)((h[7] >> 8) | (h[7] << 8));
    uint32_t b = ((uint32_t)(uint16_t)((h[8] >> 8) | (h[8] << 8)) << 16) | (uint16_t)((h[9] >> 8) | (h[9] << 8));
    uint32_t r;
    uint32_t r2;

    r = func_ov000_02146660(a, b);
    if (r == 0) {
        return r;
    }
    r = func_ov000_02146af0(p, q, c);
    if (r != 0) {
        return r;
    }
    r2 = func_ov000_02146720(p, q);
    if (r2 != 0) {
        r = func_ov000_02146a60(p, q, r2);
        return r;
    }
    func_020870e8();
    r2 = func_ov000_02146720(p, q);
    if (r2 == 0) {
        return r2;
    }
    r = func_ov000_02146a60(p, q, r2);
    return r;
}
