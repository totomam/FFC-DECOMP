#include "ffc/types.h"

typedef struct Key { uint32_t a; uint32_t b; uint8_t c; } Key;
typedef struct Node { uint32_t hdr[3]; Key k; } Node;
typedef struct Tree { uint32_t hdr; Node *root; } Tree;

extern Node *func_02027f74(Tree *t, Key *key, Node *root, Node **end);
extern int func_02035cb0(void *a, void *b);

#define KL(x, y, r, eq) r = (eq) ? 0 : ((x)->a < (y)->a) ? 1 : ((x)->a > (y)->a) ? 0 : \
     ((x)->b < (y)->b) ? 1 : ((x)->b > (y)->b) ? 0 : ((x)->c < (y)->c)

void func_02027e9c(Node **out, Tree *t, Key *key) {
    Node *n = func_02027f74(t, key, t->root, &t->root);
    int r;
    if (n == (Node *)&t->root) r = 1; else r = 0;
    if (!r) {
        KL(key, &n->k, r, &n->k == key);
        if (r) r = 1;
        else {
            KL(&n->k, key, r, key == &n->k);
            if (r) r = 0;
            else if (func_02035cb0(key + 1, &n->k + 1)) r = 1;
            else { func_02035cb0(&n->k + 1, key + 1); r = 0; }
        }
    }
    if (r) *out = (Node *)&t->root; else *out = n;
}
