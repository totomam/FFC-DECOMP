#include "ffc/types.h"
extern void *func_0203b688(void);
extern void *func_02021610(void *a, int b);
extern void *func_0203b75c(int a);
extern void *func_ov003_0215b394(void *a, int b, int c, int d, void *e, void *f, int g);
extern void func_02056bc0(void *object, void *node);
void *func_ov003_0214c18c(void *p0, void *a, void *b, void *c, void *d, void *e)
{
    void *r = func_0203b688();
    void *x = func_02021610(e, 0);
    void *y = func_0203b75c(5);
    void *n = func_ov003_0215b394(a, 0x1a, 1, 0x1000, c, d, 0);
    func_02056bc0(r, n);
    func_02056bc0(r, y);
    func_02056bc0(r, x);
    if (b != 0) func_02056bc0(r, b);
    return r;
}
