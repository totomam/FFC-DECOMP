#include "ffc/types.h"

extern void func_0202a96c(void *a, void *b);
extern void func_02052d3c(uint32_t a, uint32_t b);
extern void func_02052c04(uint32_t a);
extern void func_02056844(void *p);

typedef struct Inner {
    uint32_t a;
    uint32_t b;
    uint8_t flag;
} Inner;

typedef struct Outer {
    uint32_t f0;
    uint32_t f4;
    uint32_t f8;
    Inner in;
} Outer;

void func_0202a96c(void *a, void *b)
{
    Outer *s = (Outer *)b;
    Inner *in;

    if (s->f0 != 0) {
        func_0202a96c(a, (void *)s->f0);
    }
    if (s->f4 != 0) {
        func_0202a96c(a, (void *)s->f4);
    }
    in = &s->in;
    if (in->a != 0) {
        if (in->flag != 0) {
            func_02052d3c(in->a, in->b);
        }
        func_02052c04(in->a);
    }
    func_02056844(s);
}
