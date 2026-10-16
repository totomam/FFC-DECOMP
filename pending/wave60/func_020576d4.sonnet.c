/* cflags: -noO4,p -O4 */
#include "ffc/types.h"
typedef struct { uint32_t a, d, e; } Q;
typedef struct { uint32_t x0, a, b, m, r0, r1, c, d, e; } S;
void func_020576d4(S *p, Q *q) {
    uint32_t a, m, o, d, e;
    o = p->a;
    d = q->d;
    p->b = o;
    a = q->a;
    p->d = d;
    e = q->e;
    m = p->m;
    p->a = a;
    p->e = e;
    if (m != 0) {
        if ((a & m) != 0) {
            if (--p->c == 0) {
                p->c = p->r1;
                p->a = a & ~m;
            }
        } else {
            p->c = p->r0;
        }
    }
}
