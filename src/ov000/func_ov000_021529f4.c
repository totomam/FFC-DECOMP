#include "ffc/types.h"

typedef struct Obj {
    uint32_t pad;
    void (*fn)(uint32_t, uint32_t, uint32_t);
    uint8_t flags;
} Obj;

extern Obj *func_ov000_02152ae4(uint32_t);
extern uint32_t data_ov000_0216e26c[];

void func_ov000_021529f4(uint32_t a, uint32_t b, uint32_t c)
{
    Obj *o = func_ov000_02152ae4(1);
    if (o && (o->flags & a)) {
        o->flags = (uint8_t)(o->flags & (uint8_t)~a);
        o->fn(1, b, c);
        if (a == 1) {
            data_ov000_0216e26c[3] = 0;
        }
    }
}
