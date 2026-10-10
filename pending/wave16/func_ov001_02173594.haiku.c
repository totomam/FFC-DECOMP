#include "ffc/types.h"

extern void func_ov000_02168738(void *p);
extern void func_ov000_021653f4(void *p);

void func_ov001_02173594(void **p)
{
    if (*p) {
        func_ov000_02168738(*p);
    }
    *p = 0;
    func_ov000_021653f4(p);
}
