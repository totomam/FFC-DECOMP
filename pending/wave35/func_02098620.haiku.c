#include "ffc/types.h"

extern int32_t func_02097a54(void *p);
extern void func_02098888(void *p);
extern int32_t func_020988a8(void *p);

int32_t func_02098620(void *a0)
{
    uint8_t *s = (uint8_t *)a0;

    if (s[0x3a] == 0) {
        return 0xffff;
    }
    if (*(uint32_t *)(s + 0x14) != 0) {
        if (func_02097a54(s) < 0) {
            return 0xffff;
        }
        *(uint32_t *)(s + 0x14) = 0;
        *(uint32_t *)(s + 0x10) = 0;
        *(uint32_t *)(s + 0x18) = 0;
    }
    if (*(uint32_t *)(s + 0x8) == 0) {
        func_02098888(s);
    }
    if (*(uint32_t *)(s + 0x8) >= *(uint32_t *)(s + 0xc)) {
        if (func_020988a8(s) <= 0) {
            return 0xffff;
        }
    }
    return *(uint16_t *)(*(uint32_t *)(s + 0x8));
}
