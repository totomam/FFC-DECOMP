#include "ffc/types.h"

typedef struct Node {
    struct Node *c0;
    struct Node *c1;
    uint32_t pad;
    uint32_t key;
} Node;

typedef struct Head {
    uint32_t pad;
    Node *root;
} Head;

typedef struct Pair {
    void *a;
    void *b;
} Pair;

extern uint32_t func_02069b74(Head *h, uint32_t *k, Node *c1, void *cand, Node *c0);
extern void *func_02069b90(Head *h, uint32_t *k, Node *c0, Node *n);

void func_02069b18(Pair *out, Head *h, uint32_t *k)
{
    Node *n = h->root;
    void *cand = &h->root;

    while (n != 0) {
        if (*k < n->key) {
            cand = n;
            n = n->c0;
        } else if (n->key < *k) {
            n = n->c1;
        } else {
            uint32_t r = func_02069b74(h, k, n->c1, cand, n->c0);
            void *p = func_02069b90(h, k, n->c0, n);
            out->a = p;
            out->b = (void *)r;
            return;
        }
    }
    out->a = cand;
    out->b = cand;
}
