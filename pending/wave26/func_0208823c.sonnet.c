#include "ffc/types.h"

extern uint16_t data_02141858[];
extern void func_02088224(uint32_t x);
extern void func_0208658c(uint32_t irq, void (*handler)(void));
extern void func_020866dc(uint32_t irq);
extern void func_0208828c(void);

void func_0208823c(void) {
    uint16_t *p = data_02141858;
    uint32_t z;
    if (*p != 0) return;
    *p = 1;
    z = 0;
    func_02088224(0);
    *(uint32_t *)(p + 4) = z;
    *(uint32_t *)(p + 6) = z;
    *(volatile uint16_t *)0x4000102 = z;
    *(volatile uint16_t *)0x4000100 = z;
    *(volatile uint16_t *)0x4000102 = 0xc1;
    func_0208658c(8, func_0208828c);
    func_020866dc(8);
    *(uint32_t *)(p + 2) = z;
}
