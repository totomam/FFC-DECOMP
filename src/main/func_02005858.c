#include "ffc/types.h"

extern void func_0205f5c4(void *self, uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern void *func_0205681c(uint32_t size);
extern uint32_t func_02005304(void *mem, uint32_t a, void *self, uint32_t b, uint32_t e, uint32_t f);
extern uint32_t data_020a7dd0[];

void *func_02005858(void *self, uint32_t a, uint32_t b, uint32_t c, uint32_t e)
{
    uint32_t *obj = (uint32_t *)self;
    uint32_t r;
    func_0205f5c4(self, a, 1, c, 1);
    obj[0] = (uint32_t)data_020a7dd0;
    r = (uint32_t)func_0205681c(0x98);
    if (r != 0) {
        r = func_02005304((void *)r, a, self, b, e, 0);
    }
    obj[0x50 / 4] = r;
    return self;
}
