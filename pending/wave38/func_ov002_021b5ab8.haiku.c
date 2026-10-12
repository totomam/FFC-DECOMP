#include "ffc/types.h"

extern void func_02056c9c(void *p, uint32_t z);
extern void func_ov002_021b5b34(void *p, uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f);
extern uint32_t data_ov002_021d5d68[];

uint8_t *func_ov002_021b5ab8(uint8_t *self, uint32_t p1, uint32_t p2, uint32_t p3,
                             uint8_t e0, uint8_t e1, uint8_t e2, uint8_t e3)
{
    uint32_t hi;
    uint32_t top = 0;
    func_02056c9c(self, 0);
    *(uint32_t **)self = data_ov002_021d5d68;
    *(uint32_t *)(self + 0x90) = p1;
    *(uint32_t *)(self + 0xa0) = p2;
    if (e1) {
        top = 0x20000;
    }
    if (e0) {
        hi = 0x10000;
    } else {
        hi = 0;
    }
    *(uint32_t *)(self + 0x94) = ((((uint16_t)p3) | hi)) | top;
    func_ov002_021b5b34(self, *(uint32_t *)(self + 0xa0), (uint16_t)p3, e0, e1, e2, e3);
    return self;
}
