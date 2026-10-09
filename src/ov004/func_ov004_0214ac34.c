#include "ffc/types.h"

extern void func_ov004_0214ac9c(void *p);
extern void func_02056db0(void *p);
extern void func_02056844(void *p);
extern uint8_t data_ov004_02158dcc[];

void *func_ov004_0214ac34(void *a)
{
    void **r4;

    r4 = a;
    *r4 = data_ov004_02158dcc;
    func_ov004_0214ac9c(a);
    func_02056db0(r4);
    func_02056844(r4);
    return r4;
}
