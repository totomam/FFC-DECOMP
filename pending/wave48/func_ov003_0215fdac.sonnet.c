/* cflags: -lang c++ */
#include "ffc/types.h"
struct G { int v; G(int x):v(x){} ~G(){} };
static inline int ident(const G &g){return g.v;}

typedef struct Node {
    struct Node *a;
    struct Node *b;
    uint32_t c;
} Node;

typedef struct Sub {
    uint32_t x0;
    void *x4;
    void *x8;
    uint8_t xc;
} Sub;

typedef struct Blk {
    uint16_t v;
    uint16_t pad;
    uint32_t w;
    uint8_t flag;
} Blk;

extern "C" uint8_t data_ov003_0217a394[];
extern "C" void func_ov003_0215fea0(void *obj, int v);
extern "C" void func_02052d3c(void *x, void *y);
extern "C" void func_02052c04(void *x);
extern "C" void *func_02053290(void *object);
extern "C" void func_02056db0(void *obj);
extern "C" void func_02056844(void *obj);

extern "C" void *func_ov003_0215fdac(void *param_0) {
    uint8_t *p = (uint8_t *)param_0;
    int r4 = ident(G(1));
    int ime;
    Node *c, *n, *x, *y, *z;
    Sub *s;
    Blk *blk;

    *(uint8_t **)p = data_ov003_0217a394;
    blk = *(Blk **)(p + 0x88);
    blk->flag = 1;
    (*(Blk **)(p + 0x88))->v = *(uint16_t *)(p + 0x9c);
    (*(Blk **)(p + 0x88))->w = *(uint32_t *)(p + 0xa0);

    func_ov003_0215fea0(p, 0);

    ime = *(volatile uint16_t *)0x4000208;
    *(volatile uint16_t *)0x4000208 = 0;
    if (ime == 0) {
        r4 = 0;
    }

    if (p[0xf0] != 0) {
        c = (Node *)(p + 0xe4);
        n = c->b;
        if (n != 0) {
            do {
                c = n;
                n = n->b;
            } while (n != 0);
        }
        if (c != 0) {
            do {
                n = c->a;
                c->a = 0;
                c->b = 0;
                c->c = 0;
                c = n;
            } while (n != 0);
        }
    } else {
        x = *(Node **)(p + 0xe8);
        if (x != 0) {
            y = x->a;
            if (y != 0) {
                z = y->a;
                x->a = 0;
                if (z != 0) {
                    x->a = z;
                    z->b = x;
                }
                y->b = 0;
                y->a = 0;
            }
        } else {
            z = *(Node **)(p + 0xe4);
            if (z != 0) {
                z->b = 0;
                *(Node **)(p + 0xe4) = 0;
            }
        }
    }
    ime = *(volatile uint16_t *)0x4000208;
    *(volatile uint16_t *)0x4000208 = r4;

    s = (Sub *)(p + 0xbc);
    if (s->x4 != 0) {
        if (s->xc != 0) {
            func_02052d3c(s->x4, s->x8);
        }
        func_02052c04(s->x4);
    }
    func_02053290(s);
    func_02056db0(p);
    func_02056844(p);
    return p;
}
