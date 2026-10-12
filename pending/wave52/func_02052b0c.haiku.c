#include "ffc/types.h"

extern uint32_t func_02052b88(void *a, void *b, uint8_t **out, uint8_t *p1, uint8_t *p0);
extern uint8_t *func_0205341c(void *a, uint32_t r1, uint8_t c1, uint8_t c0, void *s);
extern uint32_t data_020b051c[];

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

uint8_t *func_02052b0c(void *a, Pair *b) {
    uint8_t *out;
    uint8_t c[2];
    uint32_t tmp[3];
    uint32_t ret;
    uint8_t *q;
    Pair *e;
    int need;

    ret = func_02052b88(a, b, &out, &c[1], &c[0]);
    need = (out == 0);
    if (!need) {
        e = (Pair *)(out + 0xc);
        if (e->a < b->a) {
            need = 1;
        } else if (e->a == b->a) {
            need = (e->b < b->b);
        }
    }
    if (need) {
        tmp[1] = b->b;
        tmp[0] = b->a;
        tmp[2] = data_020b051c[1];
        q = func_0205341c(a, ret, c[1], c[0], tmp);
        return q + 0xc;
    }
    return out + 0xc;
}
