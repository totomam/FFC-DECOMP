#include "ffc/types.h"

extern uint32_t func_0208619c(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern uint32_t func_02088978(void);
extern void func_0208898c(uint32_t irq);
extern void func_02087874(void *p, uint32_t n);
extern int func_020862c8(uint32_t a, uint32_t n, void *p);
extern void func_02087058(void *p);
extern uint32_t data_02141400[];
extern uint32_t data_021413e0[];
extern uint32_t data_02141450[];

uint32_t func_02085fac(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e)
{
    uint32_t irq;
    uint32_t n;

    if (func_0208619c(a, b, c, d) == 0) {
        return 4;
    }
    irq = func_02088978();
    if (data_02141400[0] != 0) {
        func_0208898c(irq);
        return 1;
    }
    data_02141400[0] = 3;
    func_0208898c(irq);
    data_02141400[1] = d;
    data_02141400[2] = e;
    data_02141400[0x11] = a;
    data_02141400[0x12] = b;
    data_02141400[0x13] = c;
    data_02141400[0x10] = 0;
    func_02087874(data_021413e0, 0x20);
    irq = func_02088978();
    n = 0x20;
    if (b <= 0x20) {
        n = b;
    }
    if (func_020862c8(a, n, data_021413e0) == 1) {
        func_0208898c(irq);
        return 0;
    }
    data_02141400[0] = 0;
    func_0208898c(irq);
    func_02087058(data_02141450);
    return 3;
}
