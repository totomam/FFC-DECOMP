#include "ffc/types.h"
typedef struct { uint32_t a, b; } P;
typedef struct { uint32_t a, b, c; } S;
typedef struct { uint32_t (*f[20])(void*, uint32_t, P, uint32_t); } V;
uint32_t func_02065d58(uint32_t *self, uint32_t x, S s) {
    P v;
    V **obj;
    v.a = s.a + self[8];
    v.b = s.b + self[9];
    obj = (V **)self[7];
    return (*obj)->f[14](obj, x, v, s.c);
}
