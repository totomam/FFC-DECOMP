#include "ffc/types.h"

extern int func_02086b04(void *dst, uint32_t size, const void *fmt, uint32_t a, uint32_t b);
extern int func_ov001_02183108(void *p);
extern uint8_t data_ov001_02191d84[];

int func_ov001_02183130(void *p, uint32_t x)
{
    uint8_t buf[0x40];
    if (p == 0) {
        p = buf;
        func_02086b04(p, 0x40, data_ov001_02191d84, 0x02170990, x);
    }
    return func_ov001_02183108(p);
}
