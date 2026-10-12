#include "ffc/types.h"

extern void func_020424e0(uint32_t x);
extern uint8_t *func_ov003_02146494(void);
extern void func_ov003_0215e274(uint8_t *s, uint32_t a, uint32_t b, uint32_t c,
                                uint32_t d, uint32_t e, uint32_t f, uint32_t g, uint32_t h);
extern void func_ov003_0215e554(uint8_t *s, uint32_t a, uint32_t b, uint32_t c, uint32_t d);

void func_ov003_02165934(uint32_t *p)
{
    uint8_t *q;

    func_020424e0(p[5]);
    q = func_ov003_02146494();
    q[0xde] = 0;
    func_ov003_0215e274(q, (uint16_t)p[6], (uint16_t)p[7], (uint16_t)p[8],
                        p[9], p[10], p[11], p[12], p[13]);
    func_ov003_0215e554(q, p[6], p[7], p[8], p[9]);
}
