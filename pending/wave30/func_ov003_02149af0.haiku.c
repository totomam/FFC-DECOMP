#include "ffc/types.h"

extern void func_ov003_0214b860(void *p, uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
extern void func_ov003_0214b390(void *p, uint32_t a, uint32_t b, uint32_t c);

void func_ov003_02149af0(void *p, uint32_t mode)
{
    if (mode <= 1) {
        func_ov003_0214b860(p, 1, 0, 0, 0, 0);
        func_ov003_0214b390(p, 0, 0, 0);
    }
    if (mode == 0 || mode == 2) {
        func_ov003_0214b860(p, 2, 0, 0, 0, 0);
        func_ov003_0214b390(p, 1, 0, 0);
    }
}
