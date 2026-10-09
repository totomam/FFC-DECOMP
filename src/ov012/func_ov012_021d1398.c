#include "ffc/types.h"

extern void func_0206ab18(void *p);
extern void func_0206aaf0(void *p);
extern void func_02056844(void *p);
extern uint8_t data_ov012_021d3da0[];

void *func_ov012_021d1398(void *a)
{
    void **r4;

    r4 = a;
    *r4 = data_ov012_021d3da0;
    func_0206ab18(a);
    func_0206aaf0(r4);
    func_02056844(r4);
    return r4;
}
