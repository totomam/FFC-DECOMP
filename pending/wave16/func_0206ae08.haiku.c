#include "ffc/types.h"

extern void func_0206ad9c(void *p);
extern void func_0206ae24(void *p);

void func_0206ae08(void *a)
{
    uint8_t *p = (uint8_t *)a;
    if (p[0x3c] != 0) {
        func_0206ad9c(a);
    }
    func_0206ae24(a);
}
