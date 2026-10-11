#include "ffc/types.h"

uint32_t *func_ov001_0217f30c(uint32_t *p)
{
    if (p == 0) {
        return 0;
    }
    if (p[1] == 2) {
        return (uint32_t *)p[3];
    }
    return p + 3;
}
