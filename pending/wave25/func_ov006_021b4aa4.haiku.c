#include "ffc/types.h"

extern void func_0208aaf4(uint32_t p);
extern void func_0208ae70(uint32_t x);
extern uint32_t func_0208ae80(uint32_t x);
extern void func_ov006_021b49fc(void *p);
extern uint8_t data_ov006_021bc82c[];

void func_ov006_021b4aa4(uint32_t p)
{
    uint32_t n = 4;
    func_0208aaf4(p);
    func_0208ae70(n);
    if (func_0208ae80(n) == 0) {
        func_ov006_021b49fc(data_ov006_021bc82c);
    }
}
