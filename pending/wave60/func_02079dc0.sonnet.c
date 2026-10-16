#include "ffc/types.h"
extern void func_02079f0c(void *p);
extern void func_0207c914(void *p, int a);
extern void func_0207a014(void *p, int a);
void func_02079dc0(uint8_t *p, int flag) {
    uint8_t *q = p;
    int f = flag;
    if (q != 0) {
        if (q[0x2c] != 0) {
            if (f != 0) {
                func_0207c914(q + 0x1c, 0);
                func_0207a014(q, 0);
                q[0x2c] = 2;
            } else {
                func_02079f0c(q);
            }
        }
    }
}
