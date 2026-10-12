#include "ffc/types.h"

extern void *func_0203b688(void *a);
extern void *func_02021610(void *a, uint32_t b);
extern void *func_0203b75c(uint32_t a);
extern void *func_ov003_0215b394(void *a, uint32_t b, uint32_t c, uint32_t d, void *e, void *f, uint32_t g, uint32_t h);
extern void func_02056bc0(void *object, void *node);

void *func_ov003_0214c18c(void *a0, void *a1, void *a2, void *a3, void *a4, void *a5)
{
    void *r4 = func_0203b688(a0);
    void *t1 = func_02021610(a5, 0);
    void *t2 = func_0203b75c(5);
    void *n = func_ov003_0215b394(a1, 0x1a, 1, 1 << 12, a3, a4, 0, 0);
    func_02056bc0(r4, n);
    func_02056bc0(r4, t2);
    func_02056bc0(r4, t1);
    if (a2 != 0) {
        func_02056bc0(r4, a2);
    }
    return r4;
}
