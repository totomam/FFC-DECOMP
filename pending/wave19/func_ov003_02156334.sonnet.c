#include "ffc/types.h"

extern void func_02024b20(void *p, int32_t v);

void func_ov003_02156334(int32_t *a, uint8_t *b)
{
    void *p = *(void **)(b + 0x110);
    a[0] = 0;
    a[1] = 0;
    if (p != 0) {
        p = *(void **)((uint8_t *)p + 0x34);
        if (p != 0) {
            func_02024b20(p, -1);
        }
    }
}
