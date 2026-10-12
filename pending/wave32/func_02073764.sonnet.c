#include "ffc/types.h"

extern int32_t func_ov000_02163efc(int32_t a, int32_t b, int32_t c);
extern int32_t func_ov000_02163d7c(int32_t a);
extern void func_ov000_0215b560(int32_t a);
extern int32_t func_ov000_02163dec(int32_t a, int32_t b, int32_t c);

int32_t func_02073764(int32_t a, int32_t b, int32_t c, int32_t d, uint8_t flag) {
    int32_t r;
    if (flag) {
        r = func_ov000_02163efc(b, c, d);
    } else {
        if (func_ov000_02163d7c(b) == 0) {
            func_ov000_0215b560(b);
            r = 0;
        } else {
            r = func_ov000_02163dec(b, c, d);
        }
    }
    return r != 0;
}
