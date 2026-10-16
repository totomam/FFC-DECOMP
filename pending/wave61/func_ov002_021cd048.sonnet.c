/* cflags: -lang c++ */
#include "ffc/types.h"
struct It { uint32_t *p; uint32_t *e;
  uint32_t *cur() const { return p; }
  void next() { p += 2; } };
struct O { uint32_t *p; };
struct R { uint32_t *p; ~R() {} };
inline O cp(It f, It l, O o) {
    while (f.cur() != l.cur()) { o.p[0] = f.p[0]; o.p[1] = f.p[1]; f.next(); o.p += 2; }
    return o;
}
inline bool more(const It &a, const It &ae, const It &b, const It &be) {
    return a.cur() != ae.cur() && b.cur() != be.cur();
}
extern "C" R func_ov002_021cd048(It a, It ae, It b, It be, O o) {
    R r;
    while (more(a, ae, b, be)) {
        if (a.p[0] < b.p[0]) { o.p[0] = b.p[0]; o.p[1] = b.p[1]; b.next(); }
        else { o.p[0] = a.p[0]; o.p[1] = a.p[1]; a.next(); }
        o.p += 2;
    }
    if (a.cur() == ae.cur()) o = cp(b, be, o);
    else o = cp(a, ae, o);
    r.p = o.p;
    return r;
}
