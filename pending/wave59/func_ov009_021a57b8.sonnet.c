#include "ffc/types.h"
typedef struct { int pad; int cnt; uint32_t *base; } Obj;
typedef struct { uint32_t *p; Obj *o; } Pr;
typedef struct { uint32_t *a, *b; } Rg;
extern int func_ov009_021a5cdc(int a, uint32_t *b, uint32_t *c);
extern void func_ov009_021a5b30(void *r, uint32_t *a, uint32_t *b, Pr c, int d);
extern void func_ov009_021a5060(uint32_t *a, uint32_t *b, Pr c, int d);
extern void func_ov009_021a59ac(void *r, uint32_t *a, uint32_t *b, Pr c, int d);
static inline void put(Pr x, uint32_t *v)
{
    Pr *t = &x;
    if ((x.p - x.o->base) < x.o->cnt) { *x.p = *v; return; }
    if (x.p) *x.p = *v;
    t->o->cnt++;
}
void func_ov009_021a57b8(Rg rg, Pr out, int e)
{
    uint32_t *first = rg.a, *last = rg.b;
    int n = (last - first);
    if (n > 0) {
        if (n == 1) {
            put(out, &*first);
        } else if (n == 2) {
            uint32_t *f = first, *l = last;
            if (func_ov009_021a5cdc(e, last - 1, f)) {
                Pr q = out;
                while (f != l) { l--; put(q, l); q.p++; }
            } else {
                Pr q = out;
                while (f != l) { put(q, f); q.p++; f++; }
            }
        } else if (n <= 20) {
            char r[8];
            func_ov009_021a5b30(r, first, last, out, e);
        } else {
            int h = n - n / 2;
            Pr a = out; a.p += h;
            func_ov009_021a5060(first + h, last, a, e);
            Pr b = out; b.p += n;
            func_ov009_021a5060(first + h, last, b, e);
            char r[8];
            func_ov009_021a59ac(r, first, last, out, e);
        }
    }
}
