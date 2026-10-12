/* cflags: -lang c++ */
#include "ffc/types.h"

struct Key {
    uint32_t a;
    uint32_t b;
    uint8_t f;
    uint8_t pad[3];
    uint32_t c;
};

typedef struct Val {
    uint32_t w[7];
} Val;

typedef struct Node {
    uint32_t h[3];
    Key key;
} Node;

typedef struct Ins {
    Key key;
    Val val;
} Ins;

extern "C" uint32_t func_0202818c(void *self, Key *k, Node **out, uint8_t *b1, uint8_t *b0);
extern "C" int func_02035cb0(void *x, void *y);
extern "C" void func_02035c18(void *p);
extern "C" void func_02052be0(uint32_t a);
extern "C" void func_02052d10(uint32_t a, uint32_t b);
extern "C" void func_02052d3c(uint32_t a, uint32_t b);
extern "C" void func_02052c04(uint32_t a);
extern "C" Node *func_0202a750(void *self, uint32_t r, uint8_t b1, uint8_t b0, Ins *ins);

static inline int isnul(Node *n)
{
    return n == 0;
}

static inline int lt(Key *x, Key *y)
{
    if (y == x) return 0;
    if (x->a < y->a) return 1;
    if (x->a > y->a) return 0;
    if (x->b < y->b) return 1;
    if (x->b > y->b) return 0;
    if (x->f < y->f) return 1;
    return 0;
}

static inline int need(Node *node, Key *k)
{
    int r;
    Key *n;
    r = isnul(node);
    if (!r) {
        n = &node->key;
        if (lt(n, k)) r = 1;
        else if (lt(k, n)) r = 1;
        else if (func_02035cb0(&n->c, &k->c)) r = 1;
        else {
            func_02035cb0(&k->c, &n->c);
            r = 0;
        }
    }
    return r;
}

extern "C" void *func_02028038(void *self, Key *k)
{
    uint32_t ret;
    uint8_t bb[2];
    Node *node;
    Ins ins;
    Node *r;
    Val z;
    int i;

    ret = func_0202818c(self, k, &node, &bb[1], &bb[0]);
    if (!need(node, k)) return (char *)node + 0xc;

    ins.key.a = k->a;
    ins.key.b = k->b;
    ins.key.f = k->f;
    if (k->a != 0) {
        func_02052be0(k->a);
        if (ins.key.f != 0) {
            func_02052d10(ins.key.a, ins.key.b);
        }
    }
    ins.key.c = k->c;
    for (i = 0; i < 7; i++) z.w[i] = 0;
    ins.val = z;
    r = func_0202a750(self, ret, bb[1], bb[0], &ins);
    func_02035c18(&ins.key.c);
    if (ins.key.a != 0) {
        if (ins.key.f != 0) {
            func_02052d3c(ins.key.a, ins.key.b);
        }
        func_02052c04(ins.key.a);
    }
    return (char *)r + 0xc;
}
