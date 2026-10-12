#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Pair;

extern void func_02056bc0(void *object, void *node);
extern void *func_0205681c(uint32_t size);
extern void *func_ov007_0219f85c(void *a, void *b);
extern Pair data_ov007_021c2864;
extern Pair data_ov007_021c286c;
extern Pair data_ov007_021c2874;

void func_ov007_02199ee4(void *p)
{
    uint8_t *o = (uint8_t *)p;
    Pair t;
    uint32_t *q;
    uint32_t f;
    void *n;
    void *r;

    t = data_ov007_021c2864;
    *(Pair *)(o + 0x80) = t;

    switch (*(uint32_t *)(o + 0x90)) {
    case 0:
        q = *(uint32_t **)(o + 0x88);
        if (q != 0) {
            *q = 0;
        }
        f = *(uint32_t *)(o + 0xc);
        *(uint32_t *)(o + 0xc) = (f & ~0xffu) | 2;
        return;
    case 1:
        q = *(uint32_t **)(o + 0x88);
        if (q != 0) {
            *q = 1;
        }
        f = *(uint32_t *)(o + 0xc);
        *(uint32_t *)(o + 0xc) = (f & ~0xffu) | 2;
        return;
    case 2:
        t = data_ov007_021c286c;
        *(Pair *)(o + 0x80) = t;
        return;
    case 3:
        t = data_ov007_021c2874;
        *(Pair *)(o + 0x80) = t;
        return;
    case 4:
        n = func_0205681c(0x180);
        r = n;
        if (n != 0) {
            r = func_ov007_0219f85c(n, *(void **)(o + 0x98));
        }
        if (r != 0) {
            r = (uint8_t *)r + 0xc;
        }
        func_02056bc0(o + 0x14, r);
        return;
    default:
        return;
    }
}
