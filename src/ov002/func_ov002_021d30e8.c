#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} S;

void func_ov002_021d30e8(S *p, uint32_t v) {
    p->b = p->b - v;
}
