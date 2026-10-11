#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_ov003_0215fb30(void *obj, uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint8_t f);

void func_ov003_02149448(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint8_t f)
{
    void *p = func_0205681c(0xf4);
    if (p != 0) {
        func_ov003_0215fb30(p, a, b, c, d, e, f);
    }
}
