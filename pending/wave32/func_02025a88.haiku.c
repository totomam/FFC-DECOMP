#include "ffc/types.h"

typedef struct Node Node;
struct Node {
    Node *left;
    Node *right;
    uint32_t parent;
};

void func_02025a88(Node *x, Node **root)
{
    Node *y = x->left;
    if (*root == x) {
        *root = y;
    }
    x->left = y->right;
    if (y->right != 0) {
        y->right->parent = (y->right->parent & 1) | (uint32_t)x;
    }
    y->parent = (x->parent & ~1u) | (y->parent & 1);
    {
        Node *p = (Node *)(x->parent & ~1u);
        if (x == p->left) {
            p->left = y;
        } else {
            p->right = y;
        }
    }
    y->right = x;
    x->parent = (x->parent & 1) | (uint32_t)y;
}
