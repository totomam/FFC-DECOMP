#include "ffc/types.h"

extern void func_ov006_021b3cec(void *a, uint32_t b, uint32_t c, void *d);
extern uint8_t *data_ov006_021bc6a8;
extern uint8_t data_ov006_021b8058[];
extern uint8_t data_ov006_021b8076[];
extern uint8_t data_ov006_021b8060[];

void func_ov006_021a37b8(void *a0)
{
    uint8_t *ctx = data_ov006_021bc6a8;
    int n = data_ov006_021b8058[ctx[0x17]];
    uint32_t i;

    func_ov006_021b3cec(*(void **)(ctx + 8), 0xFFFFFFFF, 0, a0);
    for (i = 0; (int)i < n; i++) {
        ctx = data_ov006_021bc6a8;
        func_ov006_021b3cec(*(void **)(ctx + 4 * i), 0xFFFFFFFF,
            *(uint16_t *)(data_ov006_021b8060 + data_ov006_021b8076[(ctx[0x17] << 1) + i] * 4),
            (uint8_t *)a0 + 4);
    }
}
