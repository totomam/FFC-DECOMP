#include "ffc/types.h"

typedef struct Rec {
    uint8_t pad[0xc];
    uint16_t n;
} Rec;

typedef struct Out {
    uint32_t v;
    uint8_t b;
} Out;

extern uint32_t func_02051870(uint32_t a, uint16_t *c, Rec **out, uint8_t *x, uint8_t *y);
extern uint32_t func_0205161c(uint32_t a, uint32_t b, uint8_t x, uint8_t y, uint16_t *c);
extern uint8_t data_020b0458[];

void func_02051708(Out *out, uint32_t a, uint16_t *c) {
    Rec *rec;
    uint8_t buf[2];
    uint32_t r;
    uint32_t flag;

    r = func_02051870(a, c, &rec, &buf[1], &buf[0]);
    flag = 1;
    if (rec != 0 && !(rec->n < *c)) {
        flag = 0;
    }
    if (flag != 0) {
        out->v = func_0205161c(a, r, buf[1], buf[0], c);
        out->b = data_020b0458[2];
    } else {
        out->v = (uint32_t)rec;
        out->b = data_020b0458[1];
    }
}
