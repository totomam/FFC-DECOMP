#include "ffc/types.h"

extern void func_020893bc(void *p);
extern void func_0208942c(void *p);
extern int32_t func_020898d0(void *a, void *b);

int32_t func_ov000_021497b8(void)
{
    uint32_t local1[4];
    uint32_t local0[3];

    func_020893bc(local1);
    func_0208942c(local0);
    return func_020898d0(local1, local0) + (int32_t)0x386d4380;
}
