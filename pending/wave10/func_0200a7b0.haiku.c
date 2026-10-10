#include "ffc/types.h"

typedef struct {
    uint32_t f0 : 1;
    uint32_t rest : 31;
    uint32_t w1;
    uint32_t w2;
} S;

extern S *func_0200a7f8(S *p, int a, uint32_t b);

S *func_0200a7b0(S *p, S *q) {
    uint32_t r2;
    int c;
    c = p->f0 ? 1 : 0;
    if (c == 0 && q->f0 == 0) {
        *p = *q;
        return p;
    }
    if (c != 0) {
        r2 = p->w1;
    } else {
        r2 = (((uint8_t *)p)[0] >> 1) & 0x7f;
    }
    return func_0200a7f8(p, 0, r2);
}
