#include "ffc/types.h"

extern void *func_0204de50(void *p);
extern void *func_0204de80(void *p);
extern void *func_0204dc74(void *a, void *b);

uint32_t func_0204e1bc(void *p) {
    void *r;
    r = func_0204de50(p);
    r = func_0204de80(r);
    r = func_0204dc74(r, p);
    if (r != 0) {
        return ((uint32_t *)r)[1];
    }
    return (uint32_t)-1;
}
