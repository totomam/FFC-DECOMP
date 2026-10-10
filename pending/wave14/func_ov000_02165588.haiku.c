#include "ffc/types.h"

extern int32_t func_ov000_0214f168(void *p, uint32_t *out);

uint32_t func_ov000_02165588(void *p)
{
    uint32_t v;
    if (func_ov000_0214f168(p, &v) == 0) {
        return (uint32_t)-1;
    }
    return v;
}
