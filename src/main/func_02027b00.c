#include "ffc/types.h"

typedef struct Key {
    uint32_t k0;
    uint32_t k1;
    uint8_t k2;
} Key;

typedef struct Node {
    struct Node *left;
    struct Node *right;
    uint32_t pad;
    Key key;
} Node;

void *func_02027b00(Node *root, Key *key, Node **out, uint8_t *f1, uint8_t *f2)
{
    Node *p;
    void *ret;
    int cond;

    *out = 0;
    ret = &root->right;
    p = root->right;
    *f1 = 1;
    *f2 = 1;
    while (p != 0) {
        ret = p;
        if ((void *)&p->key == (void *)key) {
            cond = 0;
        } else if (key->k0 < p->key.k0) {
            cond = 1;
        } else if (key->k0 > p->key.k0) {
            cond = 0;
        } else if (key->k1 < p->key.k1) {
            cond = 1;
        } else if (key->k1 > p->key.k1) {
            cond = 0;
        } else if (key->k2 < p->key.k2) {
            cond = 1;
        } else {
            cond = 0;
        }

        if (cond) {
            p = p->left;
            *f1 = 1;
        } else {
            *out = p;
            p = p->right;
            *f1 = 0;
            *f2 = 0;
        }
    }
    return ret;
}
