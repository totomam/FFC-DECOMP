#include "ffc/types.h"

extern uint8_t data_020a7db0[];
extern void func_0205f898(uint32_t);
extern void func_0205ffd0(uint32_t);

void *func_02005424(void *obj)
{
    uint32_t *base = (uint32_t *)obj;
    uint32_t i;

    base[0] = (uint32_t)data_020a7db0;
    if (base[0x94 / 4] != 0) {
        func_0205f898(base[2]);
    }
    if (base[0x90 / 4] != 0) {
        uint32_t t = base[1];
        t = *(uint32_t *)(t + 0x18);
        t = *(uint32_t *)(t + 0x18);
        func_0205ffd0(t);
    }
    for (i = 0; i < 0x20; i++) {
        uint32_t o = base[i + 3];
        if (o != 0) {
            if (o != 0) {
                ((void (*)(uint32_t))(*(uint32_t **)o)[1])(o);
            }
            base[i + 3] = 0;
        }
    }
    return obj;
}
