#include "ffc/types.h"

extern void func_ov000_02168794(void *p, uint32_t b, uint32_t c);

void func_ov000_02168784(uint32_t *p, uint32_t b)
{
    if (p != 0) {
        func_ov000_02168794(p, b, *p);
    }
}
