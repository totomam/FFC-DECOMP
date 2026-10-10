/* cflags: -nothumb */
#include "ffc/types.h"

extern uint32_t func_020885ac(void);

void func_0208859c(void)
{
    uint32_t r = func_020885ac();
    if (r) {
        func_020885ac();
    }
}
