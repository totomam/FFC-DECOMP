#include "ffc/types.h"

typedef struct Node {
    struct Node *n0;
    struct Node *n4;
} Node;

extern int32_t func_02052850(void *a, void *b);

void *func_020524e0(uint32_t *p, void *a, Node **out, uint8_t *f1, uint8_t *f2)
{
    void *cur;
    Node *n;
    int32_t found;

    *out = 0;
    cur = &p[1];
    n = (Node *)p[1];
    *f1 = 1;
    *f2 = 1;
    while (n != 0) {
        cur = n;
        found = func_02052850(a, (uint8_t *)n + 0xc) < 0;
        if (found) {
            n = n->n0;
            *f1 = 1;
        } else {
            *out = n;
            n = n->n4;
            *f1 = 0;
            *f2 = 0;
        }
    }
    return cur;
}
