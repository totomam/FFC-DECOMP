#include "ffc/types.h"

extern void func_ov006_021a4b14(uint8_t a, int b, uint32_t c);
extern void func_ov006_021b5770(void *obj, void *fn);
extern void func_ov006_021a5140(void);
extern uint8_t *data_ov006_021bc6fc;

void func_ov006_021a5100(void *obj) {
    uint8_t *base = data_ov006_021bc6fc;
    uint32_t idx = (uint8_t)(**(uint32_t **)(base + 0xc0)) + 0xc;

    func_ov006_021a4b14(base[0x11d], 3, idx);
    if (idx >= 0xc0) {
        func_ov006_021b5770(obj, func_ov006_021a5140);
    }
}
