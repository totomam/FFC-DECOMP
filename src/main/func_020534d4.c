#include "ffc/types.h"

extern void func_02056844(void *p);

typedef struct Node Node;
struct Node {
    Node *a;
    Node *b;
};

void func_020534d4(void *ctx, Node *p) {
    if (p->a) {
        func_020534d4(ctx, p->a);
    }
    if (p->b) {
        func_020534d4(ctx, p->b);
    }
    func_02056844(p);
}
