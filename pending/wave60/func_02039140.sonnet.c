#include "ffc/types.h"
extern void func_02092878(void *p);
void func_02039140(uint8_t *p, int a, uint8_t b, uint8_t c)
{
    p[4] = 1;
    p[5] = b;
    p[6] = c;
    func_02092878(p + 7);
}
