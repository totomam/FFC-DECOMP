#include "ffc/types.h"
typedef struct { int32_t a, b; } E;
typedef struct { E *f, *l; } R;
void func_ov002_021cc144(E **out, R r, E *key) {
    int32_t n = r.l - r.f;
    while (n > 0) {
        int32_t h = n / 2;
        E *q = r.f + h;
        if (q->b >= key->b) {
            n = h;
        } else {
            r.f = q + 1;
            n = n - (h + 1);
        }
    }
    *out = r.f;
}
