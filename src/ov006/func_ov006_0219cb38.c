#include "ffc/types.h"

extern uint32_t func_02088978(void);
extern void func_0208898c(uint32_t);
extern void func_ov006_0219cba8(void *);
extern void func_ov006_0219ca70(void);
extern void func_02086dcc(void *, void (*)(void), void *, void *, uint32_t, uint32_t);
extern void func_020870a0(void *);
extern uint32_t data_ov006_021ba1c4;

void func_ov006_0219cb38(uint8_t *p, uint32_t size)
{
    uint32_t irq = func_02088978();
    if (data_ov006_021ba1c4 == 0) {
        data_ov006_021ba1c4 = (uint32_t)p;
        func_ov006_0219cba8(p + 0xc4);
        *(uint32_t *)(p + 0xc0) = 0;
        uint32_t n = (size - 0xe4) & ~3u;
        func_02086dcc(p, func_ov006_0219ca70, p, p + 0xe4 + n, n, 0);
        func_020870a0(p);
    }
    func_0208898c(irq);
}
