#include "ffc/types.h"

extern void func_ov004_021486f8(void *v);
extern void func_ov004_021486dc(void *v);

typedef struct {
    void *ptr;
    uint32_t count;
    void *cap;
} Vec;

typedef struct {
    uint8_t a;
    uint8_t b;
    uint8_t c;
    uint8_t d;
    Vec t;
} Frame;

void func_ov004_021485f0(Vec *p) {
    Frame f;
    uint8_t *src;
    uint8_t *end;
    uint8_t *dst;
    void *tmp;
    volatile uint8_t *pc;
    uint8_t v;

    pc = &f.c;
    *pc = 0;
    v = *pc;
    f.t.ptr = 0;
    f.t.count = 0;
    f.t.cap = 0;
    func_ov004_021486f8(&f.t);
    src = p->ptr;
    end = src + (p->count << 3);
    dst = f.t.ptr;
    dst = dst + (f.t.count << 3);
    while (src < end) {
        if (dst != 0) {
            ((uint32_t *)dst)[0] = ((uint32_t *)src)[0];
            ((uint32_t *)dst)[1] = ((uint32_t *)src)[1];
        }
        f.t.count++;
        src += 8;
        dst += 8;
    }
    p->count = 0;
    tmp = p->cap;
    p->cap = f.t.cap;
    f.t.cap = tmp;
    tmp = p->ptr;
    p->ptr = f.t.ptr;
    f.t.ptr = tmp;
    p->count = f.t.count;
    f.t.count = 0;
    func_ov004_021486dc(&f.t);
}
