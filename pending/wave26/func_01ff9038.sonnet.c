/* cflags: -nothumb */
#include "ffc/types.h"

extern void func_01ff9090(void);
extern void (*data_02fe0020[])(void);

void func_01ff9038(void)
{
    uint32_t r;
    int n;

    if (*(volatile uint32_t *)0x4000208 == 0) return;
    r = *(volatile uint32_t *)0x4000210 & *(volatile uint32_t *)0x4000214;
    if (r == 0) return;
    do {
        n = __builtin_clz(r);
        r &= ~(0x80000000u >> n);
    } while (r);
    *(volatile uint32_t *)0x4000214 = 0x80000000u >> n;
    data_02fe0020[31 - n]();
    func_01ff9090();
}
