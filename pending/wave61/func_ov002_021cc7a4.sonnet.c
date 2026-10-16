#include "ffc/types.h"
typedef struct { int a, b; } E;
typedef struct { int pad; int cnt; E *base; } C;
typedef struct { E *p; C *c; } R;
typedef struct { E *f; E *l; E *d; } S;
static inline void put(E *p, C *c, E *s) {
    void *it[2]; void **pi = it;
    it[0] = p; it[1] = c;
    if (((char*)p - (char*)c->base) / 8 < c->cnt) { *p = *s; }
    else { if (p) *p = *s; ((C*)pi[1])->cnt++; }
}
void func_ov002_021cc7a4(R *out, S s, C *c) {
    E *first = s.f, *last = s.l, *dst = s.d;
    E *ip = dst;
    if (first != last) {
        put(ip, c, first);
        ip++; first++;
        while (first != last) {
            E *q = ip, *t = ip;
            for (;;) {
                int go = 0;
                if (t != dst) { t--; if (first->b > t->b) go = 1; }
                if (!go) break;
                put(q, c, t);
                q--;
            }
            put(q, c, first);
            ip++; first++;
        }
    }
    out->p = ip; out->c = c;
}
