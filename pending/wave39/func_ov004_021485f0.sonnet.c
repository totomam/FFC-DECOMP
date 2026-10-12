#include "ffc/types.h"

typedef struct { uint8_t c; } Al;
typedef struct { uint32_t *ptr; uint32_t count; uint32_t cap; } Vec;
typedef struct { uint8_t a, b, c, d; Vec t; } Frame;
extern void func_ov004_021486f8(Vec *v, uint32_t n, Al a);
extern void func_ov004_021486dc(Vec *v);

void func_ov004_021485f0(Vec *p, uint32_t n) {
    Frame f;

    uint32_t *end, *dst, *src, tmp;
    uint8_t *pc = &f.c;
    *pc = 0;

    f.t.ptr = 0; f.t.count = 0; f.t.cap = 0;
    func_ov004_021486f8(&f.t, n, *(Al*)pc);
    src = p->ptr;
    end = src + (p->count << 1);
    dst = f.t.ptr + (f.t.count << 1);
    while (src < end) {
        if (dst) { dst[0] = src[0]; dst[1] = src[1]; }
        src += 2;
        dst += 2;
        f.t.count++;
    }
    p->count = 0;
    {uint32_t *cp = &f.t.cap; tmp = p->cap; p->cap = *cp; *cp = tmp;}
    tmp = (uint32_t)p->ptr; p->ptr = f.t.ptr; f.t.ptr = (uint32_t*)tmp;
    p->count = f.t.count;
    f.t.count = 0;
    func_ov004_021486dc(&f.t);
}
