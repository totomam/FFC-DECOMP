#include "ffc/types.h"

extern int func_0208db58(void);
extern void *data_ov000_0216e268;

int func_ov000_02151728(void *p)
{
    int r;
    if (p == 0) {
        return -1;
    }
    *(uint32_t *)((uint8_t *)data_ov000_0216e268 + 0x1a90) = 2;
    r = func_0208db58();
    if (r == 2) {
        r = 0;
    }
    return r;
}
