#include "ffc/types.h"

extern char data_ov003_0217a2e4[];
extern void func_02056844(void *obj);

typedef struct Node {
    struct Node *w0;
    struct Node *w1;
    struct Node *w2;
} Node;

#define DTOR_FIELD(off)                                  \
    do {                                                 \
        void *q_ = *(void **)(p + (off));                \
        if (q_ != 0) {                                   \
            if (q_ != 0) {                               \
                ((void (*)(void *))(*(void ***)q_)[1])(q_); \
            }                                            \
            *(void **)(p + (off)) = 0;                   \
        }                                                \
    } while (0)

void *func_ov003_0215d944(uint8_t *p)
{
    volatile uint16_t *ime = (volatile uint16_t *)0x4000208;
    uint16_t old;
    uint32_t flag;
    void *q;
    Node *n, *t, *next;

    *(void **)p = data_ov003_0217a2e4;

    DTOR_FIELD(0x50);
    DTOR_FIELD(0x54);
    DTOR_FIELD(0x58);

    q = *(void **)(p + 0x3c);
    if (q != 0) {
        *((uint8_t *)q + 0xdc) = 1;
    }

    flag = 0;
    old = *ime;
    *ime = flag;
    if (old != 0) {
        flag = 1;
    }

    if (*(uint8_t *)(p + 0x40) != 0) {
        n = (Node *)(p + 0x34);
        t = n->w1;
        if (t != 0) {
            do {
                n = t;
                t = t->w1;
            } while (t != 0);
        }
        if (n != 0) {
            do {
                next = n->w0;
                n->w0 = 0;
                n->w1 = 0;
                n->w2 = 0;
                n = next;
            } while (next != 0);
        }
    } else {
        Node *h = *(Node **)(p + 0x38);
        if (h != 0) {
            Node *node = h->w0;
            if (node != 0) {
                Node *nx = node->w0;
                h->w0 = 0;
                if (nx != 0) {
                    h->w0 = nx;
                    nx->w1 = h;
                }
                node->w1 = 0;
                node->w0 = 0;
            }
        } else {
            Node *x = *(Node **)(p + 0x34);
            if (x != 0) {
                x->w1 = 0;
                *(Node **)(p + 0x34) = 0;
            }
        }
    }

    old = *ime;
    *ime = flag;
    func_02056844(p);
    return p;
}
