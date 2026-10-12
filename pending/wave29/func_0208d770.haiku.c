#include "ffc/types.h"

extern void func_02089334(void);
extern int32_t func_0208942c(uint32_t *p);
extern uint32_t data_020b2bac;

uint32_t func_0208d770(void) {
    uint32_t buf[3];
    if (data_020b2bac == 0x10000) {
        func_02089334();
        if (func_0208942c(buf) == 0) {
            data_020b2bac = (uint16_t)(buf[2] + (buf[1] << 8));
        }
    }
    data_020b2bac = (uint16_t)(data_020b2bac + 1);
    return (uint16_t)data_020b2bac;
}
