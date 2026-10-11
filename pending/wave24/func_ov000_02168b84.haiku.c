#include "ffc/types.h"

extern void func_ov000_02168904(void *a, void *b, void *c);

void func_ov000_02168b84(void *obj, void *a, void *b)
{
    int32_t i;
    for (i = 0; i < *(int32_t *)((uint8_t *)obj + 4); i++) {
        func_ov000_02168904(((void **)*(void **)obj)[i], a, b);
    }
}
