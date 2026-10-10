#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

void func_ov004_0214e600(Pair *out, Pair *x, Pair *y) {
    uint32_t t = x->b + y->b;
    out->a = x->a + y->a;
    out->b = t;
}
