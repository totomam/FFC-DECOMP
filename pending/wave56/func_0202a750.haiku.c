#include "ffc/types.h"

extern uint8_t data_020ad8f4[];
extern uint8_t data_020ad8d4[];
extern void func_02091a24(void *msg);
extern void func_0208f42c(void);
extern void *func_0205681c(uint32_t size);
extern void func_02052be0(void);
extern void func_02052d10(uint32_t a, uint32_t b);
extern void func_020258b4(void *node, void *head);
extern void func_02056844(void *p);

typedef struct Data {
    uint32_t a;
    uint32_t b;
    uint8_t c;
    uint32_t d;
    uint32_t e[7];
} Data;

typedef struct Node {
    struct Node *next;
    struct Node *prev;
    void *link;
    Data data;
} Node;

typedef struct List {
    uint32_t count;
    Node *head;
    Node *tail0;
    Node *tail;
} List;

typedef struct Pair {
    Node *first;
    Node *second;
} Pair;

typedef struct Tail7 {
    uint32_t w[7];
} Tail7;

Node *func_0202a750(List *p, Pair *r7, uint32_t f2, uint32_t f3, Data *src)
{
    Node *n;
    Node *saved;
    uint32_t sel;
    uint32_t tsel;

    sel = f2;
    tsel = f3;
    if (p->count == (uint32_t)-1) {
        func_02091a24(data_020ad8f4);
        func_0208f42c();
    }

    n = (Node *)func_0205681c(0x38);
    if (n == 0) {
        func_02091a24(data_020ad8d4);
        func_0208f42c();
    }

    saved = n;
    if (&n->data != 0) {
        Data *d = &n->data;
        d->a = src->a;
        d->b = src->b;
        d->c = src->c;
        if (d->a != 0) {
            func_02052be0();
            if (d->c != 0) {
                func_02052d10(d->a, d->b);
            }
        }
        d->d = src->d;
        *(Tail7 *)d->e = *(Tail7 *)src->e;
    }

    n = saved;
    n->prev = 0;
    saved = 0;
    n->next = 0;
    if (&n->link != 0) {
        n->link = r7;
    }

    if (sel != 0) {
        r7->first = n;
    } else {
        r7->second = n;
    }

    p->count = p->count + 1;
    func_020258b4(n, p->head);

    if (tsel != 0) {
        p->tail = n;
    }

    if (saved != 0) {
        func_02056844(saved);
    }
    return n;
}
