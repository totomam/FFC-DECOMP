#include "ffc/types.h"

typedef struct Node {
    struct Node *f0;
    struct Node *f4;
} Node;

Node *func_0204b2fc(Node **head) {
    Node *p = *head;
    Node *n;
    if (p != 0) {
        if (p != p->f0) {
            p->f0->f4 = p->f4;
            p->f4->f0 = p->f0;
            n = p->f4;
        } else {
            n = 0;
        }
        *head = n;
    }
    return p;
}
