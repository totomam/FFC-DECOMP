#include "ffc/types.h"

extern uint8_t *data_ov006_021bc7d0;
extern void func_020849c4(void *a, void *b, int32_t c);

void func_ov006_021af4b8(uint8_t *a, int32_t idx, int32_t v, int32_t count)
{
    uint8_t *b = data_ov006_021bc7d0 + 4 + idx * 2;
    int32_t i;
    for (i = 0; i < count; i++) {
        func_020849c4(a, b, v * 2);
        a += 0x40;
        b += 0x40;
    }
}
