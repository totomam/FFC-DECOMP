#include "ffc/types.h"

extern void func_02056844(void *p);

typedef struct Node Node;
struct Node {
    Node *a;
    Node *b;
};

void func_02025b58(void *ctx, Node *p) {
    if (p->a) {
        func_02025b58(ctx, p->a);
    }
    if (p->b) {
        func_02025b58(ctx, p->b);
    }
    func_02056844(p);
}
