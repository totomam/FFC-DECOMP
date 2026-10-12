#include "ffc/types.h"

extern void *func_ov002_021d2b7c(const void *object, uint32_t index);

uint32_t func_ov002_021d0d8c(uint32_t unused, void *obj, uint32_t a, uint32_t b)
{
    uint32_t count = 0;
    uint32_t i = 0;

    while (i < ((uint32_t *)obj)[1]) {
        uint32_t *e = (uint32_t *)func_ov002_021d2b7c(obj, i);
        if (b == e[0]) {
            if (count == a) {
                return 1;
            }
            return 0;
        }
        if (i + 1 < ((uint32_t *)obj)[1]) {
            uint32_t *x = (uint32_t *)func_ov002_021d2b7c(obj, i);
            uint32_t *y = (uint32_t *)func_ov002_021d2b7c(obj, i + 1);
            if (x[1] != y[1]) {
                count++;
            }
        }
        i++;
    }
    return 0;
}
