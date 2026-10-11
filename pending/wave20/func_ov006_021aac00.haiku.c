#include "ffc/types.h"

extern uint8_t *data_ov006_021bc784;
extern uint8_t data_ov006_021b8624[];

void func_ov006_021aac00(void)
{
    uint8_t *p = data_ov006_021bc784;
    int32_t idx = p[0x14];
    uint32_t *obj;
    uint32_t s;

    if (idx > 3) {
        idx = 3;
    }
    s = (uint32_t)(data_ov006_021b8624[idx * 3 + 2] << 23) >> 7;
    obj = *(uint32_t **)(p + 4);
    *obj = 0x28 | (*obj & 0xfe00ff00) | s;
}
