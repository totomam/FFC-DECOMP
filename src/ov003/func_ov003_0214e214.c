/* cflags: -lang c++ */
#include "ffc/types.h"
extern "C" {
extern char data_ov003_021799b4[], data_ov003_02179700[];
extern void func_02091a24(void*);
extern uint32_t func_0208f42c(void);
extern void* func_0205681c(uint32_t);
extern void func_020258b4(void*, int);
extern void func_02056844(void*);
}
struct P { uint32_t a, b; };
struct N { N* p0; N* p4; N* p8; P v; };
struct L { int cnt; int x; N* head; };
struct G { int pad[3]; void* o; void* p; G(void* a, void* b) : o(b), p(a) {} ~G() { if (p) func_02056844(p); } };
extern "C" N* func_ov003_0214e214(L* l, N* pos, bool before, bool setHead, P* v) {
    if (l->cnt == -1) { func_02091a24(data_ov003_021799b4); func_0208f42c(); }
    N* t = (N*)func_0205681c(0x14);
    if (t == 0) { func_02091a24(data_ov003_02179700); func_0208f42c(); }
    G g(t, &l->x);
    P* d = &((N*)g.p)->v;
    if (d != 0) { *d = *v; }
    N* n;
    n = (N*)g.p;
    n->p4 = 0; g.p = 0; n->p0 = 0;
    N** q = &n->p8; if (q != 0) *q = pos;
    if (before) pos->p0 = n; else pos->p4 = n;
    l->cnt++;
    func_020258b4(n, l->x);
    if (setHead) l->head = n;
    return n;
}
