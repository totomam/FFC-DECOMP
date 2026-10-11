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

void func_02035898(S *d, const S *s) {
    func_0205327c(d, s);
    d->f4 = s->f4;
    d->f8 = s->f8;
    d->fc = s->fc;
    if (d->f4 != 0) {
        func_02052be0();
        if (d->fc != 0) {
            func_02052d10(d->f4, d->f8);
        }
    }
}
