#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Pair;
typedef struct { uint32_t pad[3]; Pair key; } Node;

extern Node *func_02052b88(void *a, Pair *b, Node **out, uint8_t *p1, uint8_t *p0);
extern Node *func_0205341c(void *a, Node *r1, uint8_t c1, uint8_t c0, uint32_t *s);
extern uint32_t data_020b051c[];

static inline int lt(Pair *x, Pair *y) {
    if (x->a < y->a) return 1;
    if (x->a > y->a) return 0;
    return x->b < y->b;
}

Pair *func_02052b0c(void *a, Pair *b) {
    Node *out;
    uint8_t c[2];
    uint32_t tmp[3];
    Node *ret;
    int need;

    ret = func_02052b88(a, b, &out, &c[1], &c[0]);
    need = (out == 0);
    if (!need) {
        Pair *e = &out->key;
        need = lt(e, b);
    }
    if (need) {
        tmp[1] = b->b;
        tmp[0] = b->a;
        tmp[2] = data_020b051c[1];
        return &func_0205341c(a, ret, c[1], c[0], tmp)->key;
    }
    return &out->key;
}
