#include "ffc/types.h"
extern int32_t func_0204e148(int32_t a, int32_t *b, int32_t *c);
extern int32_t func_ov001_021899f8(int32_t a);
typedef struct { int32_t p[3]; int32_t *out; } S;
int32_t func_ov001_021896d0(int32_t a, S *s) {
    int32_t x, y;
    int32_t r = func_0204e148(a, &x, &y);
    if (r >= 0) {
        *s->out = func_ov001_021899f8(x);
        if (*s->out >= 0) return 1;
        return 0;
    }
    return 0;
}
