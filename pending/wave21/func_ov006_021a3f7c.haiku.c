#include "ffc/types.h"

extern uint32_t *data_ov006_021bc6f8;
extern void func_ov006_021b578c(uint32_t a, uint32_t b);
extern void func_ov006_021b51a8(uint32_t a);
extern void func_ov006_021b49fc(uint32_t **p);

void func_ov006_021a3f7c(void) {
    if (data_ov006_021bc6f8 != 0) {
        func_ov006_021b578c(0, data_ov006_021bc6f8[1]);
        func_ov006_021b51a8(data_ov006_021bc6f8[0]);
        func_ov006_021b49fc(&data_ov006_021bc6f8);
    }
}
