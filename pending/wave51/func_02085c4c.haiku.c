#include "ffc/types.h"

extern uint32_t func_0208619c(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
extern uint32_t func_02088978(void);
extern void func_0208898c(uint32_t x);
extern uint32_t func_02086234(void);
extern void func_02087058(uint32_t *p);
extern uint32_t data_02141400[];
extern uint32_t data_02141450[];

uint32_t func_02085c4c(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e)
{
    uint32_t irq;
    uint32_t *g;

    if (func_0208619c(a, b, c, d, d) == 0) {
        return 4;
    }
    irq = func_02088978();
    g = data_02141400;
    if (g[0] != 0) {
        func_0208898c(irq);
        return 1;
    }
    g[0] = 2;
    func_0208898c(irq);
    g[1] = d;
    g[2] = e;
    g[17] = a;
    g[18] = b;
    g[19] = c;
    g[16] = 0;
    irq = func_02088978();
    if (func_02086234() == 1) {
        func_0208898c(irq);
        return 0;
    }
    func_0208898c(irq);
    g[0] = 0;
    func_02087058(data_02141450);
    return 3;
}
