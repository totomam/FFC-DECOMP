#include "ffc/types.h"

extern uint32_t func_ov002_021ad8c4(uint32_t a, uint32_t b, uint8_t c);

void func_ov002_021b0c3c(uint8_t *self, uint32_t a, uint32_t b)
{
    uint32_t r = func_ov002_021ad8c4(b, a, self[0x1b9]);
    void **obj = *(void ***)(self + 0x128);
    void **vt = (void **)obj[0];
    ((void (*)(void *, uint32_t, uint32_t))vt[14])(obj, r, 0);
}
