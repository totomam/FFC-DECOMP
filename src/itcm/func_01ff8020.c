#include "ffc/types.h"

extern void func_0208763c(void *p);
extern void func_02087678(void *p);
extern uint32_t func_01ff8298(void *p);
extern uint32_t data_02fe00b8;
extern uint32_t data_02fe00b0;
extern uint32_t data_02fe00b4;

uint32_t func_01ff8020(void *a) {
    uint32_t r;
    uint16_t ime;
    volatile uint16_t *reg;

    func_0208763c(&data_02fe00b8);
    if (data_02fe00b0 != 0) {
        reg = (volatile uint16_t *)0x4000208;
        ime = *reg;
        *reg = 0;
        data_02fe00b4 = ime;
    }
    r = func_01ff8298(a);
    if (data_02fe00b0 != 0) {
        reg = (volatile uint16_t *)0x4000208;
        *reg;
        *reg = data_02fe00b4;
    }
    func_02087678(&data_02fe00b8);
    return r;
}
