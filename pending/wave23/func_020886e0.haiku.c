#include "ffc/types.h"

typedef struct Node {
    uint32_t pad[5];
    struct Node *n14;
    struct Node *n18;
} Node;

typedef struct Head {
    uint32_t pad[3];
    Node *h0c;
    Node *h10;
} Head;

extern Head data_02141874;

void func_020886e0(Node *p) {
    if (p == 0) {
        return;
    }
    Node *b = p->n14;
    Node *a = p->n18;
    if (a != 0) {
        a->n14 = b;
    } else {
        data_02141874.h10 = b;
    }
    if (b != 0) {
        b->n18 = a;
        return;
    }
    data_02141874.h0c = a;
}
