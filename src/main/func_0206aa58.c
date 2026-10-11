#include "ffc/types.h"

extern uint8_t data_020b1ba8[];
extern uint32_t data_0213df20;
extern void func_02087620(void *object);

void *func_0206aa58(uint8_t *obj, uint32_t r1, uint32_t r2)
{
    uint32_t *w = (uint32_t *)obj;
    w[3] &= ~0xffu;
    *(uint8_t **)obj = data_020b1ba8;
    if (r1 == 0) {
        r1 = data_0213df20;
    }
    w[5] = r1;
    func_02087620(obj + 0x18);
    obj[0x34] = 0;
    obj[0x35] = 0;
    w[0xc] = r2;
    return obj;
}
