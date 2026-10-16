#include "ffc/types.h"
typedef struct { uint32_t k, v; } E;
typedef struct { E *a, *b; } R;
void func_ov002_021cce0c(E **out, R r, uint32_t *key) {
    int n = r.b - r.a;
    while (n > 0) {
        int h = n / 2;
        if (r.a[h].k > *key) {
            n = h;
        } else {
            r.a = r.a + h + 1;
            n = n - h - 1;
        }
    }
    *out = r.a;
}
