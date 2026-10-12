#include "ffc/types.h"

typedef struct {
    uint8_t pad[0x50];
    uint32_t v50;
} DataBlk;

extern uint32_t func_ov000_02145614(uint8_t *p, uint32_t n, uint32_t v);
extern uint32_t func_ov000_021456d4(uint32_t v);
extern void func_ov000_02145e18(uint8_t *p, uint32_t n, uint32_t a, uint32_t b, uint32_t x, uint32_t y);
extern DataBlk data_ov000_0216bc60;

#define LD16(base, off) (*(uint16_t *)((uint8_t *)(base) + (off)))
#define ST16(base, off, v) (*(uint16_t *)((uint8_t *)(base) + (off)) = (uint16_t)(v))
#define SW(x) ((uint16_t)((((int32_t)(x)) >> 8) | (((int32_t)(x)) << 8)))

void func_ov000_02145fe0(uint32_t a, uint32_t b, uint8_t *c)
{
    uint8_t *p = *(uint8_t **)(c + 0x58);
    uint8_t *q = p + 0x22;
    uint32_t t;
    uint32_t r;
    uint32_t u;

    ST16(q, -0xc, SW((uint16_t)data_ov000_0216bc60.v50));
    ST16(q, -0xa, SW((uint16_t)data_ov000_0216bc60.v50));
    ST16(q, -0x8, SW((uint16_t)*(uint32_t *)(c + 0x1c)));
    ST16(q, -0x6, SW((uint16_t)*(uint32_t *)(c + 0x1c)));
    ST16(q, -0x4, 0x1100);
    ST16(q, 0x4, SW((uint16_t)(b + 8)));
    ST16(q, -0x2, LD16(q, 0x4));
    ST16(q, 0x2, SW(LD16(c, 0x18)));
    ST16(p, 0x22, SW(LD16(c, 0xa)));
    ST16(q, 0x6, 0);
    r = func_ov000_02145614(q - 0xc, 0x14, 0);
    t = func_ov000_02145614((uint8_t *)a, b, r);
    u = func_ov000_021456d4((uint16_t)t);
    ST16(q, 0x6, SW(u));
    func_ov000_02145e18(q, 8, a, b, *(uint32_t *)(c + 0x1c), 0x11);
}
