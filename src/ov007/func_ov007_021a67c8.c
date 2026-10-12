#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern void *func_0205681c(uint32_t size);
extern uint32_t func_ov007_021a4888(void *a, uint32_t b, void *c, uint32_t d);
extern void func_02056bc0(void *object, void *node);
extern Pair data_ov007_021c43c8;
extern Pair data_ov007_021c43d0;

void func_ov007_021a67c8(void *p)
{
    uint8_t *b = (uint8_t *)p;
    int s = *(int *)(b + 0xa4);
    void *r;
    Pair t;

    if (s == 0) {
        goto c8;
    }
    if (s == 1) {
        goto dd;
    }
    if (s == 2) {
        goto dd;
    }
c8:
    t = data_ov007_021c43c8;
    *(Pair *)(b + 0x80) = t;
    return;
dd:
    r = func_0205681c(0x134);
    if (r) {
        r = (void *)func_ov007_021a4888(r, *(uint32_t *)(b + 0x88), b + 0x98, *(uint32_t *)(b + 0xa4));
    }
    func_02056bc0(b + 0x14, r);
    t = data_ov007_021c43d0;
    *(Pair *)(b + 0x80) = t;
}
