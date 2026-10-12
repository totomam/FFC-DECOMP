/* cflags: -lang c++ */
#include "ffc/types.h"
extern "C" {
extern void *func_0205681c(uint32_t size);
extern void func_02091a24(void *p);
extern uint32_t func_0208f42c(void);
extern void func_02056844(void *p);
extern uint32_t data_020ad780[];
}
struct Node { Node *next; Node *prev; uint32_t val; };
struct Holder {
    Node *p;
    Holder(Node *n) : p(n) {}
    ~Holder() { if (p) func_02056844(p); }
};
extern "C" void func_02023514(Node **out, uint32_t *count, Node **list, uint32_t *val)
{
    Node *n = (Node *)func_0205681c(12);
    if (n == 0) {
        func_02091a24(data_020ad780);
        func_0208f42c();
    }
    Holder h(n);
    Node **end = (Node **)((char*)count + 4);
    if (&n->val) n->val = *val;
    Node *l = *list;
    Node *t = h.p;
    t->next = l->next;
    l->next->prev = t;
    l->next = t;
    t->prev = l;
    h.p = 0;
    (*count)++;
    *out = t;
}
