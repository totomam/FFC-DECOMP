/* cflags: -nothumb */
#include "ffc/types.h"

extern void func_01ff9090(void);
extern uint32_t data_02fe0020[];

void func_01ff9038(void)
{
    uint32_t r;
    int i;

    if (*(uint32_t *)0x4000208 == 0) {
        return;
    }
    r = *(uint32_t *)0x4000210 & *(uint32_t *)0x4000214;
    if (r == 0) {
        return;
    }
    i = 0;
    while (!(r & (1u << i))) {
        i++;
    }
    *(uint32_t *)0x4000218 = 1u << i;
    ((void (*)(void))data_02fe0020[i])();
    func_01ff9090();
}
