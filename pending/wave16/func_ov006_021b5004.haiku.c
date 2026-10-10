#include "ffc/types.h"

extern void func_020866bc(void *p);
extern void func_0208658c(int a, uint32_t b);
extern uint32_t data_ov006_021bc840[];

void func_ov006_021b5004(void)
{
    volatile uint16_t *ime = (volatile uint16_t *)0x04000208;
    uint16_t dummy = *ime;
    (void)dummy;
    *ime = 0;
    func_020866bc((void *)data_ov006_021bc840[1]);
    func_0208658c(1, data_ov006_021bc840[0]);
}
