#include "ffc/types.h"

extern uint32_t *func_0205681c(uint32_t size);
extern uint32_t *func_0202c8b4(uint32_t *obj, uint32_t arg);
extern void func_02056b88(void *dst, uint32_t *src);

uint32_t func_02030658(uint8_t *self, uint32_t param)
{
    uint32_t *obj;

    obj = func_0205681c(0x19c);
    if (obj != 0) {
        obj = func_0202c8b4(obj, *(uint32_t *)(self + 0x98));
    }
    *(uint32_t **)(self + 0x8c) = obj;
    obj[3] &= ~0xffU;
    ((uint8_t *)*(uint32_t **)(self + 0x8c))[0x41] = self[0xc0];
    ((uint8_t *)*(uint32_t **)(self + 0x8c))[0x43] = 1;

    if (self[0x44a] == 1) {
        obj = *(uint32_t **)(self + 0x8c);
        obj[6] = (uint32_t)((int32_t)*(int32_t *)(self + 0x410) >> (param + 8));
        obj[7] = 1U << 30;
    } else {
        obj = *(uint32_t **)(self + 0x8c);
        obj[6] = param;
        obj[7] = 1U << 30;
    }

    func_02056b88(self + 0x48, *(uint32_t **)(self + 0x8c));
    return 100;
}
