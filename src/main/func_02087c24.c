#include "ffc/types.h"

typedef struct Node {
    struct Node *a;
    struct Node *b;
} Node;

Node *func_02087c24(void *unused, Node *p) {
    if (p->b != 0) {
        p->b->a = p->a;
    }
    if (p->a == 0) {
        return p->b;
    }
    p->a->b = p->b;
}
