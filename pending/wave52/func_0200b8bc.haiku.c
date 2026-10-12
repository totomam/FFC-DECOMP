#include "ffc/types.h"

extern void func_02061314(void *object);
extern uint32_t func_02015a38(uint32_t, uint32_t, uint32_t, uint32_t);
extern uint32_t func_02015a00(uint32_t, uint32_t, uint32_t, uint32_t);
extern void func_0206133c(uint32_t object);
extern uint8_t data_020ab024[];
extern uint32_t data_020b8e44;

typedef struct Obj {
    void *vtbl;
    uint8_t pad04[0x14];
    uint32_t f18;
    uint32_t f1c[2];
    uint8_t pad24;
    uint8_t f25;
} Obj;

Obj *func_0200b8bc(Obj *o, uint32_t a, uint32_t b, uint32_t c, uint8_t flag)
{
    uint32_t i;

    func_02061314(o);
    o->vtbl = data_020ab024;
    o->f25 = 0;
    o->f18 = 0;
    for (i = 0; i < 2; i++) {
        o->f1c[i] = 0;
    }
    o->f1c[0] = func_02015a38(data_020b8e44, a, b, c);
    if (flag != 0) {
        o->f1c[1] = func_02015a00(data_020b8e44, a, b, c);
    }
    for (i = 0; i < 2; i++) {
        if (o->f1c[i] != 0) {
            func_0206133c(o->f1c[i]);
        }
    }
    o->f18 = o->f1c[0];
    return o;
}
