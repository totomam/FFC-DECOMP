#include "ffc/types.h"

extern uint32_t func_02053ce0(void *p, uint32_t n);
extern void func_02053f10(void *t, uint32_t a, uint32_t b);
extern void *func_02053f00(void *object);

typedef struct {
    uint32_t w[4];
} Elem;

typedef struct {
    uint8_t pad[8];
    Elem v;
    uint8_t *d;
    uint32_t i;
    uint32_t j;
    uint32_t *q;
    uint32_t k;
} Frame;

typedef struct {
    uint8_t *data;
    uint32_t count;
    uint32_t cap;
} Vec;

void func_0206591c(Vec *p, uint32_t n) {
    Frame f;
    uint8_t *r5;
    uint8_t *end;
    uint8_t *dst;
    uint32_t r;
    uint8_t z;
    uint32_t tmpv;

    f.d = 0;
    f.i = 0;
    f.j = 0;
    f.k = 0;
    f.q = &p->cap;
    r = func_02053ce0(p, p->count + n - p->cap);
    f.pad[3] = 0;
    z = f.pad[3];
    func_02053f10(&f.d, r, z);
    f.k = p->count;
    r5 = f.d + (f.k << 4) + (f.i << 4);

    if (n != 0) {
        do {
            if (r5 != 0) {
                *(Elem *)r5 = f.v;
            }
            n--;
            f.i++;
            r5 += 16;
        } while (n != 0);
    }

    end = p->data + (p->count << 4);
    dst = f.d + (f.k << 4);
    if (end > p->data) {
        do {
            end -= 16;
            dst -= 16;
            if (dst != 0) {
                *(Elem *)dst = *(Elem *)end;
            }
            f.k--;
            f.i++;
        } while (end > p->data);
    }

    p->count = 0;
    tmpv = p->cap;
    p->cap = f.j;
    f.j = tmpv;
    tmpv = (uint32_t)p->data;
    p->data = f.d;
    f.d = (uint8_t *)tmpv;
    p->count = f.i;
    f.i = 0;
    func_02053f00(&f.d);
}
