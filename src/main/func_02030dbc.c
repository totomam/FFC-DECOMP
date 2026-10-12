/* cflags: -lang c++ */
#include "ffc/types.h"
extern "C" {
void *func_0205681c(uint32_t size);
void func_02091a24(uint32_t *p);
uint32_t func_0208f42c(void);
void func_02056844(void *p);
extern uint32_t data_020adcfc[];
}
struct Payload { uint32_t v[5]; };
struct Node { Node *next; Node *prev; Payload p; };
struct Counter { uint32_t count; Node *head; };
struct Holder {
    uint32_t x[3];
    Node **l;
    Node *n;
    ~Holder() { if (n) func_02056844(n); }
};
extern "C" void func_02030dbc(Node **out, Counter *cnt, Node **hp, Payload *src)
{
    Holder h;
    Node *p = (Node *)func_0205681c(0x1c);
    if (!p) {
        func_02091a24(data_020adcfc);
        func_0208f42c();
    }
    h.l = &cnt->head;
    h.n = p;
    if (&p->p) p->p = *src;
    Node *t = h.n;
    h.n = 0;
    Node *hd = *hp;
    hd->next->prev = t;
    t->next = hd->next;
    hd->next = t;
    t->prev = hd;
    cnt->count++;
    *out = t;
}
