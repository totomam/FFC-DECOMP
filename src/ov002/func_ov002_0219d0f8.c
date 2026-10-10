#include "ffc/types.h"

extern int func_02059c20(void *p);

int func_ov002_0219d0f8(uint8_t *p)
{
    void *v = *(void **)(p + 0x20);
    if (v != 0) {
        return func_02059c20(v);
    }
    return 0;
}
