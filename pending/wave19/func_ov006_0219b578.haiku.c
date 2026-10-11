#include "ffc/types.h"

extern uint8_t data_ov006_021ba150[];

void func_ov006_0219b578(uint8_t *a) {
    uint8_t *s = data_ov006_021ba150;
    uint32_t off = 0x50d;
    uint32_t z = 0;
    uint8_t *q = *(uint8_t **)(s + 0xc);
    void (*f)(int);
    uint8_t *r4;
    q[off] = (uint8_t)z;
    r4 = *(uint8_t **)(s + 0x10);
    *(uint16_t *)(r4 + 0x1316) = (uint16_t)z;
    f = *(void (**)(int))(*(uint8_t **)(s + 0xc) + off + 0xf);
    if (f != 0) {
        f(0x11);
    }
}
