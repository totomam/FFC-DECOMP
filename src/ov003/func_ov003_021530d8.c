#include "ffc/types.h"

extern void func_0206ab18(void *p);
extern void func_0206aaf0(void *p);
extern void func_02056844(void *p);
extern uint8_t data_ov003_02179e4c[];

void *func_ov003_021530d8(void *a)
{
    void **r4;

    r4 = a;
    *r4 = data_ov003_02179e4c;
    func_0206ab18(a);
    func_0206aaf0(r4);
    func_02056844(r4);
    return r4;
}
