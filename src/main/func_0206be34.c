#include "ffc/types.h"

extern uint8_t data_020b1c98[];
extern void func_0208823c(void);
extern void func_02088e8c(void *p);

uint8_t *func_0206be34(uint8_t *a)
{
    *(uint32_t *)(a + 0xc) &= ~0xffu;
    *(void **)a = data_020b1c98;
    *(uint16_t *)(a + 0x9d4) = 0;
    func_0208823c();
    func_02088e8c(a + 0x14);
    *(uint32_t *)(a + 0x9d8) = 0;
    *(uint32_t *)(a + 0x9d4) = 0;
    return a;
}
