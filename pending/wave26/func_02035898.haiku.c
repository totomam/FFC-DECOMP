#include "ffc/types.h"

extern void *func_0205327c(void *destination, const void *source);
extern void func_02052be0(void);
extern void func_02052d10(uint32_t a, uint32_t b);

typedef struct {
    uint32_t f0;
    uint32_t f4;
    uint32_t f8;
    uint8_t fc;
} S;

void func_02035898(void *dst, const void *src) {
    S *d = (S *)dst;
    const S *s = (const S *)src;
    uint32_t x;
    uint32_t y;
    uint8_t c;

    func_0205327c(dst, src);
    x = s->f4;
    y = s->f8;
    d->f4 = x;
    d->f8 = y;
    c = s->fc;
    d->fc = c;
    if (x != 0) {
        func_02052be0();
        if (d->fc != 0) {
            func_02052d10(d->f4, d->f8);
        }
    }
}
