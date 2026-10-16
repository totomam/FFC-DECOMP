#include "ffc/types.h"
extern int func_ov009_021a5cdc(uint32_t a, uint32_t *b, uint32_t *c);
typedef struct { uint32_t *p; uint32_t x; } P;
static inline uint32_t *cpy(P *f, P *l, uint32_t *out) {
    while (f->p != l->p) { *out++ = *f->p; f->p++; }
    return out;
}
void func_ov009_021a5650(uint32_t **ret, P a, P e, uint32_t *p, uint32_t *pend, uint32_t *out, uint32_t cmp) {
    while (a.p != e.p && p != pend) {
        if (func_ov009_021a5cdc(cmp, p, a.p)) { *out++ = *p++; }
        else { *out++ = *a.p; a.p++; }
    }
    if (a.p == e.p) {
        P l; P f; l.p = pend; f.p = p;
        *ret = cpy(&f, &l, out);
        return;
    }
    {
        P l = e; P f = a;
        *ret = cpy(&f, &l, out);
    }
}
