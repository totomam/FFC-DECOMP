#include "ffc/types.h"

extern void func_02092878(uint8_t *p);

void func_02039140(uint8_t *p, uint32_t unused, uint8_t a, uint8_t b)
{
    p[4] = 1;
    p[5] = a;
    p[6] = b;
    func_02092878(p + 7);
}
