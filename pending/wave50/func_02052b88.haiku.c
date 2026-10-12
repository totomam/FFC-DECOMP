#include "ffc/types.h"

typedef struct Node {
    struct Node *left;
    struct Node *right;
    uint32_t pad;
    uint32_t a;
    uint32_t b;
} Node;

void *func_02052b88(Node *n, uint32_t *k, Node **parent, uint8_t *f1, uint8_t *f2) {
    void *ret;
    Node *cur;
    int go;
    *parent = 0;
    ret = &n->right;
    cur = n->right;
    *f1 = 1;
    *f2 = 1;
    while (cur != 0) {
        ret = cur;
        if (k[0] < cur->a) {
            go = 1;
        } else if (k[0] > cur->a) {
            go = 0;
        } else {
            go = (k[1] < cur->b);
        }
        if (go) {
            cur = cur->left;
            *f1 = 1;
        } else {
            *parent = cur;
            cur = cur->right;
            *f1 = 0;
            *f2 = 0;
        }
    }
    return ret;
}
