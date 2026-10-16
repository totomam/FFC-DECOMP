#include "ffc/types.h"
typedef struct { int32_t x, y; } V;
static inline V neg(V a){ V r; r.x=-a.x; r.y=-a.y; return r; }
void func_020203cc(uint8_t *p, V v) {
    V n, m;
    *(V*)(p + 0x68) = v;
    n = neg(v);
    m = n;
    *(V*)(*(uint8_t**)(p + 0x20) + 0x1c) = m;
}
