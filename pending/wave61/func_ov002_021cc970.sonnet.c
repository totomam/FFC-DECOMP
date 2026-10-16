/* cflags: -noO4,p -O4 */
#include "ffc/types.h"
typedef struct { uint32_t a, b; } P;
typedef struct { P *f; P *l; } R;
static P *adj(P *f, P *l) {
    P *n;
    if (f == l) return l;
    n = f + 1;
    if (n == l) return l;
    do {
        if (f->a == n->a) return f;
        f = n; n++;
    } while (n != l);
    return l;
}
void func_ov002_021cc970(P **out, R rg) {
    P *last = rg.l;
    P *r = adj(rg.f, rg.l);
    P *n;
    if (r != last) {
        n = r + 2;
        if (n != last) {
            do {
                if (r->a != n->a) { r++; *r = *n; }
                n++;
            } while (n != last);
        }
        r++;
    }
    *out = r;
}
