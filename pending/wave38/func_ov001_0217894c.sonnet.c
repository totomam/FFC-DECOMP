#include "ffc/types.h"

typedef struct Pair {
    uint32_t a;
    uint32_t b;
} Pair;

typedef struct Node {
    uint32_t s0;
    uint32_t s1;
    uint32_t s2;
    uint32_t s3;
    uint32_t s4;
    struct Node *next;
} Node;

typedef struct Mgr {
    uint8_t pad[0x5dc];
    Node *head;
    Node *tail;
} Mgr;

typedef struct Ctx {
    Mgr *mgr;
} Ctx;

extern void *func_ov000_021653d4(uint32_t size);
extern void func_ov001_0217ef6c(Ctx *ctx, void *data);
extern uint8_t data_ov001_021906a4[];

int func_ov001_0217894c(Ctx *ctx, Pair s, uint32_t p, uint32_t *q, uint32_t v)
{
    Mgr *m = ctx->mgr;
    Node *n = (Node *)func_ov000_021653d4(0x18);
    if (n == 0) {
        func_ov001_0217ef6c(ctx, data_ov001_021906a4);
        return 1;
    }
    n->s0 = s.a;
    n->s1 = s.b;
    n->s2 = p;
    n->s4 = (q != 0) ? q[6] : 0;
    n->s3 = v;
    n->next = 0;
    if (m->head == 0) {
        m->head = n;
    }
    if (m->tail != 0) {
        m->tail->next = n;
    }
    m->tail = n;
    return 0;
}
