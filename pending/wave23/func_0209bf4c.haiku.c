#include "ffc/types.h"

extern void func_0209bf10(uint8_t *p);
extern void func_0209bf0c(uint8_t *p);

uint32_t func_0209bf4c(uint8_t *unused, uint8_t *buf, uint32_t *len)
{
    if (*len > 1) {
        uint8_t tmp;
        uint8_t *last = buf + *len - 1;
        tmp = *last;
        *last = 0;
        func_0209bf10(buf);
        func_0209bf0c(&tmp);
    } else {
        func_0209bf0c(buf);
    }
    return 0;
}
