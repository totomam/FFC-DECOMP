#include "ffc/types.h"

extern uint8_t data_ov006_021ba150[];
extern void func_ov006_0219c4a4(uint32_t a);

void func_ov006_0219c5e8(uint32_t a) {
    uint8_t *p = *(uint8_t **)(data_ov006_021ba150 + 0x10);
    *(uint32_t *)(p + 0x1320) = 0;
    func_ov006_0219c4a4(a);
}
