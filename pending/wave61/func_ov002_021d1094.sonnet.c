#include "ffc/types.h"
typedef struct { uint32_t d; uint32_t *c; } P;
typedef struct { uint32_t n; uint32_t z; uint32_t d; } Cur;
typedef struct { uint32_t d; uint32_t n; } V;
typedef struct { uint32_t a; uint32_t b; } R;
extern int func_0209a76c(int a, int b);
extern void func_ov002_021d2774(V *v, int n);
extern void func_ov002_021d10fc(uint32_t a, uint32_t b, P p, P q, uint32_t *r);
extern void func_02056858(uint32_t d);
void func_ov002_021d1094(R r, ...)
{
    Cur cur; P p; P q; V v; int n;
    n = func_0209a76c(r.b - r.a, 0x30);
    if (n <= 0x14) n = 0;
    func_ov002_021d2774(&v, n);
    uint32_t d = v.d, sz = v.n;
    cur.z = 0;
    q.d = d + sz * 0x30;
    cur.n = sz;
    q.c = &cur.n;
    cur.d = d;
    p.c = &cur.n;
    p.d = d;
    { uint32_t *pa = &r.a, *pb = &r.b; func_ov002_021d10fc(*pa, *pb, p, q, (uint32_t*)(&r + 1)); }
    func_02056858(cur.d);
}
