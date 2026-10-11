#include "ffc/types.h"

extern int32_t func_0200764c(void *p);
extern void func_02079ae4(void *p, int32_t a, int32_t b);

void func_0200759c(void *p, int32_t x, int32_t y)
{
    if (func_0200764c(p) != 0) {
        if (x < 0) {
            x = 0;
        } else if (x > 0x7f) {
            x = 0x7f;
        }
        func_02079ae4(p, y, x);
    }
}
