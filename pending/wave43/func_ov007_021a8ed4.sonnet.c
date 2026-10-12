/* cflags: -lang c++ */
#include "ffc/types.h"
extern "C" {
extern void func_02091a24(void *msg);
extern uint32_t func_0208f42c(void);
extern void *func_0205681c(uint32_t size);
extern void func_020258b4(void *node, void *l);
extern void func_02056844(void *mem);
extern uint8_t data_ov007_021c4788[];
extern uint8_t data_ov007_021c4600[];
}
struct Six { uint8_t b[6]; };
struct Node { uint32_t a; uint32_t b; void *c[1]; uint8_t d[6]; };
struct Head { uint32_t count; void *list; Node *last; };
struct Guard {
    int x, y, z; void **lp; Node *n;
    Guard(Node *x, void **l) : lp(l), n(x) {}
    ~Guard() { if (n) func_02056844(n); }
};
extern "C" Node *func_ov007_021a8ed4(Head *p, Node **link, int at_tail, int flag2, uint8_t *src)
{
    if (p->count == 0xffffffff) {
        func_02091a24(data_ov007_021c4788);
        func_0208f42c();
    }
    Node *m = (Node *)func_0205681c(0x14);
    if (m == 0) {
        func_02091a24(data_ov007_021c4600);
        func_0208f42c();
    }
    Guard g(m, &p->list);
    uint8_t *dst = m->d;
    if (dst != 0) {
        *(Six *)dst = *(Six *)src;
    }
    Node *n = g.n;
    n->b = 0;
    g.n = 0;
    n->a = 0;
    void **cp = n->c;
    if (cp) *cp = link;
    if (at_tail) *link = n; else link[1] = n;
    p->count++;
    func_020258b4(n, p->list);
    if (flag2) p->last = n;
    return n;
}
