#include "ffc/types.h"

typedef struct Node {
    struct Node *left;
    struct Node *right;
    uint32_t pad;
    uint8_t key[6];
} Node;

typedef struct Map {
    uint32_t pad;
    Node *root;
} Map;

static inline int less(const uint8_t *x, const uint8_t *y)
{
    uint32_t i;
    for (i = 0; i < 6; i++) {
        if (x[i] < y[i]) return 1;
        if (x[i] > y[i]) return 0;
    }
    return 0;
}

void *func_ov007_021a8f8c(Map *p, uint8_t *key, Node **out, uint8_t *a, uint8_t *b)
{
    Node *n;
    void *ret;

    *out = 0;
    ret = &p->root;
    n = p->root;
    *a = 1;
    *b = 1;
    while (n != 0) {
        ret = n;
        if (less(key, n->key)) {
            n = n->left;
            *a = 1;
        } else {
            *out = n;
            n = n->right;
            *a = 0;
            *b = 0;
        }
    }
    return ret;
}
