#include "ffc/types.h"

extern uint8_t data_020b05ac[];
extern void func_02088f30(uint8_t v);
extern void func_02056844(void *p);

typedef struct {
    void *vtbl;
    uint8_t flag;
} Obj;

void *func_020544c4(void *p)
{
    Obj *o = (Obj *)p;
    o->vtbl = data_020b05ac;
    if (o->flag != 0) {
        func_02088f30(o->flag);
    }
    func_02056844(p);
    return p;
}
