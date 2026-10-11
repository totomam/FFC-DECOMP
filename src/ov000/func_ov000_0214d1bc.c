#include "ffc/types.h"

extern uint32_t data_ov000_0216e050;
extern int func_02087508(uint32_t *dst, uint32_t *out, uint32_t a);

uint32_t func_ov000_0214d1bc(uint32_t a)
{
    uint32_t v;
    if (func_02087508(&data_ov000_0216e050, &v, a)) {
        return v;
    }
    return 0;
}
