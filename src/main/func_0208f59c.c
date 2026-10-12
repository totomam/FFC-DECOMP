#include "ffc/types.h"

extern void *func_0205686c(uint32_t size);
extern void func_02056880(void *p);
extern uint32_t func_0208f590(void);
extern void func_02090380(void *destination, const void *source, uint32_t length);

void *func_0208f59c(void *a, uint32_t b) {
    uint32_t n;
    void *p;

    if (a == 0) {
        return func_0205686c(b);
    }
    if (b == 0) {
        func_02056880(a);
        return 0;
    }
    n = func_0208f590();
    p = func_0205686c(b);
    if (p != 0) {
        if (n >= b) {
            n = b;
        }
        func_02090380(p, a, n);
        func_02056880(a);
    }
    return p;
}
