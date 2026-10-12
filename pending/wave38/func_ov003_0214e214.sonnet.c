#include "ffc/types.h"

extern void func_02091a24(void *);
extern uint32_t func_0208f42c(void);
extern void *func_0205681c(uint32_t);
extern void func_020258b4(void *, void *);
extern void func_02056844(void *);
extern uint8_t data_ov003_021799b4[];
extern uint8_t data_ov003_02179700[];

typedef struct Node {
    uint32_t f0;
    uint32_t f4;
    void *f8;
    uint32_t fc[2];
} Node;

typedef struct List {
    int32_t count;
    void *head;
    Node *tail;
} List;

typedef struct Pair {
    Node *first;
    Node *second;
} Pair;

uint32_t func_ov003_0214e214(List *p, Pair *b, int32_t flag1, int32_t flag2, uint32_t *src)
{
    Node *n;
    uint32_t *d;
    void **e;
    Node *t;
    volatile struct { int a,b,c; void **hp; Node *tmp; } L;

    if (p->count == -1) {
        func_02091a24(data_ov003_021799b4);
        func_0208f42c();
    }
    n = func_0205681c(0x14);
    if (n == 0) {
        func_02091a24(data_ov003_02179700);
        func_0208f42c();
    }
    L.tmp = n;
    L.hp = &p->head;
    d = n->fc;
    if (d != 0) {
        d[0] = src[0];
        d[1] = src[1];
    }
    n = L.tmp;
    n->f4 = 0;
    L.tmp = 0;
    n->f0 = 0;
    e = &n->f8;
    if (e != 0) {
        *e = b;
    }
    if (flag1 != 0) {
        b->first = n;
    } else {
        b->second = n;
    }
    p->count++;
    func_020258b4(n, p->head);
    if (flag2 != 0) {
        p->tail = n;
    }
    t = L.tmp;
    if (t != 0) {
        func_02056844(t);
    }
    return (uint32_t)n;
}
