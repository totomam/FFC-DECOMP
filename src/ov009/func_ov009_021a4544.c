#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void *func_02069210(void *object);
extern void func_020695ec(void *self, void *obj);
extern uint32_t data_ov009_021b080c[];
extern uint32_t data_ov009_021b0b54[];

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

void func_ov009_021a4544(uint8_t *self)
{
    uint8_t *obj;
    Pair p;

    obj = func_0205681c(0x9c);
    if (obj) {
        p = *(Pair *)((uint8_t *)data_ov009_021b080c + 0x18);
        func_02069210(obj);
        *(uint32_t *)obj = (uint32_t)data_ov009_021b0b54;
        *(uint32_t *)(obj + 0x94) = p.a;
        *(uint32_t *)(obj + 0x98) = p.b;
    }
    *(uint8_t **)(self + 0x160) = obj;
    func_020695ec(self, obj);
}
