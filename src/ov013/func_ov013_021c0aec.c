#include "ffc/types.h"

extern uintptr_t func_02069734(const void *object);
extern uint32_t func_020692e0(uint32_t a);
extern void func_020692f0(uint32_t a);

void func_ov013_021c0aec(void *obj)
{
    uint8_t *p = (uint8_t *)obj;
    if (p[0xcc] != 0) {
        if (func_02069734(obj) == 0) {
            if (func_020692e0(*(uint32_t *)(p + 0xc0)) != 0) {
                func_020692f0(*(uint32_t *)(p + 0xc0));
            }
        }
    }
}
