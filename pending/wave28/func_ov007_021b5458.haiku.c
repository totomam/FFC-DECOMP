#include "ffc/types.h"

extern uint32_t func_0205681c(uint32_t size);
extern uint32_t func_ov007_021bcdc0(uint32_t a, uint8_t *self, uint32_t *flag, uint8_t *obj, uint32_t b);
extern void func_02056bc0(void *object, uint32_t node);
extern uint32_t data_ov007_021c69a4;

void func_ov007_021b5458(uint8_t *self)
{
    uint32_t r1;
    uint32_t ret;
    uint32_t *d;
    uint32_t v0;
    uint32_t v1;

    *(uint32_t *)(self + 0x2fc) = 0;
    ret = func_0205681c(0x1dc);
    r1 = ret;
    if (ret != 0) {
        r1 = func_ov007_021bcdc0(ret, self, (uint32_t *)(self + 0x2fc), self + 0x564, *(uint32_t *)(self + 0xb8));
    }
    func_02056bc0(self + 0x14, r1);
    d = (uint32_t *)&data_ov007_021c69a4;
    v0 = d[0];
    v1 = d[1];
    *(uint32_t *)(self + 0xb0) = v0;
    *(uint32_t *)(self + 0xb4) = v1;
}
