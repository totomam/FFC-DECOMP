#include "ffc/types.h"

extern int32_t func_02090410(const uint8_t *first, const uint8_t *second, uint32_t length);

int32_t func_ov000_02166434(const uint8_t *first, const uint8_t *second)
{
    return func_02090410(first + 0x10, second + 0x10, 0x10);
}
