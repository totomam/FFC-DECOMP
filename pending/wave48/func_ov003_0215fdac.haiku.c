#include "ffc/types.h"

typedef struct Node {
    struct Node *a;
    struct Node *b;
    uint32_t c;
} Node;

extern uint8_t data_ov003_0217a394[];
extern void func_ov003_0215fea0(void *obj, int v);
extern void func_02052d3c(void *x, void *y);
extern void func_02052c04(void *x);
extern void *func_02053290(void *object);
extern void func_02056db0(void *obj);
extern void func_02056844(void *obj);

void *func_ov003_0215fdac(void *param_0) {
    uint8_t *p = (uint8_t *)param_0;
    int r4 = 1;
    int ime;
    Node *c;
    Node *n;
    Node *x;
    Node *y;
    Node *z;
    Node *w;

    *(uint8_t **)p = data_ov003_0217a394;
    (*(uint8_t **)(p + 0x88))[8] = 1;
    *(uint16_t *)(*(uint8_t **)(p + 0x88)) = *(uint16_t *)(p + 0x9c);
    *(uint32_t *)(*(uint8_t **)(p + 0x88) + 4) = *(uint32_t *)(p + 0xa0);

    func_ov003_0215fea0(p, 0);

    ime = *(volatile uint16_t *)0x4000208;
    *(volatile uint16_t *)0x4000208 = 0;
    if (ime == 0) {
        r4 = 0;
    }

    if (p[0xf0] == 0) {
        x = ((Node *)(p + 0xe8))->a;
        if (x != 0) {
            y = x->a;
            if (y == 0) {
                goto end;
            }
            z = y->a;
            x->a = 0;
            if (z != 0) {
                x->a = z;
                z->b = x;
            }
            y->b = 0;
            y->a = 0;
        } else {
            w = ((Node *)(p + 0xe4))->a;
            if (w != 0) {
                w->b = 0;
                ((Node *)(p + 0xe4))->a = 0;
            }
        }
    } else {
        c = (Node *)(p + 0xe4);
        n = ((Node *)(p + 0xe4))->b;
        if (n != 0) {
            c = n;
            while (c->b != 0) {
                c = c->b;
            }
        }
        if (c != 0) {
            do {
                n = c->a;
                c->a = 0;
                c->b = 0;
                c->c = 0;
                c = n;
            } while (c != 0);
        }
    }
end:
    ime = *(volatile uint16_t *)0x4000208;
    *(volatile uint16_t *)0x4000208 = r4;

    if (*(void **)(p + 0xc0) != 0) {
        if (p[0xc8] != 0) {
            func_02052d3c(*(void **)(p + 0xc0), *(void **)(p + 0xc4));
        }
        func_02052c04(*(void **)(p + 0xc0));
    }
    func_02053290(p + 0xbc);
    func_02056db0(p);
    func_02056844(p);
    return p;
}
