#include "ffc/types.h"

extern int32_t func_02090410(const uint8_t *first, const uint8_t *second, uint32_t length);
extern const uint8_t data_ov001_02191b58[];

int func_ov001_02182a4c(const uint8_t *p)
{
    if (func_02090410(p, data_ov001_02191b58, 6) == 0) {
        return 1;
    }
    return 0;
}
