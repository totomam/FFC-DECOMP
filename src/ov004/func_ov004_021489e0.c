#include "ffc/types.h"

extern void func_ov004_02149558(uint32_t a);
extern void func_ov004_02148f38(uint32_t a);

void func_ov004_021489e0(uint8_t *p)
{
    func_ov004_02149558(*(uint32_t *)(p + 0x90));
    func_ov004_02148f38(*(uint32_t *)(p + 0x94));
}
