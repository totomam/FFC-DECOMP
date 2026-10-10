#include "ffc/types.h"

extern void func_ov006_021b392c(uint32_t);
extern uint32_t data_ov006_021bc814[];

void func_ov006_021b3e08(uint32_t idx) {
    func_ov006_021b392c(data_ov006_021bc814[idx]);
    data_ov006_021bc814[idx] = 0;
}
