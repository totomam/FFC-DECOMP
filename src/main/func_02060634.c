#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_02057148(void *obj, void *a, uint32_t b);
extern uint8_t data_020b127c[];

void *func_02060634(void *p0, void *p1, uint32_t p2, uint32_t p3, uint32_t a5, uint32_t a6)
{
    uint8_t *o = (uint8_t *)func_0205681c(0x4c);
    if (o != 0) {
        func_02057148(o, p1, p2);
        *(uint32_t *)o = (uint32_t)data_020b127c;
        *(uint32_t *)(o + 0x44) = (uint32_t)p0;
        *(uint32_t *)(o + 0x48) = a6;
        *(uint32_t *)(o + 0x24) = p3;
        if (o[0x15] != 0) {
            if (p3 == 0) {
                *(uint32_t *)(o + 0x1c) = 1;
            } else {
                *(uint32_t *)(o + 0x1c) = p3 << 4;
            }
        }
        *(uint32_t *)(o + 0x30) = a5;
        {
            uint32_t *q = *(uint32_t **)(o + 0x44);
            q[4] = q[4] + 1;
        }
    }
    return o;
}
