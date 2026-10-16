#include "ffc/types.h"
extern void func_ov006_021b5064(uint32_t);
extern void func_ov006_021b3ef8(uint32_t);
extern void func_ov006_021b49fc(void *);
extern uint8_t *data_ov006_021bc884;
void func_ov006_021b5678(void) {
    int i;
    for (i = 0; i < 2; i++) {
        func_ov006_021b5064(*(uint32_t *)(data_ov006_021bc884 + i * 64 + 8));
        func_ov006_021b3ef8(*(uint32_t *)(data_ov006_021bc884 + i * 64));
    }
    func_ov006_021b49fc(&data_ov006_021bc884);
}
