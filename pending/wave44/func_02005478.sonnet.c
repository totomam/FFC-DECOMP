#include "ffc/types.h"

extern uint32_t data_020a7db0[];
extern void func_0205f898(uint32_t arg);
extern void func_0205ffd0(uint32_t arg);
extern void func_02056844(void *self);

typedef struct Self {
    uint32_t *vt;
    uint32_t *a4;
    uint32_t a8;
    uint32_t slots[33];
    uint32_t p90;
    uint32_t p94;
} Self;

Self *func_02005478(Self *s)
{
    uint32_t i;
    uint32_t *slot;
    uint32_t *o;

    s->vt = data_020a7db0;
    if (*(uint32_t *)((uint8_t *)s + 0x94) != 0) {
        func_0205f898(s->a8);
    }
    if (*(uint32_t *)((uint8_t *)s + 0x90) != 0) {
        uint32_t *a = (uint32_t *)s->a4;
        uint32_t *b = (uint32_t *)a[6];
        func_0205ffd0(b[6]);
    }
    for (i = 0; i < 32; i++) {
        slot = (uint32_t *)s + i;
        o = (uint32_t *)slot[3];
        if (o != 0) {
            if (o != 0) {
                ((void (*)(uint32_t *))((uint32_t *)o[0])[1])(o);
            }
            slot[3] = 0;
        }
    }
    func_02056844(s);
    return s;
}
