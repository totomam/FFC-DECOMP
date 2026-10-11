#include "ffc/types.h"

extern void func_ov000_0214d658(uint32_t a, uint32_t b, uint32_t c);

typedef struct {
    uint16_t pad;
    uint16_t h;
    uint32_t w;
} S;

static inline uint16_t sw16(uint16_t x)
{
    return (uint16_t)((uint8_t)(x >> 8) | ((x << 8) & 0xff00));
}
static inline uint32_t sw32(uint32_t x)
{
    return (uint8_t)(x >> 24) | ((x >> 8) & 0xff00) | ((x << 8) & 0xff0000) | ((x << 24) & 0xff000000);
}

void func_ov000_0214ed44(uint32_t a, S *p)
{
    uint16_t h = p->h;
    uint32_t w = p->w;
    func_ov000_0214d658(a, sw16(h), sw32(w));
}
