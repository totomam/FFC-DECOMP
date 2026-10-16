/* cflags: -lang c++ */
#include "ffc/types.h"
struct E { uint32_t a, b, c, d; uint16_t e; uint32_t f; };
struct V { E *p; int n; };
struct Num { int v; Num(int x) : v(x) {} ~Num() {} };
inline int mul(const Num &a, int b) { return a.v * b; }
extern "C" int func_0209a76c(int a, int b);
extern "C" E *func_ov004_021520c4(V *v, E *e);
extern "C" E *func_ov004_021520c4(V *v, E *e) {
    int n = v->n;
    E *end = (E*)((char*)v->p + mul(n, 0x18));
    if (func_0209a76c((char*)end - (char*)e, 0x18) - 1 != 0) {
        E *d = e;
        E *s = e + 1;
        while (s < end) {
            d->a = s->a; d->b = s->b; d->c = s->c; d->d = s->d; d->e = s->e;
            d->f = s->f;
            s++;
            d++;
        }
    }
    v->n = v->n - 1;
    return e;
}
