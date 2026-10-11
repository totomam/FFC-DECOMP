#include "ffc/types.h"

extern void func_02052be0(uint32_t a, uint32_t f, uint32_t b);
extern void func_02052d10(uint32_t a, uint32_t b);

typedef struct {
    uint32_t a;
    uint32_t b;
    uint8_t f;
} Src;

typedef struct {
    uint32_t a;
    uint32_t b;
    uint8_t f;
    uint8_t pad[3];
    uint32_t c;
} Dst;

Dst *func_02028894(Dst *d, Src *s, uint32_t *p) {
    uint32_t a = s->a;
    uint32_t b;
    uint8_t f;
    d->a = a;
    b = s->b;
    d->b = b;
    f = s->f;
    d->f = f;
    if (a != 0) {
        func_02052be0(a, f, b);
        if (d->f != 0) {
            func_02052d10(d->a, d->b);
        }
    }
    d->c = *p;
    return d;
}
