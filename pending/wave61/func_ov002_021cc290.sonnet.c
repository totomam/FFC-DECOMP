/* cflags: -lang c++ -noO4,p -O4 -inline auto */
#define cpy(o,c) ((o)->a=(c)->a,(o)->b=(c)->b)
#include "ffc/types.h"
struct P { int32_t a, b; };
struct S1 { P *c; int x; P *e; };
struct S2 { int y; P *c; P *e; };
struct R { P *p; ~R() {} };
static inline bool more(const S1 &s, const S2 &t, P *const &o) { bool r = false; if (s.c != s.e && t.c != t.e) r = true; return r; }
static inline void step(S1 &s, S2 &t, P *&o) { if (t.c->b > s.c->b) { cpy(o, t.c); t.c++; } else { cpy(o, s.c); s.c++; } o++; }
static inline P *cp(S1 &s, S2 &t, P *o) { S1 u = s; S2 v = t; while (u.c != u.e) { cpy(o, u.c); u.c++; o++; } return o; }
static inline P *cq(S2 s, P *o) { while (s.c != s.e) { cpy(o, s.c); s.c++; o++; } return o; }
extern "C" R func_ov002_021cc290(S1 s, S2 t, P *o)
{
    while (more(s, t, o)) {
        step(s, t, o);
    }
    R r;
    if (s.c == s.e) r.p = cq(t, o);
    else r.p = cp(s, t, o);
    return r;
}
