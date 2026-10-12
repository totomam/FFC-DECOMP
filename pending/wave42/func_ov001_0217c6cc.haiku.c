#include "ffc/types.h"

extern void func_ov000_021653f4(void *p);
extern void func_ov000_02168738(void *p);
extern void func_ov001_0217b0ec(void *p);

void func_ov001_0217c6cc(void *obj) {
    void **p = (void **)obj;

    if (p[2] != 0) {
        func_ov000_021653f4(((void **)p[2])[2]);
        ((void **)p[2])[2] = 0;
        func_ov000_021653f4(((void **)p[2])[3]);
        ((void **)p[2])[3] = 0;
        func_ov000_021653f4(p[2]);
        p[2] = 0;
    }

    if (p[3] != 0) {
        func_ov000_021653f4(((void **)p[3])[2]);
        ((void **)p[3])[2] = 0;
        func_ov000_021653f4(((void **)p[3])[3]);
        ((void **)p[3])[3] = 0;
        func_ov000_021653f4(((void **)p[3])[4]);
        ((void **)p[3])[4] = 0;
        func_ov000_021653f4(((void **)p[3])[5]);
        ((void **)p[3])[5] = 0;
        if (((void **)p[3])[14] != 0) {
            func_ov000_02168738(((void **)p[3])[14]);
            ((void **)p[3])[14] = 0;
        }
        func_ov000_021653f4(p[3]);
        p[3] = 0;
    }

    func_ov001_0217b0ec(p);
    func_ov000_021653f4(p[5]);
    p[5] = 0;
    func_ov000_021653f4(p[7]);
    p[7] = 0;
}
