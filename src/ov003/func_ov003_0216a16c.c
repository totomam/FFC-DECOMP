#include "ffc/types.h"

extern int data_ov003_0217b094;
extern void func_0206ab18(void *object);
extern void *func_020059cc(void *object);
extern void func_0206aaf0(void *object);

void *func_ov003_0216a16c(void *p)
{
    *(void **)p = &data_ov003_0217b094;
    func_0206ab18(p);
    func_020059cc((char *)p + 0x40);
    func_0206aaf0(p);
    return p;
}
