#include "ffc/types.h"

extern void *func_ov000_0216876c(int32_t *p, int32_t i);

void func_ov000_02168904(int32_t *p, void (*f)(void *, int32_t), int32_t arg)
{
    int32_t i;
    for (i = *p - 1; i >= 0; i--) {
        f(func_ov000_0216876c(p, i), arg);
    }
}
