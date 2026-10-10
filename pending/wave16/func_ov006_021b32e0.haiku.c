#include "ffc/types.h"

extern void func_ov006_021b34a8(void);
extern void func_ov006_021b2adc(void (*fn)(void));
extern void func_ov006_021b347c(void);
extern uint8_t *data_ov006_021bc808;

void func_ov006_021b32e0(void)
{
    func_ov006_021b34a8();
    func_ov006_021b2adc(func_ov006_021b347c);
    data_ov006_021bc808[0xa90] = 8;
}
