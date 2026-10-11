#include "ffc/types.h"

typedef struct Node {
    struct Node *left;
    struct Node *right;
    uint32_t pad;
    uint8_t key;
} Node;

void *func_02024f2c(void *unused, const uint8_t *k, Node *node, Node *best)
{
    if (node != 0) {
        uint8_t key = *k;
        do {
            if (node->key >= key) {
                best = node;
                node = node->left;
            } else {
                node = node->right;
            }
        } while (node != 0);
    }
    return best;
}
