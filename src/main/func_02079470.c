#include "ffc/types.h"

typedef struct {
    int8_t x;
    int8_t y;
} Pair;

extern int32_t func_02078468(int32_t a, int32_t b, int32_t c);
extern void func_020792dc(int32_t p, int32_t a, int32_t b, int32_t c, int32_t e, uint32_t flags, int32_t g, Pair pr);

void func_02079470(int32_t *p, int32_t a, int32_t b, int32_t c, int32_t d, int32_t e, uint32_t flags, int32_t g, Pair pr)
{
    int32_t w;

    if (flags & 0x100) {
        w = d - func_02078468(p[1], p[3], g);
        a += w * -pr.y;
        b += w * pr.x;
    } else if (flags & 0x80) {
        w = (d + 1) / 2 - (func_02078468(p[1], p[3], g) + 1) / 2;
        a += w * -pr.y;
        b += w * pr.x;
    }
    func_020792dc((int32_t)p, a, b, c, e, flags, g, pr);
}
