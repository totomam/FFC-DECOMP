#include "ffc/types.h"

extern int32_t func_0200764c(void);
extern void func_02079a7c(void *p, int32_t v);
extern void func_02079a9c(void *p, int32_t v, int32_t w);

void func_02007564(void *p, int32_t v, int32_t w)
{
    if (func_0200764c() == 0) {
        return;
    }
    if (v < 0) {
        v = 0;
    } else if (v > 0x7f) {
        v = 0x7f;
    }
    if (w <= 0) {
        func_02079a7c(p, v);
    } else {
        func_02079a9c(p, v, w);
    }
}
