#include "ffc/types.h"

extern void func_ov006_021b0644(void);
extern void func_ov006_021b0600(int x);
extern void func_ov006_021a64c8(void *p);
extern void func_ov006_021a8e2c(void);
extern uint8_t data_ov006_021bc76c;

void func_ov006_021a8fb8(void)
{
    func_ov006_021b0644();
    func_ov006_021b0600(7);
    data_ov006_021bc76c = 0;
    func_ov006_021a64c8((void *)func_ov006_021a8e2c);
}
