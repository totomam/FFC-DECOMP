#include "ffc/types.h"

extern uint32_t func_02088978(void);
extern void func_0208898c(uint32_t irq);
extern void func_0208eff8(void *obj);
extern void func_02086dcc(void *obj, void *fn, void *arg, void *data, uint32_t size, uint32_t prio);
extern void func_020870a0(void *object);
extern void func_0208f004(void);
extern uint32_t data_021442a8;
extern uint32_t data_021442ac;
extern uint32_t data_021446d0;

void func_0208ef94(uint8_t *p)
{
    uint32_t irq = func_02088978();
    if (data_021442a8 == 0) {
        data_021442a8 = (uint32_t)p;
        func_0208eff8(p + 0xc4);
        func_0208eff8(&data_021442ac);
        *(uint32_t *)(p + 0xc0) = 0;
        func_02086dcc(p, (void *)func_0208f004, p, &data_021446d0, 0x400, 0x14);
        func_020870a0(p);
    }
    func_0208898c(irq);
}
