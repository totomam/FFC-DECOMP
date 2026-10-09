#include "ffc/types.h"

extern void func_0206ab18(void *p);
extern void func_0206aaf0(void *p);
extern void func_02056844(void *p);
extern uint8_t data_ov001_021946b8[];

void *func_ov001_0218b6c0(void *a)
{
    void **r4;

    r4 = a;
    *r4 = data_ov001_021946b8;
    func_0206ab18(a);
    func_0206aaf0(r4);
    func_02056844(r4);
    return r4;
}
