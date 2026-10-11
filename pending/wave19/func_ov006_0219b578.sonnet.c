#include "ffc/types.h"

extern uint8_t data_ov006_021ba150[];

void func_ov006_0219b578(int a) {
    uint8_t *s = data_ov006_021ba150;
    void (*f)(int, int);
    *(uint8_t *)(*(uint8_t **)(s + 0xc) + 0x50d) = 0;
    *(uint16_t *)(*(uint8_t **)(s + 0x10) + 0x1316) = 0;
    f = *(void (**)(int, int))(*(uint8_t **)(s + 0xc) + 0x51c);
    if (f != 0) {
        f(0x11, a);
    }
}
