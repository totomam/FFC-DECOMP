/* cflags: -lang c++ -noO4,p -O4 */
#include "ffc/types.h"
struct E { uint32_t w[7]; };
struct A { uint8_t c; A():c(0){} A(const A&o):c(o.c){} };
struct L { E *data; uint32_t n; uint32_t a; uint32_t *p; uint32_t m; };
struct V { E *data; uint32_t cnt; uint32_t cap; };
extern "C" uint32_t func_02068034(V *v, uint32_t n);
extern "C" void func_02068394(L *l, uint32_t n, A z);
extern "C" void func_02068324(L *l);
inline void w2(L *l, uint32_t n, A z) { func_02068394(l, n, z); }
inline void w(L *l, uint32_t n, const A &z) { A c = z; w2(l, n, c); }
extern "C" void func_020680b4(V *v, uint32_t n, E *src)
{
    L l;
    E *d, *s, *b;
    uint32_t t;
    A z;
    l.data = 0; l.n = 0; l.a = 0; l.m = 0;
    l.p = &v->cap;
    w(&l, func_02068034(v, v->cnt + n - v->cap), z);
    l.m = v->cnt;
    d = l.data + v->cnt;
    d = d + l.n;
    if (n != 0) {
        do {
            if (d != 0) *d = *src;
            l.n++;
            d++;
        } while (--n != 0);
    }
    b = v->data;
    s = b + v->cnt;
    d = l.data + l.m;
    while (s > b) {
        s--; d--;
        if (d != 0) *d = *s;
        l.m--;
        l.n++;
    }
    v->cnt = 0;
    t = v->cap; v->cap = l.a; l.a = t;
    { E *x = v->data; v->data = l.data; l.data = x; }
    v->cnt = l.n;
    l.n = 0;
    func_02068324(&l);
}
