#include "ffc/types.h"
typedef struct { uint32_t a, b; } P;
typedef struct { void *p; uint32_t n; uint8_t f; } E;
typedef struct { uint32_t h; E e[4]; uint32_t t; } S;
extern void func_02062930(void *self, P p);
extern void *func_0205327c(void *d, const void *s);
extern void func_02052be0(void *p);
extern void func_02052d10(void *p, uint32_t n);
extern void func_0205df08(void *self, uint32_t a, uint32_t b, uint32_t c);
extern char data_020b0fd8[];
void *func_0205de20(uint8_t *self, uint32_t a, S *src, uint32_t b, uint8_t c, uint8_t d)
{
    P p; S *dst; int i;
    p.a = 5; p.b = 5;
    func_02062930(self, p);
    *(void**)self = data_020b0fd8;
    *(uint32_t*)(self + 0x1c) = a;
    dst = (S*)(self + 0x34);
    func_0205327c(dst, src);
    {
        void *q = src->e[0].p;
        uint32_t n = src->e[0].n;
        dst->e[0].p = q;
        dst->e[0].n = n;
        dst->e[0].f = src->e[0].f;
        if (q) {
            func_02052be0(q);
            if (dst->e[0].f) func_02052d10(dst->e[0].p, dst->e[0].n);
        }
    }
    {
        uint32_t n = src->e[1].n;
        void *q = src->e[1].p;
        dst->e[1].n = n;
        dst->e[1].f = src->e[1].f;
        dst->e[1].p = q;
        if (q) {
            func_02052be0(q);
            if (dst->e[1].f) func_02052d10(dst->e[1].p, dst->e[1].n);
        }
    }
    {
        uint32_t n = src->e[2].n;
        void *q = src->e[2].p;
        dst->e[2].n = n;
        dst->e[2].f = src->e[2].f;
        dst->e[2].p = q;
        if (q) {
            func_02052be0(q);
            if (dst->e[2].f) func_02052d10(dst->e[2].p, dst->e[2].n);
        }
    }
    {
        uint32_t n = src->e[3].n;
        void *q = src->e[3].p;
        dst->e[3].n = n;
        dst->e[3].f = src->e[3].f;
        dst->e[3].p = q;
        if (q) {
            func_02052be0(q);
            if (dst->e[3].f) func_02052d10(dst->e[3].p, dst->e[3].n);
        }
    }
    dst->t = src->t;
    func_0205df08(self, b, c, d);
    return self;
}
