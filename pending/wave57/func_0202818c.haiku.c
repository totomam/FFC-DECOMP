#include "ffc/types.h"

typedef struct Key { uint32_t a; uint32_t b; uint8_t c; } Key;
typedef struct Pair { Key lo; Key hi; } Pair;
typedef struct Node { struct Node *l; struct Node *r; uint32_t x; Pair p; } Node;
typedef struct Tree { uint32_t h; Node *root; } Tree;

extern int func_02035cb0(void *a, void *b);

static inline int klt(Key *x, Key *y) {
    if (x->a < y->a) return 1;
    if (x->a > y->a) return 0;
    if (x->b < y->b) return 1;
    if (x->b > y->b) return 0;
    return x->c < y->c;
}

void *func_0202818c(Tree *t, Pair *key, Node **out, uint8_t *flag, uint8_t *flag2) {
    Node *n = t->root;
    void *ret = &t->root;
    Key *kh = &key->hi;
    *out = 0;
    *flag = 1;
    *flag2 = 1;
    while (n != 0) {
        Pair *np = &n->p;
        int c1 = 0;
        int c2 = 0;
        ret = n;
        if (np != key) {
            c1 = klt(&key->lo, &np->lo);
        }
        if (c1 != 0) {
            n = n->l;
            *flag = 1;
            continue;
        }
        if (np != key) {
            c2 = klt(&np->lo, &key->lo);
        }
        if (c2 != 0) {
            *out = n;
            n = n->r;
            *flag = 0;
            *flag2 = 0;
            continue;
        }
        if (func_02035cb0(kh, &np->hi) != 0) {
            n = n->l;
            *flag = 1;
        } else {
            func_02035cb0(&np->hi, kh);
            *out = n;
            n = n->r;
            *flag = 0;
            *flag2 = 0;
        }
    }
    return ret;
}
