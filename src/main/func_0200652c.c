#include "ffc/types.h"

extern int32_t func_02007064(uint8_t *p);

int32_t func_0200652c(uint8_t *p)
{
    if (*p != 0) {
        return func_02007064(p + 0x2ba4);
    }
    return 0;
}
