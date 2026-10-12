#include "ffc/types.h"

extern int32_t func_0208f694(int32_t value);

typedef struct {
    int32_t x;
    int32_t y;
} Pt;

typedef struct Node {
    void **vt;
    struct Node *next;
    uint8_t pad0[0x7c];
    uint8_t f84;
    uint8_t pad1[2];
    uint8_t f87;
} Node;

typedef struct Inner {
    uint8_t pad[0x14];
    Node *head;
} Inner;

typedef struct Outer {
    uint8_t pad[0x90];
    Inner *inner;
} Outer;

static inline int32_t dist(Pt a, Pt b) {
    int32_t r = func_0208f694(a.y - b.y);
    int32_t q = func_0208f694(a.x - b.x);
    return q + r;
}
Node *func_020698fc(Outer *p, Pt pos) {
    Node *best = 0;
    int32_t bestd = 0x7fffffff;
    Node *n;
    for (n = p->inner->head; n != 0; n = n->next) {
        if (n->f84 != 0 && n->f87 == 0) {
            int32_t d = dist(((Pt (*)(Node *))n->vt[5])(n), pos);
            if (d < bestd) {
                best = n;
                bestd = d;
            }
        }
    }
    return best;
}
