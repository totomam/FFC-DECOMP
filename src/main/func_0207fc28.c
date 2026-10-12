#include "ffc/types.h"

extern uintptr_t func_0207e5c4(const void *object);
extern int func_0208be20(uintptr_t a, void *b);
extern int func_02087460(void);
extern uintptr_t func_0207caac(void);
extern uint8_t data_020b2938[];

uint32_t func_0207fc28(const void *obj, uint32_t v)
{
    uint32_t ret = 0;
    uintptr_t t = func_0207e5c4(obj);
    if (func_0208be20(t, data_020b2938) == 0) {
        if (func_02087460() == 0) {
            uintptr_t s = func_0207caac();
            uint16_t h = *(uint16_t *)(s + 0x92);
            if (v >= ((uint32_t)h << 19)) {
                ret = 1;
            }
        }
    }
    return ret;
}
