#include "ffc/types.h"

extern uint32_t func_020873f8(void);

uint32_t func_02087448(void)
{
    if (func_020873f8() & 0x10000000) {
        return 1;
    }
    return 0;
}
