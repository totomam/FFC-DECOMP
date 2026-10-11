#include "ffc/types.h"
typedef struct { uint32_t a; uint32_t b; uint8_t c; } Dst;
typedef struct { uint8_t pad[0x1c]; uint32_t x; uint32_t y; uint8_t z; } Src;
extern void func_02052be0(uint32_t v);
extern void func_02052d10(uint32_t a, uint32_t b);
void func_0205dad8(Dst *d, Src *s) {
    uint32_t x = s->x;
    uint32_t y = s->y;
    uint8_t z = s->z;
    d->a = x;
    d->b = y;
    d->c = z;
    if (x) {
        func_02052be0(x);
        if (d->c) func_02052d10(d->a, d->b);
    }
}
