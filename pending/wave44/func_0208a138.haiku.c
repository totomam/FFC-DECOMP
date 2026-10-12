#include "ffc/types.h"

extern int func_0208a19c(void *p);
extern int func_02089f08(int x);
extern void func_0208a28c(void);

int func_0208a138(void *p)
{
    int r;
    r = func_0208a19c(p);
    if (r) {
        return r;
    }
    while (func_02089f08(0)) {
    }
    r = func_0208a19c(p);
    if (r) {
        return r;
    }
    func_0208a28c();
    r = func_0208a19c(p);
    if (r) {
        return r;
    }
    do {
        func_02089f08(1);
    } while ((r = func_0208a19c(p)) == 0);
    return r;
}
