/* cflags: -nothumb */
#include "ffc/types.h"

uint32_t func_ov014_021462cc(void *p)
{
    if (*(uint32_t *)((uint8_t *)p + 0x20) == 0) {
        return 0;
    }
    if (*(uint32_t *)((uint8_t *)p + 0x28) != 0) {
        return 0x80;
    }
    return 0x100;
}
