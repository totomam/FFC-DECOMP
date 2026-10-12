#include "ffc/types.h"
typedef struct Elem { uint32_t w0,w1,w2,w3,w4,w5; } Elem;
typedef struct Q { Elem *a; uint32_t b; Elem * volatile cur; uint32_t d; } Q;
extern uint32_t func_02036cd8(const void *object);
extern uint32_t func_02036cfc(const void *object);
extern uint32_t func_02036ce0(const void *object);

#define CP(dst,src) do { Elem *D_=(dst); Elem *S_=(src); D_->w0=S_->w0; D_->w1=S_->w1; D_->w2=S_->w2; D_->w3=S_->w3; D_->w4=S_->w4; D_->w5=S_->w5; } while(0)

Elem *func_0201db38(Elem *p0, Elem *p1, Q q, Elem *r)
{
    int t;
    Elem * volatile sa;
    if (p0 == p1) {
        struct { Elem * volatile cur; uint32_t d; Elem *a; uint32_t b; } l;
        Elem *cu = q.cur; Elem *aa = q.a;
        l.cur = cu; l.d = q.d; l.a = aa; l.b = q.b;
        if (cu != aa) { Elem *c; do { c = l.cur - 1; l.cur = c; r--; r->w0 = c->w0; r->w1=c->w1; r->w2=c->w2; r->w3=c->w3; r->w4=c->w4; r->w5=c->w5; } while (c != aa); }
        return r;
    }
    sa = q.a;
    if (q.a == q.cur) {
        while (p1 > p0) { p1--; r--; CP(r,p1); }
        return r;
    }
    p1--;
    q.cur = q.cur - 1;
    for (;;) {
        if (func_02036cd8(q.cur) && !func_02036cd8(p1)) t = 1;
        else if (func_02036cd8(p1) && !func_02036cd8(q.cur)) t = 0;
        else if (func_02036cfc(q.cur) < func_02036cfc(p1)) t = 1;
        else if (func_02036cfc(q.cur) > func_02036cfc(p1)) t = 0;
        else if (func_02036cfc(q.cur) == 0) t = 0;
        else t = func_02036ce0(q.cur) < func_02036ce0(p1);
        if (t) {
            r--; CP(r,p1);
            if (p0 == p1) {
                struct { Elem * volatile cur; uint32_t d; Elem *a; uint32_t b; } l;
                Elem *c = q.cur + 1;
                q.cur = c;
                l.cur = c; l.d = q.d; l.a = q.a; l.b = q.b;
                if (c != q.a) { do { c = l.cur - 1; l.cur = c; r--; r->w0 = c->w0; r->w1=c->w1; r->w2=c->w2; r->w3=c->w3; r->w4=c->w4; r->w5=c->w5; } while (c != q.a); }
                return r;
            }
            p1--;
        } else {
            r--; CP(r,q.cur);
            if (sa == q.cur) {
                p1++;
                while (p1 > p0) { p1--; r--; CP(r,p1); }
                return r;
            }
            q.cur = q.cur - 1;
        }
    }
}
