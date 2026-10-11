#include "ffc/types.h"

extern void func_ov000_0214d658(uint32_t a, uint32_t b, uint32_t c);

typedef struct {
    uint16_t pad;
    uint16_t h;
    uint32_t w;
} S;

void func_ov000_0214ed44(uint32_t a, S *p)
{
    uint32_t m = 0xff00;
    uint32_t h = p->h;
    uint32_t b1 = (uint8_t)(h >> 8);
    uint32_t s = ((h << 8) & m) | b1;
    uint32_t w = p->w;
    uint32_t b3 = (uint8_t)(w >> 24);
    uint32_t r = ((w >> 8) & m) | b3 | ((w << 8) & (m << 8)) | ((w << 24) & (m << 16));
    func_ov000_0214d658(a, (uint16_t)s, r);
}
