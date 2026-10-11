#include "ffc/types.h"

extern void func_ov000_0214d7a8(void);
extern uint8_t *func_ov000_0214d1d8(void *fn, void *self, int32_t arg);
extern int32_t func_ov000_0214d2ac(void *self);

int32_t func_ov000_0214d75c(void *self)
{
    uint8_t *s = (uint8_t *)self;
    uint8_t *r;
    int8_t b = *(int8_t *)(s + 0xae);

    r = func_ov000_0214d1d8((void *)func_ov000_0214d7a8, self, b);
    if (r == 0) {
        return 0xae - 0xcf;
    }
    *(uint16_t *)(r + 0x10) = *(uint16_t *)(s + 0xb0);
    *(uint16_t *)(r + 0x12) = *(uint16_t *)(s + 0xb2);
    *(uint32_t *)(r + 0x14) = *(uint32_t *)(s + 0xb4);
    *(int16_t *)(s + 0xac) = *(int16_t *)(s + 0xac) | 2;
    return func_ov000_0214d2ac(self);
}
