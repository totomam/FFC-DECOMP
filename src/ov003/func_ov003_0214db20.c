#include "ffc/types.h"

extern uint32_t func_ov003_0214dd30(void *a, uint32_t b, uint32_t c, uint32_t d);
extern uint32_t func_ov003_0214db38(void *a, uint32_t b, uint32_t c, uint32_t d);

uint32_t func_ov003_0214db20(void *a, uint32_t b, uint32_t c, uint32_t d, uint32_t e)
{
    uint32_t r = func_ov003_0214dd30(a, b, c, d);
    return func_ov003_0214db38(a, r, d, e);
}
