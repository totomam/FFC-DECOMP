#include "ffc/types.h"

extern int32_t func_02084ca4(void *src, void *dst, uint32_t size);
extern int32_t func_02090410(const uint8_t *first, const uint8_t *second, uint32_t length);
extern const uint8_t data_ov000_0216b2bc[];

int func_ov000_02164070(void *src)
{
    uint8_t buf[8];
    func_02084ca4(src, buf, 8);
    if (func_02090410(buf + 6, data_ov000_0216b2bc, 2) == 0) {
        return *(uint16_t *)(buf + 4);
    }
    return 0;
}
