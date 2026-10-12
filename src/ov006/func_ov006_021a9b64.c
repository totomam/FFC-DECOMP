#include "ffc/types.h"

extern uint8_t data_ov006_021bc778[];
extern int func_02081334(int a, int b);

void func_ov006_021a9b64(void) {
    int r0;
    int count;
    int i;
    uint32_t v;
    uint32_t *w;

    r0 = 0x36 - func_02081334(*(uint16_t *)(data_ov006_021bc778 + 2), 0x1c);
    count = *(uint8_t *)(*(uint8_t **)(data_ov006_021bc778 + 4) + 0x51);
    if (count > 5) {
        count = 5;
    }
    for (i = 0; i < count; i++) {
        w = *(uint32_t **)(*(uint8_t **)(data_ov006_021bc778 + 4) + i * 4 + 0x10);
        v = (*w & 0xfe00ff00u) | (uint8_t)(r0 - 2);
        *w = v | 0x00b30000u;
        w = *(uint32_t **)(*(uint8_t **)(data_ov006_021bc778 + 4) + i * 4 + 0x24);
        v = (*w & 0xfe00ff00u) | (uint8_t)(r0 + 1);
        *w = v | 0x00d20000u;
        r0 += 0x1c;
    }
    *(uint8_t *)(*(uint8_t **)(data_ov006_021bc778 + 4) + 0x56) = 1;
}
