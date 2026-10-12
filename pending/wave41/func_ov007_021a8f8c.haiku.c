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

void *func_ov007_021a8f8c(Map *p, uint8_t *key, Node **out, uint8_t *a, uint8_t *b)
{
    Node *n;
    void *ret;
    int i;

    *out = 0;
    n = p->root;
    ret = &p->root;
    *a = 1;
    *b = 1;
    if (n != 0) {
        ret = n;
        do {
            for (i = 0; i < 6; i++) {
                if (key[i] != n->key[i]) {
                    break;
                }
            }
            if (i < 6 && key[i] < n->key[i]) {
                n = n->left;
                *a = 1;
            } else {
                *out = n;
                n = n->right;
                *a = 0;
                *b = 0;
            }
        } while (n != 0);
    }
    return ret;
}
