#include "ffc/types.h"

extern uint32_t func_ov007_021a8f8c(uint8_t *a, uint8_t *b, uint8_t **out, uint8_t *c, uint8_t *d);
extern uint32_t func_ov007_021a8ed4(uint8_t *a, uint32_t r, uint8_t c, uint8_t d, uint8_t *e);
extern uint8_t data_ov007_021c45dc[];

typedef struct {
    uint32_t val;
    uint8_t flag;
} Out;

void func_ov007_021a8e58(Out *out, uint8_t *p1, uint8_t *p2) {
    uint8_t b[2];
    uint8_t *ptr;
    uint8_t *q;
    uint32_t r;
    int cond;
    uint32_t i;

    r = func_ov007_021a8f8c(p1, p2, &ptr, &b[1], &b[0]);
    cond = (ptr == 0);
    if (!cond) {
        q = ptr + 12;
        for (i = 0; i < 6; i++) {
            if (q[i] < p2[i]) {
                cond = 1;
                goto done;
            }
            if (q[i] > p2[i]) {
                cond = 0;
                goto done;
            }
        }
        cond = 0;
    }
done:
    if (cond != 0) {
        out->val = func_ov007_021a8ed4(p1, r, b[1], b[0], p2);
        out->flag = data_ov007_021c45dc[2];
    } else {
        out->val = (uint32_t)ptr;
        out->flag = data_ov007_021c45dc[0];
    }
}
