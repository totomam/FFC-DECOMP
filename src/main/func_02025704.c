#include "ffc/types.h"

typedef struct {
    uint32_t val;
    uint8_t flag;
} Out;

extern uint32_t func_02025ad8(void *a, uint8_t *b, void **out, uint8_t *c, uint8_t *d);
extern uint32_t func_02025764(void *a, uint32_t b, uint8_t c, uint8_t d, uint8_t *e);
extern uint8_t data_020ad79c[];

void func_02025704(Out *out, void *a1, uint8_t *p2) {
    uint8_t b[2];
    uint8_t *tmp;
    uint32_t r;
    int found;

    r = func_02025ad8(a1, p2, (void **)&tmp, &b[1], &b[0]);
    found = 1;
    if (tmp != 0 && tmp[12] >= *p2) {
        found = 0;
    }
    if (found) {
        out->val = func_02025764(a1, r, b[1], b[0], p2);
        out->flag = data_020ad79c[1];
    } else {
        out->val = (uint32_t)tmp;
        out->flag = data_020ad79c[2];
    }
}
