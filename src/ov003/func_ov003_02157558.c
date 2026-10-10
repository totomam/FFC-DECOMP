#include "ffc/types.h"

typedef struct Node {
    struct Node *left;
    struct Node *right;
    uint32_t pad;
    uint32_t key;
} Node;

Node *func_ov003_02157558(void *unused, uint32_t *k, Node *n, Node *best) {
    if (n != 0) {
        do {
            if (n->key >= *k) {
                best = n;
                n = n->left;
            } else {
                n = n->right;
            }
        } while (n != 0);
    }
    return best;
}
