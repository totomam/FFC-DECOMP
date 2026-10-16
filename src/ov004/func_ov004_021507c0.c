#include "ffc/types.h"
typedef struct { uint32_t *reg; uint32_t mask; } S;
S * func_ov004_021507c0(S *s, int on) {
    if (on) {
        *s->reg |= s->mask;
    } else {
        *s->reg &= ~s->mask;
    }
    return s;
}
