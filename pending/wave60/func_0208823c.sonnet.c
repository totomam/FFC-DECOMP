#include "ffc/types.h"
extern uint16_t data_02141858[];
extern void func_02088224(int a);
extern void func_0208658c(int a, void (*f)(void));
extern void func_020866dc(int a);
extern void func_0208828c(void);
void func_0208823c(void) {
    uint32_t *p = (uint32_t *)data_02141858;
    if (data_02141858[0] != 0) return;
    data_02141858[0] = 1;
    func_02088224(0);
    p[2] = 0;
    p[3] = 0;
    *(volatile uint16_t *)0x4000102 = 0;
    *(volatile uint16_t *)0x4000100 = 0;
    *(volatile uint16_t *)0x4000102 = 0xc1;
    func_0208658c(8, func_0208828c);
    func_020866dc(8);
    p[1] = 0;
}
