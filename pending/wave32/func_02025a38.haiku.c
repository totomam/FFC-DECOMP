#include "ffc/types.h"

typedef struct Node {
    struct Node *f0;
    struct Node *f4;
    uint32_t f8;
} Node;

void func_02025a38(Node *a, Node **root) {
    Node *r2 = a->f4;
    if (*root == a) {
        *root = r2;
    }
    a->f4 = r2->f0;
    Node *r4 = r2->f0;
    if (r4 != 0) {
        r4->f8 = (r4->f8 & 1) | (uint32_t)a;
    }
    uint32_t t = a->f8;
    r2->f8 = (t & ~1u) | (r2->f8 & 1);
    Node *p = (Node *)(a->f8 & ~1u);
    if (a == p->f0) {
        p->f0 = r2;
    } else {
        p->f4 = r2;
    }
    r2->f0 = a;
    a->f8 = (a->f8 & 1) | (uint32_t)r2;
}
