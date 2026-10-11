#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_ov003_02166994(void *obj, void *a, uint16_t b, uint16_t c, uint32_t d, uint32_t e);

void func_ov003_02174cc8(void *a, uint32_t b, uint32_t c, uint32_t d)
{
    void *obj = func_0205681c(0x24);
    if (obj != 0) {
        func_ov003_02166994(obj, a, (uint16_t)b, (uint16_t)c, d, 0x7fffffff);
    }
}
