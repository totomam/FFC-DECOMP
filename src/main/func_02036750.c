#include "ffc/types.h"

extern uint8_t data_020ae664[];
extern void *func_020903cc(void *object, int c, uint32_t n);

void *func_02036750(void *obj)
{
    uint8_t *p = (uint8_t *)obj;
    uint32_t f;
    uint32_t i;

    *(void **)p = data_020ae664;
    f = *(uint32_t *)(p + 0x30);
    f = (f & ~1u) | 1u;
    *(uint32_t *)(p + 0x30) = f;

    func_020903cc(p + 4, 0, 0x2a);

    for (i = 0; i < 5; i++) {
        uint8_t *q = p + 0x34 + i * 4;
        q[0] = 0;
        q[1] = 0;
        q[2] = 0;
        q[3] = 0;
    }

    for (i = 0; i < 4; i++) {
        uint8_t *q = p + 0x48 + i * 4;
        q[0] = 0;
        q[1] = 0;
        q[2] = 0;
        q[3] = 0;
    }

    return obj;
}
