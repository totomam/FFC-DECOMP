#include "ffc/types.h"

extern int __FindExceptionTable(uint32_t *p, uint32_t a);
extern uint32_t func_0209a76c(uint32_t a, uint32_t b);
extern uint32_t *func_0209c038(uint32_t start, uint32_t cnt, uint32_t a);
extern uint32_t func_0209d204(uint32_t v);
extern uint32_t func_0209bfdc(uint32_t s, uint32_t *out);

void func_0209c070(uint32_t a, uint32_t *p) {
    uint32_t n0, n1, n2, d;
    uint32_t *ent;
    uint32_t s, lo, off;
    uint32_t start;
    uint32_t cnt;

    p[1] = 0;
    p[2] = 0;
    if (__FindExceptionTable(p, a) == 0) {
        return;
    }
    start = p[3];
    cnt = func_0209a76c(p[4] - start, 12);
    ent = func_0209c038(start, cnt, a);
    if (ent == 0) {
        return;
    }
    if (ent[1] & 1) {
        p[1] = (uint32_t)(ent + 2);
    } else {
        p[1] = ent[2];
    }
    p[0] = ent[0];
    d = a - ent[0];
    s = func_0209d204(p[1]);
    off = 0;
    do {
        s = func_0209bfdc(s, &n0);
        if (n0 == 0) {
            return;
        }
        s = func_0209bfdc(s, &n1);
        s = func_0209bfdc(s, &n2);
        lo = off + n0;
        if (d < lo) {
            return;
        }
        off = lo + n1;
    } while (d > off);
    p[2] = p[1] + n2;
}
