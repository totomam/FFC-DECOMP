#include "ffc/types.h"

typedef struct Node {
    struct Node *child;
    struct Node *next;
    uint8_t pad[4];
    uint8_t key[6];
} Node;

Node *func_ov007_021a865c(void *unused, const uint8_t *key, Node *node, Node *best) {
    uint32_t i;
    int res;
    while (node != 0) {
        for (i = 0; i < 6; i++) {
            if (node->key[i] < key[i]) {
                res = 1;
                goto decide;
            }
            if (node->key[i] > key[i]) {
                res = 0;
                goto decide;
            }
        }
        res = 0;
    decide:
        if (res == 0) {
            best = node;
            node = node->child;
            continue;
        }
        node = node->next;
    }
    return best;
}
