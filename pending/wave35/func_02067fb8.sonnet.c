/* cflags: -lang c++ */
#include "ffc/types.h"
struct E { uint32_t w[4]; };
struct V { E *data; int32_t count; };
struct Num { int v; Num(int x) : v(x) {} ~Num() {} };
inline int dec(const Num &a) { return a.v - 1; }
extern "C" E *func_02067fb8(V *v, E *p)
{
    E *d, *s;
    E *end = v->data + v->count;
    int k = end - p;
    if (k - 1 != 0) {
        s = p + 1;
        d = p;
        while (s < end) {
            d->w[0] = s->w[0];
            d->w[1] = s->w[1];
            d->w[2] = s->w[2];
            d->w[3] = s->w[3];
            s++;
            d++;
        }
    }
    int n = v->count;
    v->count = dec(n);
    return p;
}
