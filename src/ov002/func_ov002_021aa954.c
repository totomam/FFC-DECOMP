#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern uint32_t func_ov002_021aa778(const void *object);
extern void func_02055914(void *a, void *b);
extern uint32_t data_020ac5f8[];

void func_ov002_021aa954(uint8_t *self, uint8_t v)
{
    uint32_t *obj;

    self[0x250] = v;
    obj = (uint32_t *)func_0205681c(0x18);
    if (obj != 0) {
        uint32_t r0 = func_ov002_021aa778(self);
        obj[2] = 0;
        obj[3] = 0x10110;
        obj[0] = (uint32_t)data_020ac5f8;
        obj[4] = r0;
        *(uint8_t *)((uint8_t *)obj + 0x14) = v;
    }
    func_02055914(*(void **)(self + 0xb8), obj);
}
