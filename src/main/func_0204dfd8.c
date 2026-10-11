#include "ffc/types.h"

extern void func_0204de50(void);
extern int32_t func_0204de80(void);
extern int32_t func_0204dc74(int32_t a, void *b);
extern int32_t func_0204dffc(int32_t a);

int32_t func_0204dfd8(void *p) {
    int32_t r;
    func_0204de50();
    r = func_0204dc74(func_0204de80(), p);
    if (r == 0) {
        return -1;
    }
    return func_0204dffc(r);
}
