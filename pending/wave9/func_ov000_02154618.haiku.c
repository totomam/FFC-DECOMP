#include "ffc/types.h"

extern int32_t func_02090410(const uint8_t *first, const uint8_t *second, uint32_t length);
extern const uint8_t data_ov000_02169b14[];

int func_ov000_02154618(const uint8_t *p)
{
    if (func_02090410(p, data_ov000_02169b14, 8) == 0) {
        return 1;
    }
    return 0;
}
