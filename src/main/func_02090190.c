#include "ffc/types.h"

extern void func_020900cc(uint8_t *a, uint32_t b, uint32_t c);

void func_02090190(uint8_t *a)
{
    a[0xd] = 0;
    func_020900cc(a, 0, 0);
    a[0xd] = 0;
}
