#include "ffc/types.h"

extern void *func_02027b00(void *a, void *b, void **out, uint8_t *o1, uint8_t *o2);
extern void func_02052be0(uint32_t a, uint32_t b);
extern void func_02052d10(uint32_t a, uint32_t b);
extern void *func_0202a8b4(void *a, void *b, uint8_t x, uint8_t y, void *s);
extern void func_02052d3c(uint32_t a, uint32_t b);
extern void func_02052c04(uint32_t a);

typedef struct {
    uint32_t a;
    uint32_t b;
    uint8_t c;
} Key;

typedef struct {
    uint32_t a;
    uint32_t b;
    uint8_t c;
    uint8_t pad[3];
    uint32_t d0;
    uint32_t d1;
} Ent;

typedef struct {
    uint8_t b0;
    uint8_t b1;
    uint8_t pad2[2];
    uint32_t tmp[2];
    void *node;
    Ent e;
} Frame;

void *func_02027a28(void *p0, Key *p1)
{
    Frame f;
    void *r7;
    Ent *e;
    Key *k;
    int less;
    uint32_t ea;
    uint32_t eb;
    uint8_t ec;

    r7 = func_02027b00(p0, p1, &f.node, &f.b1, &f.b0);

    less = (f.node == 0);
    if (!less) {
        k = (Key *)((uint8_t *)f.node + 0xc);
        if (p1 == k) {
            less = 0;
        } else if (k->a < p1->a) {
            less = 1;
        } else if (k->a > p1->a) {
            less = 0;
        } else if (k->b < p1->b) {
            less = 1;
        } else if (k->b > p1->b) {
            less = 0;
        } else {
            less = k->c < p1->c;
        }
    }

    if (less == 0) {
        return (uint8_t *)f.node + 0xc;
    }

    f.tmp[0] = 0;
    f.tmp[1] = 0;
    ea = p1->a;
    eb = p1->b;
    ec = p1->c;
    e = &f.e;
    e->a = ea;
    e->b = eb;
    e->c = ec;

    if (e->a != 0) {
        func_02052be0(e->a, e->b);
        if (e->c != 0) {
            func_02052d10(e->a, e->b);
        }
    }

    e->d0 = f.tmp[0];
    e->d1 = f.tmp[1];

    k = (Key *)func_0202a8b4(p0, r7, f.b1, f.b0, e);
    if (e->a != 0) {
        if (e->c != 0) {
            func_02052d3c(e->a, e->b);
        }
        func_02052c04(e->a);
    }
    return (uint8_t *)k + 0xc;
}
