#include "ffc/types.h"

extern uint8_t *data_ov006_021ba160;

void func_ov006_021997b0(uint32_t a, uint32_t b, uint32_t c)
{
    void (*fn)(uint32_t, uint32_t, uint32_t) = *(void (**)(uint32_t, uint32_t, uint32_t))(data_ov006_021ba160 + 0x14e4);
    if (fn != 0) {
        fn(a, b, c);
    }
}
