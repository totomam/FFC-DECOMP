#include "ffc/types.h"

extern void *func_ov000_02163690(void *p);
extern void func_ov000_021634c8(void *p);

uint32_t func_ov000_0215b7b8(void *p)
{
    uint32_t *q = (uint32_t *)func_ov000_02163690(p);
    uint32_t v;
    if (q == 0) {
        return 0;
    }
    v = *q;
    func_ov000_021634c8(p);
    return v;
}
