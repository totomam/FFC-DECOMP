#include "ffc/types.h"

extern int32_t func_ov000_02163f68(int32_t a, int32_t b, int32_t c);
extern int32_t func_ov000_02163eb8(int32_t a, int32_t b, int32_t c);

int32_t func_020737ac(int32_t unused, int32_t a, int32_t b, int32_t c, uint8_t flag)
{
    int32_t r;
    if (flag) {
        r = func_ov000_02163f68(a, b, c);
    } else {
        r = func_ov000_02163eb8(a, b, c);
    }
    return r == a;
}
