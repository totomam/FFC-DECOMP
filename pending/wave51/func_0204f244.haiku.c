#include "ffc/types.h"

extern void func_0204f2b8(void *out, void *list, void *key);
extern uint32_t data_0213df10[];

typedef struct {
    void (*cb)(uint32_t, uint32_t);
    uint32_t pad4;
    uint32_t pad8;
    uint8_t *list;
    uint32_t val;
} G;

void func_0204f244(uint32_t a, uint32_t b, uint32_t c, uint32_t d)
{
    G *g;
    uint32_t r4;
    volatile uint16_t *reg = (volatile uint16_t *)0x4000208;
    uint8_t *n1;
    uint8_t *n2;
    uint32_t r0;

    if (((G *)data_0213df10)->cb) {
        ((G *)data_0213df10)->cb(a, b);
    }
    r4 = 0;
    r0 = *reg;
    *reg = r4;
    if (r0) {
        r4 = 1;
    }

    g = (G *)data_0213df10;
    func_0204f2b8(&n1, g->list, &a);
    if (n1 != g->list + 4) {
        *(uint32_t *)(n1 + 0x10) = g->val;
    }

    g = (G *)data_0213df10;
    func_0204f2b8(&n2, g->list, &b);
    if (n2 != g->list + 4) {
        r0 = *(uint32_t *)(n2 + 0x10);
    } else {
        r0 = 0;
    }
    g->val = r0;
    r0 = *reg;
    *reg = r4;
}
