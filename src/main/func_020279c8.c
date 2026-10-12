#include "ffc/types.h"

typedef struct Key {
    uint32_t a;
    uint32_t b;
    uint8_t c;
} Key;

typedef struct Node {
    struct Node *l;
    struct Node *r;
    uint32_t unk8;
    Key key;
} Node;

Node *func_020279c8(int unused, Key *key, Node *node, Node *best) {
    while (node != 0) {
        int right;
        if (key == &node->key) {
            right = 0;
        } else if (node->key.a < key->a) {
            right = 1;
        } else if (node->key.a > key->a) {
            right = 0;
        } else if (node->key.b < key->b) {
            right = 1;
        } else if (node->key.b > key->b) {
            right = 0;
        } else if (node->key.c < key->c) {
            right = 1;
        } else {
            right = 0;
        }
        if (!right) {
            best = node;
            node = node->l;
        } else {
            node = node->r;
        }
    }
    return best;
}
