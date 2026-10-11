#include "ffc/types.h"

extern int32_t func_ov001_02188cdc(uint32_t x);
extern void func_ov001_02189968(int32_t x);
extern void func_ov001_02189040(void *p);

void func_ov001_02189098(void *a, uint32_t b)
{
    void *p = a;
    func_ov001_02189968(func_ov001_02188cdc(b));
    func_ov001_02189040(p);
}
