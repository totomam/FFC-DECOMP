#include "ffc/types.h"

extern void func_02091a24(void *);
extern uint32_t func_0208f42c(void);
extern void *func_0205681c(uint32_t);
extern void func_020258b4(void *, void *);
extern void func_02056844(void *);
extern uint32_t data_020b0488[];
extern uint32_t data_020b0464[];

typedef struct Node {
    void *next;
    void *prev;
    void *val;
    uint16_t f;
} Node;

typedef struct List {
    uint32_t count;
    void *head;
    void *last;
} List;

typedef struct Links {
    void *a;
    void *b;
} Links;

void *func_0205161c(List *l, Links *out, int tailflag, int setlast, uint16_t *src)
{
    Node *n;
    Node * volatile tmp;
    void ** volatile hp;
    uint16_t *pf;
    void **pv;

    if (l->count == 0xffffffff) {
        func_02091a24(data_020b0488);
        func_0208f42c();
    }
    n = func_0205681c(16);
    if (n == 0) {
        func_02091a24(data_020b0464);
        func_0208f42c();
    }
    hp = &l->head;
    tmp = n;
    pf = &n->f;
    if (pf) {
        *pf = *src;
    }
    n = tmp;
    n->next = 0;
    n->prev = 0;
    tmp = 0;
    pv = &n->val;
    if (pv) {
        *pv = out;
    }
    if (tailflag) {
        out->a = n;
    } else {
        out->b = n;
    }
    l->count++;
    func_020258b4(n, *hp);
    if (setlast) {
        l->last = n;
    }
    if (tmp) {
        func_02056844(tmp);
    }
    return n;
}
