#include "ffc/types.h"

extern void func_02077a7c(void *p, int n);
extern int func_0207ade0(void *p);

int func_0207adbc(uint32_t *a, uint32_t b)
{
    func_02077a7c((uint8_t *)a + 4, 0xc);
    a[0] = b;
    if (func_0207ade0(a) != 0) {
        return 1;
    }
    return 0;
}
