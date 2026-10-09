#include "ffc/types.h"

extern void func_0206ab18(void *p);
extern void func_0206aaf0(void *p);
extern void func_02056844(void *p);
extern uint8_t data_ov007_021c2924[];

void *func_ov007_0219bcb4(void *a)
{
    void **r4;

    r4 = a;
    *r4 = data_ov007_021c2924;
    func_0206ab18(a);
    func_0206aaf0(r4);
    func_02056844(r4);
    return r4;
}
