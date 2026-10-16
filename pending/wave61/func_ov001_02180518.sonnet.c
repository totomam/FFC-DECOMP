#include "ffc/types.h"
extern void func_ov001_0218054c(void *p);
extern void func_ov001_02181b2c(void *p);
extern void func_ov001_02180004(void *p, int a);
extern void func_ov001_02181f60(void *p);
extern void func_ov001_021818f8(void *p);
void func_ov001_02180518(void *p, int f) {
    int *q = (int *)p;
    if (f != 0) {
        if (q[3] < 7) {
            func_ov001_0218054c(p);
            func_ov001_02181b2c(p);
            func_ov001_02180004(p, 0);
            func_ov001_02181f60(p);
        }
    } else {
        q[3] = 6;
        func_ov001_021818f8(p);
    }
}
