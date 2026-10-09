#include "ffc/types.h"

extern void func_02056844(void *p);

typedef struct Node Node;
struct Node {
    Node *a;
    Node *b;
};

void func_0206a630(void *ctx, Node *p) {
    if (p->a) {
        func_0206a630(ctx, p->a);
    }
    if (p->b) {
        func_0206a630(ctx, p->b);
    }
    func_02056844(p);
}
