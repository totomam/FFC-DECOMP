#include "ffc/types.h"

extern void func_ov001_021835e0(void *p);
extern void func_ov001_02185cf4(void *p);
extern void func_ov001_02188428(void *p);

void func_ov001_021867cc(uint8_t *p)
{
    func_ov001_021835e0(p);
    func_ov001_02185cf4(p);
    func_ov001_02188428(p + 0x60);
}
