#include "ffc/types.h"

typedef struct Node {
    struct Node *left;
    struct Node *right;
    uint32_t unk8;
    uint8_t key;
} Node;

void *func_02024e74(Node *head, uint8_t *key, Node **out, uint8_t *goLeft, uint8_t *found) {
    Node *cur;
    void *ret;

    *out = 0;
    ret = (uint8_t *)head + 4;
    cur = head->right;
    *goLeft = 1;
    *found = 1;
    while (cur != 0) {
        ret = cur;
        if (*key < cur->key) {
            cur = cur->left;
            *goLeft = 1;
        } else {
            *out = cur;
            cur = cur->right;
            *goLeft = 0;
            *found = 0;
        }
    }
    return ret;
}
