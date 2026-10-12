#include "ffc/types.h"

typedef struct Node {
    struct Node *f0;
    struct Node *f4;
    uint32_t f8;
} Node;

void func_02051768(Node **p) {
    Node *x = *p;
    Node *n = x->f0;
    if (n != 0) {
        Node *q = n->f4;
        while (q != 0) {
            n = q;
            q = q->f4;
        }
        *p = n;
        return;
    }
    n = (Node *)(x->f8 & ~1u);
    if (x == n->f0) {
        do {
            *p = n;
            n = (Node *)(n->f8 & ~1u);
        } while (*p == n->f0);
    }
    *p = n;
}
