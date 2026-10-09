#include "ffc/types.h"

extern void func_ov007_021b2788(void *p);
extern void func_ov001_0218e0a8(void *p);
extern void func_02056844(void *p);
extern uint8_t data_ov007_021c6028[];

void *func_ov007_021b2618(void *a)
{
    void **r4;

    r4 = a;
    *r4 = data_ov007_021c6028;
    func_ov007_021b2788(a);
    func_ov001_0218e0a8(r4);
    func_02056844(r4);
    return r4;
}
