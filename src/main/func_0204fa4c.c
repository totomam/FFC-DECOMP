#include "ffc/types.h"

extern void func_02056844(void *p);

typedef struct Node Node;
struct Node {
    Node *a;
    Node *b;
};

void func_0204fa4c(void *ctx, Node *p) {
    if (p->a) {
        func_0204fa4c(ctx, p->a);
    }
    if (p->b) {
        func_0204fa4c(ctx, p->b);
    }
    func_02056844(p);
}
