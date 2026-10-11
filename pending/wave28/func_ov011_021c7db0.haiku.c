#include "ffc/types.h"

extern uint32_t func_020696e8(const void *object);
extern void func_ov011_021c95f0(void *obj);
extern void func_ov011_021c9624(void *obj);

void func_ov011_021c7db0(void *obj)
{
    uint8_t *p = (uint8_t *)obj;
    const uint32_t *o;
    uint32_t a;
    uint32_t b;

    p[0x3b5] = 1;
    o = (const uint32_t *)func_020696e8(obj);
    a = o[1];
    b = o[2];
    if ((a & (a ^ b)) & 0x800) {
        func_ov011_021c95f0(obj);
        return;
    }
    o = (const uint32_t *)func_020696e8(obj);
    a = o[1];
    b = o[2];
    if ((a & (b ^ a)) & 0x400) {
        func_ov011_021c9624(obj);
    }
}
