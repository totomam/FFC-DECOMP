#include "ffc/types.h"

extern uint32_t func_0204dc74(void *a, void *b);
extern uint32_t *func_0204dc48(void *a, void *b);
extern void func_0204dde4(void *a, void *b, uint32_t p2, uint32_t p3, uint32_t p4);

void func_0204dd14(void *a, void *b) {
    uint32_t *x;
    uint32_t tmp[3];
    void (*fn)(void *, int, void *);
    if (func_0204dc74(a, b) == 0) return;
    x = func_0204dc48(a, b);
    if (x == 0) return;
    fn = (void (*)(void *, int, void *))((uint32_t *)b)[7];
    if (fn == 0) return;
    tmp[0] = x[10];
    tmp[1] = x[7];
    tmp[2] = x[1];
    fn(b, 2, tmp);
    func_0204dde4(a, b, tmp[0], tmp[1], tmp[2]);
}
