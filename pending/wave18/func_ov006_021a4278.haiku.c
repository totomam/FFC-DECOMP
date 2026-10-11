#include "ffc/types.h"

extern void *data_ov006_021bc6fc;
extern void func_ov006_021b3b9c(uint32_t);
extern void func_ov006_021b5770(uint32_t, void (*)(void));
extern void func_ov006_021a50b8(void);

void func_ov006_021a4278(void) {
    func_ov006_021b3b9c(*(uint32_t *)((uint8_t *)data_ov006_021bc6fc + 0x114));
    func_ov006_021b5770(*(uint32_t *)((uint8_t *)data_ov006_021bc6fc + 0x118), func_ov006_021a50b8);
}
