/* cflags: -lang c++ */
#include "ffc/types.h"

typedef struct Elem { int32_t a; int32_t b; int32_t c; } Elem;
struct Pair { int32_t w0, w1; };
struct Quad { int32_t w0, w1, w2, w3; };
struct Obj { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void m14(uint32_t, Pair, int32_t); virtual void v15(); virtual void m16(Quad); uint32_t pad[2]; int32_t flag; };
typedef struct Self {
    uint32_t pad0[7];
    Obj *obj;
    uint32_t p20;
    uint32_t pad1;
    Elem *arrB;
    int32_t cnt2c;
    Elem *x30;
    Elem *arrA;
    int32_t count;
    Elem *y3c;
} Self;

extern "C" int32_t func_02062898(Obj *o);

struct Num { int v; Num(int x) : v(x) {} ~Num() {} };
inline int diff(const Num &a, int b) { return a.v - b; }
extern "C" void func_02068f54(Self *s);
extern "C" void func_02068f54(Self *s) {
    if ((int8_t)s->obj->flag == 0) {
        s->obj->v2();
    }
    if (*(volatile int32_t *)&s->count != 0) {
        Elem *e;
        Elem *b = s->arrB;
        for (e = s->arrA; e != s->arrA + *(volatile int32_t *)&s->count; e++) {
            int32_t key = e->b;
            if (b->c < key) {
                while (b->c < key) {
                    b++;
                }
            }
            if (b->a == e->a && b->b == key && b->c == e->c) {
                b++;
                continue;
            }
            if (e->a != 0) {
                Pair p;
                p.w0 = key; p.w1 = 0;
                s->obj->m14(s->p20, p, e->a);
            } else {
                Quad q;
                int32_t rv = func_02062898(s->obj);
                q.w0 = e->b;
                q.w1 = 0;
                q.w2 = e->c;
                q.w3 = rv;
                s->obj->m16(q);
            }
        }
        {
            Elem *t = s->x30;
            s->x30 = s->y3c;
            s->y3c = t;
        }
        {
            Elem *t = s->arrB;
            s->arrB = s->arrA;
            s->arrA = t;
        }
        int n = s->cnt2c;
        s->cnt2c = s->count;
        s->count = diff(n, n);
    }
}
