#include "ffc/types.h"

extern uint8_t data_020b1c98[];
extern void func_0208823c(void *p);
extern void func_02088e8c(void *p);

void *func_0206be34(void *self)
{
    uint8_t *p = (uint8_t *)self;
    *(uint32_t *)(p + 0xc) &= ~0xffu;
    *(void **)p = (void *)data_020b1c98;
    *(uint16_t *)(p + 0x9d4) = 0;
    func_0208823c((void *)data_020b1c98);
    func_02088e8c(p + 0x14);
    *(uint32_t *)(p + 0x9d8) = 0;
    *(uint32_t *)(p + 0x9d4) = 0;
    return self;
}
