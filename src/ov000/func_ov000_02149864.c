#include "ffc/types.h"

extern int32_t func_02092948(void *a, void *b);

void *func_ov000_02149864(uint8_t *p, void *x)
{
    int32_t i = 0;
    void **arr;
    int32_t n = *(int32_t *)(p + 0x818);
    if (n > 0) {
        arr = *(void ***)(p + 0x814);
        do {
            void *e = arr[i];
            if (func_02092948(*(void **)e, x) == 0) {
                return e;
            }
            i++;
        } while (i < n);
    }
    return 0;
}
