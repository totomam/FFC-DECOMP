#include "ffc/types.h"

extern uint8_t data_ov006_021bc78c[];
extern uint8_t data_ov006_021b86a0[];
extern uint8_t func_ov006_021ac374(uint8_t v);
extern void func_ov006_021ac4e4(void);

void func_ov006_021ac5d4(uint8_t idx)
{
    data_ov006_021bc78c[0] = idx;
    data_ov006_021bc78c[2] = func_ov006_021ac374(data_ov006_021b86a0[idx]);
    func_ov006_021ac4e4();
}
