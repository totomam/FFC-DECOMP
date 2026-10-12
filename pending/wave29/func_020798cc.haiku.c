#include "ffc/types.h"

extern uint8_t data_0213e6a4[];
extern uint8_t data_0213e264[];
extern void func_02079dc0(void *p, uint32_t v);

void func_020798cc(int32_t id, uint32_t v)
{
    int32_t i;
    uint8_t *target;
    uint8_t *e;
    i = 0;
    target = data_0213e6a4 + id * 0x24;
    for (; i < 16; i++) {
        e = data_0213e264 + i * 0x44;
        if (e[0x2c] != 0 && *(uint8_t **)(e + 4) == target) {
            func_02079dc0(e, v);
        }
    }
}
