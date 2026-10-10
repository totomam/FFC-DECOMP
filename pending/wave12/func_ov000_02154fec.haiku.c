#include "ffc/types.h"

extern void func_ov000_02155000(int a, int b, int c, int d);

void func_ov000_02154fec(uint8_t *self, int a, int b)
{
    func_ov000_02155000(a, b, *(int32_t *)(self + 0x24), 1);
}
