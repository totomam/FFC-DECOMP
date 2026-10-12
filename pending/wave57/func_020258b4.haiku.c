#include "ffc/types.h"

typedef struct Node {
    struct Node *left;   /* +0 */
    struct Node *right;  /* +4 */
    uint32_t hdr;        /* +8: bit0 = color, upper bits = parent tagged pointer */
} Node;

typedef struct Ctx {
    Node *root;
    uint32_t f1;
    uint32_t f2;
    uint32_t f3;
} Ctx;

extern void func_02025a38(Node *n, Ctx *ctx);
extern void func_02025a88(Node *n, Ctx *ctx);

void func_020258b4(Ctx ctx)
{
    volatile uint32_t m[21];
    uint32_t one7 = 1;
    uint32_t one6 = 1;
    Node *n;
    Node *p;
    Node *g;
    Node *u;

    n = ctx.root;
    n->hdr = n->hdr | 1;

    m[20] = 1; m[19] = 1; m[18] = 1; m[17] = 1; m[16] = 1; m[15] = 1;
    m[14] = 1; m[13] = 1; m[12] = 1; m[11] = 1; m[10] = 1; m[9] = 1;
    m[8] = 1; m[7] = 1; m[6] = 1; m[5] = 1; m[4] = 1; m[3] = 1;
    m[2] = 1; m[1] = 1; m[0] = 1;

    while (n != ctx.root && (((Node *)(n->hdr & ~m[20]))->hdr & 1)) {
        p = (Node *)(n->hdr & ~one7);
        g = (Node *)(p->hdr & ~one6);
        if (p == g->left) {
            u = g->right;
            if (u != 0 && (u->hdr & 1)) {
                p->hdr &= ~m[3];
                u->hdr &= ~m[2];
                n = (Node *)(((Node *)(n->hdr & ~m[1]))->hdr & ~m[0]);
                n->hdr |= 1;
                continue;
            }
            if (p->right == n) {
                n = p;
                func_02025a38(p, &ctx);
            }
            ((Node *)(n->hdr & ~m[9]))->hdr &= ~m[8];
            ((Node *)(((Node *)(n->hdr & ~m[7]))->hdr & ~m[6]))->hdr |= 1;
            func_02025a88((Node *)(((Node *)(n->hdr & ~m[5]))->hdr & ~m[4]), &ctx);
        } else {
            u = g->left;
            if (u != 0 && (u->hdr & 1)) {
                p->hdr &= ~m[13];
                u->hdr &= ~m[12];
                n = (Node *)(((Node *)(n->hdr & ~m[11]))->hdr & ~m[10]);
                n->hdr |= 1;
                continue;
            }
            if (p->left == n) {
                n = p;
                func_02025a88(p, &ctx);
            }
            ((Node *)(n->hdr & ~m[19]))->hdr &= ~m[18];
            ((Node *)(((Node *)(n->hdr & ~m[17]))->hdr & ~m[16]))->hdr |= 1;
            func_02025a38((Node *)(((Node *)(n->hdr & ~m[15]))->hdr & ~m[14]), &ctx);
        }
    }

    ctx.root->hdr &= ~1u;
}
