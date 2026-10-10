#include "ffc/types.h"
typedef struct { uint32_t a, b, c; } S;
void func_ov003_02147290(uint32_t *p, S x) {
    *p = x.a + x.b;
}
