#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

typedef struct {
    uint32_t a;
    uint32_t b;
} S;

void func_ov003_02147264(S *p, Pair v) {
    p->a = v.a;
    p->b = v.b;
}
