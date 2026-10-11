#include "ffc/types.h"

extern void func_ov006_021b578c(uint32_t a, uint32_t b);
extern void func_ov006_021b51a8(uint32_t a);
extern void func_ov006_021b49fc(void *p);
extern uint32_t *data_ov006_021bc6a4;

void func_ov006_021a35d8(void) {
    func_ov006_021b578c(1, *data_ov006_021bc6a4);
    func_ov006_021b51a8(data_ov006_021bc6a4[1]);
    func_ov006_021b49fc(&data_ov006_021bc6a4);
}
