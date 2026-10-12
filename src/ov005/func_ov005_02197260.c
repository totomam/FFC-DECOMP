/* cflags: -lang c++ */
#include "ffc/types.h"

typedef struct {
    int32_t a;
    int32_t b;
} Pair;

struct V { virtual void a0(); virtual void a1(); virtual void a2(); virtual void a3(); virtual void a4(); virtual void a5(); virtual void a6(); virtual void a7(); virtual void *a8(); };
typedef void (*VF2)(void *, int);
typedef void (*VF1)(void *);

extern "C" void func_ov005_021971e4(void *p);
extern "C" V *func_0203b77c(void *a, int b, int c, int d);
extern "C" void *func_0203b9cc(Pair s, void *x, int f);
extern "C" void *func_0203b878(void *a, void *b);
extern "C" void func_02056bc0(void *object, void *node);
extern "C" void func_02068d58(void *a, int b, int c);
extern "C" uint8_t data_ov005_02199138[];
extern "C" uint8_t data_ov005_02199314[];

extern "C" void *func_ov005_02197260(void *p, Pair ab, uint8_t c, uint8_t d) {
    uint8_t *obj = (uint8_t *)p;
    V *t;
    void *x;
    void *r;
    void *y;
    void *q;
    Pair s;

    func_ov005_021971e4(p);
    *(void **)obj = data_ov005_02199138;
    *(int *)(obj + 0x84) = 0;
    *(uint8_t *)(obj + 0x88) = d;
    *(uint8_t *)(obj + 0x89) = c;
    t = func_0203b77c(data_ov005_02199314, 0, 0, 0);
    s.a = 0x20;
    s.b = 0x10;
    x = t->a8();
    r = func_0203b9cc(s, x, 1);
    y = func_0203b878(r, t);
    *(void **)(obj + 0x80) = y;
    func_02056bc0(obj + 0x48, y);
    func_02068d58(*(void **)(obj + 0x80), ab.a, ab.b);
    q = *(void **)(obj + 0x80);
    ((VF2)((*(void ***)q)[8]))(q, 2);
    q = *(void **)(obj + 0x80);
    ((VF1)((*(void ***)q)[10]))(q);
    return p;
}
