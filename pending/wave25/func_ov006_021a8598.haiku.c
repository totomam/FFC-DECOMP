#include "ffc/types.h"

extern int32_t func_ov006_021a3744(void);
extern void func_ov006_021b0600(int32_t);
extern void func_ov006_021a64c8(void *);
extern void func_ov006_021a85cc(void);
extern uint8_t data_ov006_021bc760[];

void func_ov006_021a8598(void)
{
    int32_t r = func_ov006_021a3744();
    int32_t x;
    if (r != 0) {
        if (r != 1) {
            return;
        }
        data_ov006_021bc760[1] = 1;
        x = 6;
    } else {
        data_ov006_021bc760[1] = 0;
        x = 7;
    }
    func_ov006_021b0600(x);
    func_ov006_021a64c8(func_ov006_021a85cc);
}
