/* cflags: -lang c++ */
#include "ffc/types.h"
struct V { uint32_t *d; int n; uint32_t *c; };
struct T { uint32_t *d; int n; uint32_t *c; uint32_t *a; int t; };
struct A { uint8_t c; };
extern "C" int func_ov005_02198dc8(V *v, int n);
extern "C" void func_ov005_02198f14(T *t, int cap, A x);
extern "C" void func_ov005_02198f04(T *t);
extern "C" void func_ov005_02198e48(V *v, int n, uint32_t *val);
inline void wrap(T *t, int cap, A a) { func_ov005_02198f14(t, cap, a); }
inline void wrap2(T *t, int cap, const A &a) { A b = a; wrap(t, cap, b); }
void func_ov005_02198e48(V *v, int n, uint32_t *val) {
    T t;
    uint32_t *p, *src, *dst, *s0;
    int k;
    t.d = 0; t.n = 0; t.c = 0; t.t = 0;
    t.a = (uint32_t*)((char*)v + 8);
    int cap = func_ov005_02198dc8(v, v->n + n - (int)v->c);
    A zz[8]; A *pz = zz + 3; pz->c = 0;
    zz[4] = *pz;
    wrap(&t, cap, zz[4]);
    t.t = v->n;
    k = n;
    p = t.d + t.t + t.n;
    if (n != 0) { do { *p++ = *val; } while (--k != 0); }
    uint32_t *td = t.d;
    t.n += n;
    s0 = v->d;
    src = s0 + v->n;
    dst = td + t.t;
    if (src > s0) {
        do {
            src--; dst--;
            if (dst != 0) *dst = *src;
            t.t--; t.n++;
        } while (src > s0);
    }
    v->n = 0;
    uint32_t **pc = &t.c;
    { uint32_t *c = v->c; v->c = *pc; *pc = c; }
    { uint32_t *d = v->d; v->d = t.d; t.d = d; }
    v->n = t.n;
    t.n = 0;
    func_ov005_02198f04(&t);
}
