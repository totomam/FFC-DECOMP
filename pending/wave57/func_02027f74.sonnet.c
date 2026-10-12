#include "ffc/types.h"

extern int32_t func_02035cb0(void *a, void *b);

typedef struct Key {
    uint32_t k0;
    uint32_t k1;
    uint8_t k2;
} Key;

typedef struct Node {
    struct Node *left;
    struct Node *right;
    uint8_t pad[4];
    uint32_t k0;
    uint32_t k1;
    uint8_t k2;
} Node;

static inline int lt_nk(Node *n, Key *k)
{
    if ((void *)k == (void *)&n->k0) return 0;
    if (n->k0 < k->k0) return 1;
    if (n->k0 > k->k0) return 0;
    if (n->k1 < k->k1) return 1;
    if (n->k1 > k->k1) return 0;
    if (n->k2 < k->k2) return 1;
    return 0;
}

static inline int lt_kn(Key *k, Node *n)
{
    if ((void *)&n->k0 == (void *)k) return 0;
    if (k->k0 < n->k0) return 1;
    if (k->k0 > n->k0) return 0;
    if (k->k1 < n->k1) return 1;
    if (k->k1 > n->k1) return 0;
    if (k->k2 < n->k2) return 1;
    return 0;
}

Node *func_02027f74(void *p0, Key *key, Node *root, Node *best)
{
    Node *n = root;
    while (n != 0) {
        int r;
        if (lt_nk(n, key)) {
            r = 1;
        } else if (lt_kn(key, n)) {
            r = 0;
        } else if (func_02035cb0((uint8_t *)&n->k0 + 0xc, (uint8_t *)key + 0xc)) {
            r = 1;
        } else {
            func_02035cb0((uint8_t *)key + 0xc, (uint8_t *)&n->k0 + 0xc);
            r = 0;
        }
        if (r == 0) {
            best = n;
            n = n->left;
        } else {
            n = n->right;
        }
    }
    return best;
}
