#include "ffc/types.h"

extern void func_02056844(void *p);

typedef struct Node Node;
struct Node {
    Node *a;
    Node *b;
};

void func_0207095c(void *ctx, Node *p) {
    if (p->a) {
        func_0207095c(ctx, p->a);
    }
    if (p->b) {
        func_0207095c(ctx, p->b);
    }
    func_02056844(p);
}
