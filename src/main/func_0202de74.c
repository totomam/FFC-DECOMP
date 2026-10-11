#include "ffc/types.h"

extern uint32_t data_020adb64[];
extern int32_t func_02024928(uint32_t a, uint32_t *b);
extern void func_02024a80(uint32_t a, int32_t b, uint32_t *c);

uint32_t func_0202de74(uint32_t p)
{
    uint32_t buf[3];
    uint32_t ret;
    int32_t r = func_02024928(p, data_020adb64);
    ret = 0;
    if (r != (int32_t)(ret - 1)) {
        func_02024a80(p, r, buf);
        ret = buf[1];
    }
    return ret;
}
