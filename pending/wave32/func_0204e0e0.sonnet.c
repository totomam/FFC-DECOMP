#include "ffc/types.h"

extern int32_t func_0204de50(void *p);
extern void *func_0204de80(void);
extern int32_t *func_0204dc74(void *a, void *b);
extern int32_t func_0204bbc4(int32_t x, int32_t y);
extern void func_0204ded8(void *a, int32_t *b);

int32_t func_0204e0e0(void *p) {
    int32_t r5 = func_0204de50(p);
    void *r6 = func_0204de80();
    int32_t *r4 = func_0204dc74(r6, p);
    if (r4 == 0) {
        return -1;
    }
    int32_t t = r4[4];
    if (t == 0) {
        return -1;
    }
    r4[6] = func_0204bbc4(r5, t);
    if (r4[6] >= 0) {
        r4[0] = 1;
        func_0204ded8(r6, r4);
    }
    return 0;
}
