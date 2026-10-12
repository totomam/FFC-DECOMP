#include "ffc/types.h"

extern void func_02052be0(void *a);
extern void func_02052d10(void *a, uint32_t b);
extern void func_02028894(void *a, void *b, void *c);
extern void func_02035c18(void *a);
extern void func_02052d3c(void *a, uint32_t b);
extern void func_02052c04(void *a);
extern void func_0208763c(void);
extern void func_02027e9c(void *out, void *a, void *b);
extern void func_02087678(void *a);
extern uint8_t data_021394c4[];
extern uint8_t data_021394a4[];
extern uint8_t data_021394a8[];

typedef struct {
    void *a;
    uint32_t b;
    uint8_t f;
} H;

typedef struct {
    void *ga;
    uint8_t gf;
    uint8_t pad[3];
    uint8_t *res;
    uint32_t v;
    H h;
} X;

void func_0202a60c(uint8_t *p, uint32_t *o1, uint32_t *o2, uint32_t *o3) {
    X s;
    X *x;
    H out;
    uint32_t t2;
    uint8_t *q;

    x = &s;
    x->h.a = *(void **)(p + 0x54);
    x->h.b = *(uint32_t *)(p + 0x58);
    x->h.f = p[0x5c];
    if (x->h.a != 0) {
        func_02052be0(x->h.a);
        if (x->h.f != 0) {
            func_02052d10(x->h.a, x->h.b);
        }
    }
    x->v = *(uint32_t *)(p + 0x94);
    func_02028894(&out, &x->h, &x->v);
    func_02035c18(&x->v);
    if (x->h.a != 0) {
        if (x->h.f != 0) {
            func_02052d3c(x->h.a, x->h.b);
        }
        func_02052c04(x->h.a);
    }
    x->ga = data_021394c4;
    x->gf = 1;
    if (x->gf != 0) {
        func_0208763c();
    }
    func_02027e9c(&x->res, data_021394a4, &out);
    if (x->res == data_021394a8) {
        if (x->gf != 0) {
            func_02087678(x->ga);
        }
        q = 0;
    } else {
        q = x->res + 0x1c;
        if (x->gf != 0) {
            func_02087678(x->ga);
        }
    }
    *o1 = *(uint32_t *)(q + 0xc);
    *o2 = *(uint32_t *)(q + 0x14);
    *o3 = *(uint32_t *)(q + 0x10);
    func_02035c18(&t2);
    if (out.a != 0) {
        if (out.f != 0) {
            func_02052d3c(out.a, out.b);
        }
        func_02052c04(out.a);
    }
}
