#include "ffc/types.h"

extern uint32_t func_02088978(void);
extern void func_0208898c(uint32_t irq);
extern uint8_t *func_ov000_0214fa54(void);
extern void func_0208763c(void *lock);
extern void func_02087678(void *lock);
extern uint32_t func_ov000_021503e4(uint8_t type, uint8_t *p, uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4);
extern void func_ov000_02150894(uint32_t a0, uint8_t *p, uint16_t v, uint32_t z);
extern uint32_t func_02087460(void);
extern void func_021db068(uint32_t a0, uint8_t *p, uint16_t v, uint32_t z);
extern uint8_t data_ov000_0216e228[];

uint32_t func_ov000_021502c4(uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4)
{
    uint8_t *p;
    uint32_t irq;
    uint32_t off;
    uint16_t v;

    irq = func_02088978();
    if (func_ov000_0214fa54() == 0) {
        func_0208898c(irq);
        return -1;
    }
    func_0208763c(data_ov000_0216e228);
    p = func_ov000_0214fa54();
    if (p == 0) {
        func_02087678(data_ov000_0216e228);
        func_0208898c(irq);
        return -1;
    }
    off = 0x12de;
    if (p[off] != 9 || p[off - 1] == 1) {
        func_02087678(data_ov000_0216e228);
        func_0208898c(irq);
        return -4;
    }
    v = (uint16_t)func_ov000_021503e4(p[off + 1], p, a1, a2, a3, a4);
    if (p[off + 1] == 1) {
        func_ov000_02150894(a0, p, v, 0);
    } else if (p[off + 1] == 2) {
        if (func_02087460() != 0) {
            func_021db068(a0, p, v, 0);
        }
    }
    func_02087678(data_ov000_0216e228);
    func_0208898c(irq);
    return a2 + a4;
}
