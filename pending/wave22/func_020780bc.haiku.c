#include "ffc/types.h"

struct Node {
    uint32_t w0;
    uint32_t w4;
    struct Node *w8;
    struct Node *wc;
};

struct List {
    uint32_t f0;
    struct Node *f4;
    struct Node *f8;
};

void func_020780bc(uint32_t *s)
{
    struct Node *n;
    struct List *l = (struct List *)(s + 9);
    n = l->f8;
    if (n != 0) {
        do {
            n->w8 = (struct Node *)s[7];
            n = n->wc;
        } while (n != 0);
    }
    l->f4 = (struct Node *)s[7];
}
