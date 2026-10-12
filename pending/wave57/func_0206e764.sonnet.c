#include "ffc/types.h"
typedef struct { int8_t *buf; uint32_t head; uint32_t size; } Ring;
typedef struct { uint8_t *p; uint32_t x; } It;
extern uint32_t func_0206f250(Ring *r, uint32_t n);
extern void func_02090398(int8_t *dst, int8_t *src, uint32_t n);
extern void func_0206f22c(Ring *r, uint32_t p, uint32_t v);
extern void func_0206f340(Ring *r, int8_t *buf, uint32_t off, uint32_t len, uint32_t size);
typedef struct { int8_t c[8]; } T;
static inline int8_t cp(T *t, int i, uint8_t v){ t->c[i]=v; return t->c[i]; }
void func_0206e764(Ring *r, int8_t *cur, It b, It e)
{
    T t; uint32_t len; int8_t *dst; int8_t *wp; int32_t d; int fits; int ok;
    len = e.p - b.p;
    if (len == 0) return;
    ok = 1; fits = 0;
    if (len <= r->size && r->head <= r->size - len) fits = 1;
    if (fits == 0) { ok = 0; func_0206f250(r, r->head + len - r->size); }
    if (ok != 0) {
        wp = r->buf + r->head;
        d = wp - cur;
        r->head += len;
        if (d != 0) func_02090398(wp + len - d, cur, d);
        dst = cur;
        { volatile volatile It it = b; for (; it.p != e.p; it.p++) *dst++ = cp(&t,5,*it.p); }
    } else {
        uint32_t q; uint32_t off = cur - r->buf;
        q = func_0206f250(r, r->head + len - r->size);
        t.c[2]=0; t.c[3]=t.c[2];
        func_0206f22c(r, q, t.c[3]);
        dst = r->buf + off;
        { volatile It it = b; for (; it.p != e.p; it.p++) *dst++ = cp(&t,1,*it.p); }
        func_0206f340(r, r->buf, off, len, r->size);
    }
}
