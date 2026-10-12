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

Node *func_020698fc(Outer *p, int32_t x, int32_t y, int32_t z) {
    Node *best = 0;
    int32_t bestd = 0x7fffffff;
    Node *n;
    int32_t *px = &x;
    int32_t *py = &y;
    for (n = p->inner->head; n != 0; n = n->next) {
        if (n->f84 != 0 && n->f87 == 0) {
            Pt t = ((Pt (*)(Node *))n->vt[5])(n);
            Pt o = t;
            int32_t r = func_0208f694(o.y - *py);
            int32_t d = func_0208f694(o.x - *px) + r;
            if (d < bestd) {
                best = n;
                bestd = d;
            }
        }
    }
    return best;
}
