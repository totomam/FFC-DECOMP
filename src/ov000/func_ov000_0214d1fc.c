#include "ffc/types.h"

extern void func_020874ac(void *dst, void *src, uint32_t n);
extern uint8_t data_ov000_0216e050[];

void func_ov000_0214d1fc(void *p)
{
    if (p) {
        func_020874ac(data_ov000_0216e050, p, 0);
    }
}
