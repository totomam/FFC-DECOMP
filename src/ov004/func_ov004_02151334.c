#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

typedef struct {
    uint32_t a;
    uint32_t b;
} S;

void func_ov004_02151334(S *p, Pair v) {
    p->a = v.a;
    p->b = v.b;
}
