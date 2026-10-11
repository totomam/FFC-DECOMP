#include "ffc/types.h"

extern uint8_t data_ov006_021ba150[];

typedef void (*fn_t)(uint32_t, void *);

void func_ov006_0219c99c(uint32_t r0, uint32_t r1) {
    uint16_t buf[2];
    uint8_t *obj;
    fn_t f;

    if (r1 == 2 || r1 == 0) {
        return;
    }
    buf[0] = (uint16_t)r0;
    buf[1] = (uint16_t)r1;
    obj = *(uint8_t **)(data_ov006_021ba150 + 0xc);
    f = *(fn_t *)(obj + 0x51c);
    f(0xff, buf);
}
