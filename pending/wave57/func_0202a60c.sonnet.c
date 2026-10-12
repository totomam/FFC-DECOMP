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
    H out;
    uint32_t t2;
} X;

void func_0202a60c(uint8_t *p, uint32_t *o1, uint32_t *o2, uint32_t *o3) {
    X s;
    uint8_t *q;
    H *op;

    s.h.a = *(void **)(p + 0x54);
    s.h.b = *(uint32_t *)(p + 0x58);
    s.h.f = p[0x5c];
    if (s.h.a != 0) {
        func_02052be0(s.h.a);
        if (s.h.f != 0) {
            func_02052d10(s.h.a, s.h.b);
        }
    }
    s.v = *(uint32_t *)(p + 0x94);
    func_02028894(&s.out, &s.h, &s.v);
    func_02035c18(&s.v);
    if (s.h.a != 0) {
        if (s.h.f != 0) {
            func_02052d3c(s.h.a, s.h.b);
        }
        func_02052c04(s.h.a);
    }
    s.ga = data_021394c4;
    s.gf = 1;
    if (s.gf != 0) {
        func_0208763c();
    }
    func_02027e9c(&s.res, data_021394a4, &s.out);
    if (s.res != data_021394a8) {
        q = s.res + 0x1c;
        if (s.gf != 0) {
            func_02087678(s.ga);
        }
    } else {
        if (s.gf != 0) {
            func_02087678(s.ga);
        }
        q = 0;
    }
    op = &s.out;
    *o1 = *(uint32_t *)(q + 0xc);
    *o2 = *(uint32_t *)(q + 0x14);
    *o3 = *(uint32_t *)(q + 0x10);
    func_02035c18(&s.t2);
    if (s.out.a != 0) {
        if (op->f != 0) {
            func_02052d3c(op->a, op->b);
        }
        func_02052c04(op->a);
    }
}
