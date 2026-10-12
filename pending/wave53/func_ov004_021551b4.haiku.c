#include "ffc/types.h"

extern void func_02021b48(void *p, int x);
extern void func_02021338(int x);
extern void *func_0205681c(int x);
extern void func_02056bc0(void *object, void *node);
extern char data_ov004_02159828[];

typedef struct Node {
    void *vtbl;
    uint32_t w4;
    uint32_t w8;
    uint32_t flags;
    uint32_t w10;
    void *owner;
    int type;
    int lo;
    int hi;
    int kind;
} Node;

void func_ov004_021551b4(char *self, int type, int kind)
{
    int rng[2];
    volatile int tmp[2];
    Node *node;
    void *obj;

    func_02021b48(*(void **)(self + 0xf4), 0x15);
    func_02021338(0xa2);

    switch (kind) {
    case 0:
        rng[0] = 0x20;
        rng[1] = 0;
        kind = 8;
        break;
    case 1:
        rng[0] = 0;
        rng[1] = -32;
        kind = 6;
        break;
    case 2:
        rng[0] = 0;
        rng[1] = 0x20;
        kind = 6;
        break;
    case 3:
    default:
        rng[0] = -32;
        rng[1] = 0;
        kind = 8;
        break;
    }

    node = func_0205681c(0x28);
    if (node != 0) {
        node->vtbl = data_ov004_02159828;
        node->flags &= ~0xff;
        node->owner = self;
        node->type = type;
        node->lo = rng[0];
        node->hi = rng[1];
        node->kind = kind;
        tmp[0] = rng[0];
        tmp[1] = rng[1];
    }
    obj = *(void **)(self + (type << 2) + 0x1f0);
    func_02056bc0(obj, node);
}
