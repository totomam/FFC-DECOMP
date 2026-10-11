#include "ffc/types.h"

extern int func_ov006_021a3450(void);
extern void func_02088f30(void);
extern void func_ov006_021b49fc(void *p);
extern uint8_t data_ov006_021bc734[];

void func_ov006_021a6930(void)
{
    if (func_ov006_021a3450() != 1) {
        func_02088f30();
    }
    func_ov006_021b49fc(data_ov006_021bc734);
}
