#include "ffc/types.h"

extern int func_ov000_02147ba0(void *p, int a, int b, int c);

void func_ov000_02147c30(void *p0, int p1, void *p2, int p3, int p4, int p5)
{
    if (func_ov000_02147ba0(p0, p1, p4, p5) != 0) {
        if (p3 != 0) {
            func_ov000_02147ba0(p2, p3, p4, 0);
        }
    }
}
