#include "ffc/types.h"

extern void func_02056844(void *p);

typedef struct Node {
    struct Node *a;
    struct Node *b;
} Node;

void func_020235ac(Node **out, int32_t *count, Node **py, Node **px) {
    Node *x = *px;
    Node *y = *py;
    if (y == x) {
        *out = x;
        return;
    }
    Node *p = x->a;
    Node *q = y->a;
    q->b = p->b;
    p->b->a = y->a;
    while (*py != *px) {
        Node *cur = *py;
        *py = cur->b;
        func_02056844(cur);
        (*count)--;
    }
    *out = *px;
}
