#include "ffc/types.h"

extern void *func_ov001_0217f498(void);
extern uint8_t data_ov001_0219196c[];

void *func_ov001_0217f520(void)
{
    void *p = func_ov001_0217f498();
    if (p == 0) {
        p = data_ov001_0219196c;
    }
    return p;
}
