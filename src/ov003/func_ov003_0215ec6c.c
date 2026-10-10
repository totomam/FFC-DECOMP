#include "ffc/types.h"

extern void func_02050bb0(void *p);
extern void func_ov003_0215e190(void *p);

void func_ov003_0215ec6c(uint8_t *p)
{
    func_02050bb0(p + 0x80);
    func_ov003_0215e190(p);
}
