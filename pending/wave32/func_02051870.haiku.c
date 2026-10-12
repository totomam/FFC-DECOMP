#include "ffc/types.h"

typedef struct Node {
    struct Node *a;
    struct Node *b;
    uint32_t pad;
    uint16_t key;
} Node;

Node *func_02051870(Node *p, uint16_t *k, Node **out, uint8_t *f1, uint8_t *f2) {
    Node *r;
    Node *c;

    *out = 0;
    r = (Node *)&p->b;
    c = p->b;
    *f1 = 1;
    *f2 = 1;
    while (c != 0) {
        r = c;
        if (*k < c->key) {
            c = c->a;
            *f1 = 1;
        } else {
            *out = c;
            c = c->b;
            *f1 = 0;
            *f2 = 0;
        }
    }
    return r;
}
