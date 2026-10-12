#include "ffc/types.h"

typedef struct { uint32_t a, b, c, d; } P;
typedef struct { uint32_t a, b, c, d; } S;

extern void *func_0205cafc(void *x, void *y);
extern void func_0205ca70(void *self, void *r, uint8_t x);
extern void func_0205c908(void *self, S *s, uint32_t p, uint8_t y);

void func_0205c89c(void *self, uint32_t a, uint32_t b, uint32_t c, uint32_t d, P *p) {
    S *s = (S *)&a;
    P t;
    S s2;
    void *r;
    t = *p;
    s2 = *s;
    r = func_0205cafc(&t, &s2);
    if (r) {
        volatile uint8_t x = 0;
        func_0205ca70(self, r, x);
        volatile uint8_t y = 0;
        func_0205c908(self, s, (uint32_t)p, y);
    }
}
