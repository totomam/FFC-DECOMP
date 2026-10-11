#include "ffc/types.h"

extern uint32_t func_0208d570(void);
extern void func_ov006_021b49fc(volatile uint32_t *p);
extern volatile uint32_t data_ov006_021bc7e0;

void func_ov006_021afa00(void)
{
    if (data_ov006_021bc7e0) {
        do {
        } while (func_0208d570() != 0x8000);
        func_ov006_021b49fc(&data_ov006_021bc7e0);
    }
}
