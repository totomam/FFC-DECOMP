#include "ffc/types.h"
typedef struct N { struct N *next; void *p; } N;
extern uint32_t data_020b0d18;
extern void func_0208763c(void *);
extern void func_02056858(void *);
extern void func_02057de8(void *, void *);
extern void func_02087678(void *);
typedef struct O { uint32_t *vt; uint32_t a, b, c; N *l1; N *l2; N *l3; uint32_t d; uint8_t sub[1]; } O;
O *func_02057c6c(O *t)
{
    N *n, *nx; uint8_t *s = t->sub;
    t->vt = &data_020b0d18;
    func_0208763c(s);
    n = t->l3;
    while (n) {
        func_02056858(n->p);
        nx = n->next;
        func_02057de8(t, n);
        n = nx;
    }
    n = t->l1;
    while (n) { nx = n->next; func_02057de8(t, n); n = nx; }
    n = t->l2;
    while (n) { nx = n->next; func_02057de8(t, n); n = nx; }
    func_02087678(s);
    return t;
}
