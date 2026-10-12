#include "ffc/types.h"

extern void func_02021b48(void *p, int x);
extern void func_02021338(int x);
extern void *func_0205681c(int x);
extern void func_02056bc0(void *object, void *node);
extern char data_ov004_02159828[];

typedef struct R { int lo, hi; } R;
typedef struct Node {
    void *vtbl;
    uint32_t w4;
    uint32_t w8;
    uint32_t flags;
    uint32_t w10;
    void *owner;
    int type;
    R r;
    int kind;
} Node;

void func_ov004_021551b4(char *self, int type, int kind)
{
    R r;
    volatile int q0, q1;
    Node *node;
    int k;

    func_02021b48(*(void **)(self + 0xf4), 0x15);
    func_02021338(0xa2);

    switch (kind) {
    case 0:
    default:
        r.lo = -32; r.hi = 0; k = 8; break;
    case 1:
        r.lo = 0x20; r.hi = 0; k = 8; break;
    case 2:
        r.lo = 0; r.hi = -32; k = 6; break;
    case 3:
        r.lo = 0; r.hi = 0x20; k = 6; break;
    }

    node = func_0205681c(0x28);
    if (node != 0) {
        node->flags &= ~0xff;
        node->vtbl = data_ov004_02159828;
        node->owner = self;
        node->type = type;
        node->r = r;
        q0 = r.lo;
        q1 = r.hi;
        node->kind = k;
    }
    func_02056bc0(*(void **)(self + (type << 2) + 0x1f0), node);
}
