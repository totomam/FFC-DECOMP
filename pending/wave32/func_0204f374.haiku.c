#include "ffc/types.h"

typedef struct {
    uint32_t f0;
    uint32_t f4;
    uint32_t f8;
    uint32_t fc;
} Node;

typedef struct {
    uint32_t x;
    uint32_t y;
} Pair;

extern uint32_t func_0204f3cc(void *a, uint32_t *p, Node **out, uint8_t *c1, uint8_t *c0);
extern uint8_t *func_0204f980(void *a, uint32_t b, uint8_t c1, uint8_t c0, Pair *pr);
extern uint32_t data_020b0328;

uint8_t *func_0204f374(void *a, uint32_t *p) {
    Node *out;
    uint8_t c1;
    uint8_t c0;
    Pair pr;
    uint32_t r;
    int need;

    r = func_0204f3cc(a, p, &out, &c1, &c0);
    need = 1;
    if (out != 0) {
        if (out->fc >= *p) {
            need = 0;
        }
    }
    if (need != 0) {
        pr.x = *p;
        pr.y = data_020b0328;
        return func_0204f980(a, r, c1, c0, &pr) + 0xc;
    }
    return (uint8_t *)out + 0xc;
}
