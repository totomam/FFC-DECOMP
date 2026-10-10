#include "ffc/types.h"

extern void func_ov012_021d2524(void *p, int a);

void func_ov012_021d2640(void *p, int a)
{
    if (((uint8_t *)p)[0x131] != 0) {
        func_ov012_021d2524(p, a);
    }
}
