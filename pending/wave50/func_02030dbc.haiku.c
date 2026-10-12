#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_02091a24(uint32_t *p);
extern uint32_t func_0208f42c(void);
extern void func_02056844(void *p);
extern uint32_t data_020adcfc[];

typedef struct Payload {
    uint32_t v[5];
} Payload;

typedef struct Node {
    struct Node *next;
    struct Node *prev;
    Payload p;
} Node;

typedef struct Counter {
    uint32_t count;
    uint32_t pad;
} Counter;

uint32_t *func_02030dbc(Node **out, Counter *cnt, Node **hp, Payload *src)
{
    Node *n;
    Node *h;
    Node **pn;
    Node **pt;
    Node *tmp;

    n = (Node *)func_0205681c(0x1c);
    if (n == 0) {
        func_02091a24(data_020adcfc);
        func_0208f42c();
    }
    pn = &n;
    pt = &tmp;
    if (&(*pn)->p) {
        (*pn)->p = *src;
    }
    *pt = *pn;
    h = *hp;
    *pn = 0;
    h->next->prev = *pt;
    (*pt)->next = h->next;
    h->next = *pt;
    (*pt)->prev = h;
    cnt->count = cnt->count + 1;
    *out = *pt;
    if (*pn) {
        func_02056844(*pn);
    }
    return 0;
}
