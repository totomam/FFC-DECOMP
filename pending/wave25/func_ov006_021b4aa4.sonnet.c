#include "ffc/types.h"

extern void func_0208aaf4(void);
extern void func_0208ae70(uint32_t x);
extern uint32_t func_0208ae80(uint32_t x);
extern void func_ov006_021b49fc(void *p);
extern uint8_t data_ov006_021bc82c[];

void func_ov006_021b4aa4(void)
{
    do {
        func_0208aaf4();
        func_0208ae70(4);
    } while (func_0208ae80(4) != 0);
    func_ov006_021b49fc(data_ov006_021bc82c);
}
