#include "ffc/types.h"

extern uint32_t func_ov003_02160474(void *a, uint32_t c);
extern void func_ov003_02160230(void *a, uint32_t c);
extern void func_ov003_02160424(void *a, uint32_t c, uint32_t d);

void func_ov003_021604ec(void *a, uint32_t b, uint32_t c)
{
    if (func_ov003_02160474(a, c) != 0) {
        if (b != 0) {
            func_ov003_02160230(a, c);
        } else {
            func_ov003_02160424(a, c, 0);
        }
    }
}
