#include "ffc/types.h"
typedef struct { uint32_t *a; uint32_t *b; uint32_t c, d; } S;
void func_ov002_021cb250(S s) {
    volatile uint32_t pad[2]; uint32_t *a = s.a, *b = s.b;
    if (a == b) return;
    b -= 2;
    while (a < b) {
        uint32_t t = a[0]; a[0] = b[0]; b[0] = t;
        t = a[1]; a[1] = b[1]; b[1] = t;
        a += 2; b -= 2;
    }
}
