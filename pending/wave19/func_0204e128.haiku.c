#include "ffc/types.h"

extern void func_0204de50(void *p);
extern void *func_0204de80(void);
extern void *func_0204dc74(void *a, void *b);

uint32_t func_0204e128(void *p) {
    func_0204de50(p);
    void *r = func_0204dc74(func_0204de80(), p);
    if (r == 0) {
        return (uint32_t)-1;
    }
    return *(uint32_t *)r;
}
