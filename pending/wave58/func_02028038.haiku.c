#include "ffc/types.h"

typedef struct Key {
    uint32_t a;
    uint32_t b;
    uint8_t f;
    uint8_t pad[3];
    uint32_t c;
} Key;

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

extern uint32_t func_0202818c(void *self, Key *k, Node **out, uint8_t *b1, uint8_t *b0);
extern int func_02035cb0(void *x, void *y);
extern void func_02035c18();
extern void func_02052be0(uint32_t a);
extern void func_02052d10(uint32_t a, uint32_t b);
extern void func_02052d3c(uint32_t a, uint32_t b);
extern void func_02052c04(uint32_t a);
extern Node *func_0202a750(void *self, uint32_t r, uint8_t b1, uint8_t b0, Ins *ins);

#define KEY_LT(x, y) (((x)->a < (y)->a) || ((x)->a == (y)->a && (((x)->b < (y)->b) || ((x)->b == (y)->b && (x)->f < (y)->f))))

void *func_02028038(void *self, Key *k)
{
    uint32_t ret;
    uint8_t bb[2];
    Node *node;
    Ins ins;
    Node *r;
    Key *n;
    int i;

    ret = func_0202818c(self, k, &node, &bb[1], &bb[0]);

    if (node != 0) {
        n = &node->key;
        if (!KEY_LT(n, k)) {
            if (n != k && KEY_LT(k, n)) {
                return (char *)n;
            }
            if (!func_02035cb0(&n->c, &k->c)) {
                func_02035cb0(&k->c, &n->c);
                return (char *)n;
            }
        }
    }

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
    for (i = 0; i < 7; i++) {
        ins.val.w[i] = 0;
    }

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
