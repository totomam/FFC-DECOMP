#include "ffc/types.h"

typedef struct Ctx {
    uint32_t key;
    void *found;
} Ctx;

typedef struct Node {
    uint32_t w0;
    uint32_t w4;
    uint32_t *p8;
    uint32_t *pc;
} Node;

int func_ov001_0217caa0(void *unused, Node *n, Ctx *c)
{
    if (n->p8 != 0 && c->key == *n->p8) {
        c->found = n;
        return 0;
    }
    if (n->pc != 0 && c->key == *n->pc) {
        c->found = n;
        return 0;
    }
    return 1;
}
