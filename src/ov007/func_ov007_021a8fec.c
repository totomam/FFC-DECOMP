#include "ffc/types.h"

extern void func_02056844(void *p);

typedef struct Node Node;
struct Node {
    Node *a;
    Node *b;
};

void func_ov007_021a8fec(void *ctx, Node *p) {
    if (p->a) {
        func_ov007_021a8fec(ctx, p->a);
    }
    if (p->b) {
        func_ov007_021a8fec(ctx, p->b);
    }
    func_02056844(p);
}
