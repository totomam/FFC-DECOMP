#include "ffc/types.h"

extern uint32_t func_0204de70(void *p);
extern uint32_t func_0204de7c(void *p);
extern void *func_0204de80(void *p);
extern void func_0204b0ac(uint32_t a, int32_t b);
extern void func_0204dec8(void);
extern void *func_0204de74(void *p);
extern int32_t func_0204b39c(void *a, uint32_t *b);
extern void func_0204a914(uint32_t x);
extern void func_0204ded0(void *p);

int32_t func_0204bbc4(void *p, uint32_t *q) {
    uint32_t a = func_0204de70(p);
    uint32_t b = func_0204de7c(p);
    void *c = func_0204de80(p);
    uint32_t v = q[1];
    if (v != 0) {
        func_0204b0ac(a, 11);
        return -1;
    }
    func_0204dec8();
    void *d = func_0204de74(p);
    int32_t r = func_0204b39c(d, q);
    if (r >= 0) {
        q[1] = 1;
        func_0204a914(b);
    } else {
        func_0204b0ac(a, 1);
    }
    func_0204ded0(c);
    return r;
}
