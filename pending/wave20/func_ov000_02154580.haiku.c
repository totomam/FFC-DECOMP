#include "ffc/types.h"

extern void func_ov000_02154640(int32_t a, uint8_t *buf);
extern int32_t func_02090410(const uint8_t *first, const uint8_t *second, uint32_t length);
extern const uint8_t data_ov000_02169b08[];

int32_t func_ov000_02154580(int32_t a)
{
    uint8_t buf[0x18];

    func_ov000_02154640(a, buf);
    if (func_02090410(buf, data_ov000_02169b08, 8) == 0) {
        return 1;
    }
    return 0;
}
