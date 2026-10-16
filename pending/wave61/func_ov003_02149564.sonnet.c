#include "ffc/types.h"
typedef struct { uint32_t a, b, c, d; } S;
void func_ov003_02149564(uint32_t *p) {
    S s;
    s.a = 0; s.b = 0; s.c = 0; s.d = 0;
    p[0] = s.a;
    p[1] = s.b;
}
