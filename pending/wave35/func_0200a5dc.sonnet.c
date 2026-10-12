#include "ffc/types.h"

typedef struct { uint8_t v; } B;
extern void func_0200a690(void *dst, uint32_t v);
extern void func_0200a82c(void *dst, uint32_t a, uint32_t b, uint32_t c, uint32_t d, B e);

typedef struct {
    uint32_t f : 1;
    uint32_t g : 31;
    uint32_t b;
    uint32_t c;
} Blk;

void *func_0200a5dc(void *dst, void *src)
{
    Blk *d = (Blk *)dst;
    Blk *s = (Blk *)src;
    B u;
    uint32_t k, z = 0;

    if (s->f == 0) {
        *d = *s;
    } else {
        for (k = 0; k < 3; k++) {
            ((uint32_t *)dst)[k] = z;
        }
        func_0200a690(dst, s->b);
        func_0200a82c(dst, z, z, s->c, s->c + (s->b << 1), u);
    }
    return dst;
}
