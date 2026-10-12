#include "ffc/types.h"

typedef struct Node {
    struct Node *a;
    struct Node *b;
    uint32_t flags;
    uint8_t v;
} Node;

typedef struct Ctx {
    uint32_t count;
    uint32_t f4;
    Node *root;
} Ctx;

extern Node *func_0205681c(uint32_t size);
extern void func_02091a24(void *p);
extern uint32_t func_0208f42c(void);
extern void func_02056844(void *p);
extern uint8_t data_020ad7a0[];

void func_0202cffc(Ctx *ctx, uint32_t bits, Node *src, int which)
{
    Node *n;
    Node *cur;
    Node * volatile root;
    Node *par;
    uint32_t * volatile slot;

    n = func_0205681c(0x10);
    if (n == 0) {
        func_02091a24(data_020ad7a0);
        func_0208f42c();
    }
    n->b = 0;
    n->a = 0;
    slot = &ctx->f4;
    n->flags = (n->flags & 1) | bits;
    root = n;

    if (which) {
        if (src->a) {
            n->v = src->a->v;
        }
        ctx->root = root;
        ((Node *)bits)->a = root;
        par = n;
        root = 0;
        cur = src->a;
    } else {
        if (src->b) {
            n->v = src->b->v;
        }
        ((Node *)bits)->b = root;
        par = n;
        root = 0;
        cur = src->b;
    }

    if (cur->flags & 1) {
        n->flags |= 1;
    } else {
        n->flags &= ~1;
    }
    ctx->count++;
    if (cur->b) {
        func_0202cffc(ctx, (uint32_t)par, cur, 0);
    }
    if (cur->a) {
        func_0202cffc(ctx, (uint32_t)par, cur, 1);
    }
    if (root) {
        func_02056844(root);
    }
}
