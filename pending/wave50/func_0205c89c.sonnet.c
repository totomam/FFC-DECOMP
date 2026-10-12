#include "ffc/types.h"

typedef struct { uint32_t a, b, c, d; } P;
typedef struct { uint32_t a, b, c, d; } S;
typedef struct { uint8_t v; } F;

extern void *func_0205cafc(void *x, void *y);
extern void func_0205ca70(void *self, void *r, F x);
extern void func_0205c908(void *self, S *s, P *p, F y);

void func_0205c89c(void *self, uint32_t a, uint32_t b, uint32_t c, uint32_t d, P *p) {
    
    P t;
    S s2;
    
    void *r;
    t = *p;
    s2 = *(S *)&a;
    r = func_0205cafc(&t, &s2);
    if (r) {
        F x = {0};
        func_0205ca70(self, r, x);
        F y = {0};
        func_0205c908(self, (S *)&a, p, y);
    }
}
