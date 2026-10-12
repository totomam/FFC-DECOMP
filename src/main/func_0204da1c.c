#include "ffc/types.h"

extern void func_0204de50(void);
extern int32_t func_0204de70(void);
extern int32_t func_0204b320(void *a, int32_t x, int32_t b, int32_t c);

int32_t func_0204da1c(void *p, int32_t a, int32_t b)
{
    func_0204de50();
    int32_t r = func_0204de70();
    if (p == 0) {
        return -1;
    }
    if (((int32_t *)p)[1] != 0) {
        return -1;
    }
    if (func_0204b320(p, r, a, b) == 0) {
        return -1;
    }
    return 0;
}
