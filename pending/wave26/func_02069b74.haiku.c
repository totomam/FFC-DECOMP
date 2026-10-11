#include "ffc/types.h"

typedef struct Node {
    struct Node *left;
    struct Node *right;
    uint32_t pad;
    uint32_t key;
} Node;

Node *func_02069b74(int unused, uint32_t *keyp, Node *n, Node *best) {
    uint32_t k;
    if (n != 0) {
        k = *keyp;
        do {
            if (k < n->key) {
                best = n;
                n = n->left;
            } else {
                n = n->right;
            }
        } while (n != 0);
    }
    return best;
}
