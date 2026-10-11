#include "ffc/types.h"

extern void func_ov003_02175118(void *p, uint32_t v);
extern void func_ov003_02174e74(void *p, int n);

void func_ov003_021743e8(void *p)
{
    func_ov003_02175118(p, *(uint32_t *)((uint8_t *)p + 0x94));
    func_ov003_02174e74(p, 6);
}
