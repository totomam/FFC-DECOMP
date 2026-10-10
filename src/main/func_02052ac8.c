#include "ffc/types.h"

typedef struct Node {
    struct Node *left;
    struct Node *right;
    uint32_t pad8;
    uint32_t keyA;
    uint32_t keyB;
} Node;

Node *func_02052ac8(uint32_t unused, uint32_t *key, Node *node, Node *best) {
    if (node != 0) {
        uint32_t a = key[0];
        do {
            int lt;
            if (node->keyA < a) {
                lt = 1;
            } else if (node->keyA > a) {
                lt = 0;
            } else {
                lt = node->keyB < key[1];
            }
            if (!lt) {
                best = node;
                node = node->left;
            } else {
                node = node->right;
            }
        } while (node != 0);
    }
    return best;
}
