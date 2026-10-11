#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_ov003_0216674c(void *obj, void *a, uint16_t b, uint16_t c, uint32_t d, uint32_t e, uint32_t f, uint32_t g);

void func_ov003_0217426c(void *a, uint32_t b, uint32_t c, uint32_t d)
{
    void *obj = func_0205681c(0x90);
    if (obj != 0) {
        func_ov003_0216674c(obj, a, (uint16_t)b, (uint16_t)c, d, 0x1000, 0, 0);
    }
}
