#include "ffc/types.h"

extern void *func_0205686c(uint32_t size);
extern void *func_020903cc(void *object, int zero, uint32_t n);

void *func_0208f5e4(uint32_t a, uint32_t b) {
    uint32_t n;
    void *p;
    n = b;
    n = n * a;
    p = func_0205686c(n);
    if (p) {
        func_020903cc(p, 0, n);
    }
    return p;
}
