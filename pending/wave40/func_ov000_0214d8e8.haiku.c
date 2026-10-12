#include "ffc/types.h"

extern int32_t func_ov000_0214dd00(uint8_t *a, int32_t b, int32_t c, int32_t d, int32_t e, int32_t f);
extern int32_t func_ov000_0214d964(uint8_t *a, int32_t b, int32_t c, int32_t d, int32_t e, int32_t f);
extern void func_ov000_0214dc8c(uint8_t *a);

int32_t func_ov000_0214d8e8(uint8_t *a, int32_t b, int32_t c, int32_t d, int32_t e, int32_t f, uint32_t g)
{
    int32_t ret;
    int8_t saved;
    int8_t *p;
    int32_t flag;

    p = *(int8_t **)(a + 0xa0);
    flag = 0;
    if ((g & 2) && p) {
        flag = 1;
    }
    if (flag) {
        saved = p[0xfe];
        p[0xfe] = 1;
    }
    if (*(int8_t *)(a + 0xaf) == 1) {
        ret = func_ov000_0214dd00(a, b, c, d, e, f);
    } else {
        ret = func_ov000_0214d964(a, b, c, d, e, f);
        if (ret >= 0) {
            func_ov000_0214dc8c(a);
        }
    }
    if (flag) {
        p[0xfe] = saved;
    }
    return ret;
}
