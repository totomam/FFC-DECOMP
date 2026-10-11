#include "ffc/types.h"

extern uint8_t data_02141858[];
extern void func_02088224(uint32_t x);
extern void func_0208658c(uint32_t irq, void (*handler)(void));
extern void func_020866dc(uint32_t irq);
extern void func_0208828c(void);

void func_0208823c(void) {
    uint8_t *p = data_02141858;
    if (*(uint16_t *)p != 0) {
        return;
    }
    *(uint16_t *)p = 1;
    func_02088224(0);
    *(uint32_t *)(p + 8) = 0;
    *(uint32_t *)(p + 12) = 0;
    *(volatile uint16_t *)0x4000102 = 0;
    *(volatile uint16_t *)0x4000100 = 0;
    *(volatile uint16_t *)0x4000102 = 0xc1;
    func_0208658c(8, func_0208828c);
    func_020866dc(8);
    *(uint32_t *)(p + 4) = 0;
}
