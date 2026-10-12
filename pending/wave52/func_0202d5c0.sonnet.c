#include "ffc/types.h"

extern void func_0208763c(void *p);
extern void func_02087678(void *p);
extern void func_0202d574(void *p);

typedef struct { char pad[0xBC]; volatile int32_t lim; volatile int32_t cnt; } T;

void func_0202d5c0(uint8_t *a) {
    struct { void *p; volatile uint8_t f; } s;
    T *t = (T *)a;
    int32_t n;
    volatile int32_t *q;

    s.p = a + 0x1F4;
    s.f = 1;
    if (s.f) {
        func_0208763c(s.p);
    }
    if (*(int32_t *)(a + 0x20C) != 0) {
        if (s.f) {
            func_02087678(s.p);
        }
        return;
    }
    if (t->cnt >= t->lim) {
        func_0202d574(a);
        if (s.f) {
            func_02087678(s.p);
        }
        return;
    }
    n = t->cnt + 1;
    t->cnt = n;
    q = &t->cnt;
    if (t->lim < n) q = &t->lim;
    t->cnt = *q;
    if (s.f) {
        func_02087678(s.p);
    }
}
