#include "ffc/types.h"

typedef struct Node {
    struct Node *f0;
    struct Node *f4;
    uint32_t f8;
    uint32_t key;
} Node;

extern int func_02052850(void *p, uint32_t v);

Node *func_02052430(void *u, uint32_t v, Node *n, Node *def)
{
    Node *best = def;
    int one = 1;
    while (n != 0) {
        int c = func_02052850(&n->key, v) < 0 ? one : 0;
        if (c == 0) {
            best = n;
            n = n->f0;
        } else {
            n = n->f4;
        }
    }
    return best;
}
