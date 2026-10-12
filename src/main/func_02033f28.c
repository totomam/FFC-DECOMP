#include "ffc/types.h"

typedef struct {
    uint32_t w0, w1, w2, w3, w4;
    uint16_t h0, h1, h2, h3, h4, h5, h6, h7;
} S;

typedef struct {
    S a;
    S b;
    S c;
    uint8_t f0;
    uint8_t f1;
} O;

extern void func_02033e58(void *p);
extern void func_02033e8c(void *p);

O *func_02033f28(O *out)
{
    S s1, s2, s3;
    S *d;

    func_02033e58(&s1);
    out->a.w0 = s1.w0;
    out->a.w1 = s1.w1;
    out->a.w2 = s1.w2;
    out->a.w3 = s1.w3;
    out->a.w4 = s1.w4;
    out->a.h0 = s1.h0;
    out->a.h1 = s1.h1;
    out->a.h2 = s1.h2;
    out->a.h3 = s1.h3;
    out->a.h4 = s1.h4;
    out->a.h5 = s1.h5;
    out->a.h6 = s1.h6;
    out->a.h7 = s1.h7;
    func_02033e8c(&s1);

    func_02033e58(&s2);
    d = &out->b;
    out->b.w0 = s2.w0;
    d->w1 = s2.w1;
    d->w2 = s2.w2;
    d->w3 = s2.w3;
    d->w4 = s2.w4;
    d->h0 = s2.h0;
    d->h1 = s2.h1;
    d->h2 = s2.h2;
    d->h3 = s2.h3;
    d->h4 = s2.h4;
    d->h5 = s2.h5;
    d->h6 = s2.h6;
    d->h7 = s2.h7;
    func_02033e8c(&s2);

    func_02033e58(&s3);
    d = &out->c;
    out->c.w0 = s3.w0;
    d->w1 = s3.w1;
    d->w2 = s3.w2;
    d->w3 = s3.w3;
    d->w4 = s3.w4;
    d->h0 = s3.h0;
    d->h1 = s3.h1;
    d->h2 = s3.h2;
    d->h3 = s3.h3;
    d->h4 = s3.h4;
    d->h5 = s3.h5;
    d->h6 = s3.h6;
    d->h7 = s3.h7;
    func_02033e8c(&s3);

    out->f0 = 0;
    out->f1 = 0;
    return out;
}
