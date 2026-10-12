#include "ffc/types.h"

extern int32_t func_ov001_0217f53c(uint8_t *p, int32_t n);
extern void func_ov001_0217f468(uint8_t *p, int32_t n);
extern void func_ov001_0217f7cc(uint8_t *p, int32_t n);
extern uint32_t data_ov001_021918cc;
extern void *data_ov001_021918a4;

int32_t func_ov001_0217f860(uint8_t *p, int32_t n)
{
    int32_t orig = n;
    uint8_t *r4;
    int32_t len;

    r4 = (uint8_t *)func_ov001_0217f53c(p, n);
    while (n > 0 && r4 != 0) {
        data_ov001_021918a4 = &data_ov001_021918cc;
        len = (int32_t)(r4 - p);
        func_ov001_0217f468(p, len);
        func_ov001_0217f7cc(p, len);
        n -= len + 7;
        p = r4 + 7;
        if (n > 0) {
            r4 = (uint8_t *)func_ov001_0217f53c(p, n);
        }
    }
    return orig - n;
}
