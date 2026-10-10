#include "ffc/types.h"

typedef struct {
    uint32_t tag;
    uint32_t a;
    uint32_t n;
    uint32_t b;
} S;

void func_02032098(S *p, uint32_t a, uint32_t b, uint32_t c) {
    p->tag = 3;
    p->a = a;
    p->n = b - 1;
    p->b = a + c;
}
