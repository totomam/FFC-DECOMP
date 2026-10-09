#include "ffc/types.h"

extern void func_02056844(void *p);

typedef struct Node Node;
struct Node {
    Node *a;
    Node *b;
};

void func_ov003_0214e2a8(void *ctx, Node *p) {
    if (p->a) {
        func_ov003_0214e2a8(ctx, p->a);
    }
    if (p->b) {
        func_ov003_0214e2a8(ctx, p->b);
    }
    func_02056844(p);
}
