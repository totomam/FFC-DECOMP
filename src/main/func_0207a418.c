#include "ffc/types.h"

extern uint8_t data_0213ec3c[];
extern void func_0207c94c(void *p);
extern int32_t func_0207c95c(void *p);
extern void func_0207a468(void);
extern int32_t func_0207c92c(void *p);
extern void func_02089d10(void *p, int32_t a, int32_t b);

void func_0207a418(void) {
    int32_t *p = (int32_t *)data_0213ec3c;
    void *q;
    int32_t r5;

    if (p[0] == 0 || p[1] != 0) {
        return;
    }
    q = (uint8_t *)p + 0x3c;
    func_0207c94c(q);
    if (p[0x4c / 4] != 0) {
        if (func_0207c95c(q) != 0) {
            func_0207a468();
            return;
        }
    }
    r5 = func_0207c92c(q) >> 8;
    if (r5 != p[0x50 / 4]) {
        func_02089d10((void *)p[0x24 / 4], r5, 0);
        p[0x50 / 4] = r5;
    }
}
