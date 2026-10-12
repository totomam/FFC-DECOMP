#include "ffc/types.h"

typedef struct Node {
    struct Node *a;
    struct Node *b;
    uint32_t c;
} Node;

void func_0202a9ac(Node **pp)
{
    Node *n = *pp;
    if (n->b != 0) {
        Node *m = n->b;
        while (m->a != 0) {
            m = m->a;
        }
        *pp = m;
        return;
    }
    {
        Node *t = (Node *)(n->c & ~1u);
        if (n != t->a) {
            do {
                *pp = t;
                t = (Node *)(t->c & ~1u);
            } while (*pp != t->a);
        }
        *pp = t;
    }
}
