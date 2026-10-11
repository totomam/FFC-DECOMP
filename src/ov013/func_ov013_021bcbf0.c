#include "ffc/types.h"

extern void func_020559d4(void *p);
extern uintptr_t func_02069734(const void *object);
extern uint32_t func_020696e8(const void *object);
extern void func_020692f0(uint32_t v);

void func_ov013_021bcbf0(void *p)
{
    uint8_t *obj = (uint8_t *)p;
    uint32_t *q;
    uint32_t a;
    uint32_t b;

    func_020559d4(obj + 0xb8);
    if (func_02069734(obj) != 0) {
        return;
    }
    q = (uint32_t *)(uintptr_t)func_020696e8(obj);
    a = q[1];
    b = q[2];
    if ((a & (b ^ a) & 0xf0) == 0) {
        return;
    }
    func_020692f0(*(uint32_t *)(obj + 0xf4));
}
