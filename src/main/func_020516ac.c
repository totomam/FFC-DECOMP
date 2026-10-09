#include "ffc/types.h"

extern void func_02056844(void *p);

typedef struct Node Node;
struct Node {
    Node *a;
    Node *b;
};

void func_020516ac(void *ctx, Node *p) {
    if (p->a) {
        func_020516ac(ctx, p->a);
    }
    if (p->b) {
        func_020516ac(ctx, p->b);
    }
    func_02056844(p);
}
