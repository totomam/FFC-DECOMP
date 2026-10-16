#include "ffc/types.h"
typedef struct { uint32_t *first; uint32_t *last; } S;
extern int func_ov009_021a5cdc(void *c, uint32_t v, uint32_t *e);
void func_ov009_021a54ec(uint32_t **out, S s, uint32_t val, void *cmp) {
    S *p = &s;
    uint32_t *f = p->first;
    int n = p->last - f;
    while (n > 0) {
        int h = n / 2;
        uint32_t *m = f + h;
        if (func_ov009_021a5cdc(cmp, val, m) == 0) {
            f = m + 1;
            n -= h + 1;
            p->first = f;
        } else {
            n = h;
        }
    }
    *out = p->first;
}
