#include "ffc/types.h"

extern void *func_ov000_02163350(void *p);

void *func_ov000_0216361c(void *p)
{
    void *s = func_ov000_02163350(p);
    int32_t v = *(int32_t *)((char *)s + 0x50);
    if (v >= 1) {
        return (char *)func_ov000_02163350((void *)v) + 0x54;
    }
    return 0;
}
