#include "ffc/types.h"

extern int32_t func_0200764c(void *p);
extern void func_02079a7c(void *p, int32_t v);

void func_0200753c(void *p, int32_t v)
{
    if (func_0200764c(p) != 0) {
        if (v < 0) {
            v = 0;
        } else if (v > 0x7f) {
            v = 0x7f;
        }
        func_02079a7c(p, v);
    }
}
