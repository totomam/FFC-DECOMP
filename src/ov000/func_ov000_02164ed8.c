#include "ffc/types.h"

extern void *func_ov000_02164ed0(void);
extern void func_ov000_02165844(void *p);

void func_ov000_02164ed8(void)
{
    func_ov000_02165844((char *)func_ov000_02164ed0() + 0x10);
}
