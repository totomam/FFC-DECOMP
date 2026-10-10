#include "ffc/types.h"

extern uint8_t data_020b2340[];
extern uint32_t data_0213e188[];
extern void func_02053574(uint32_t x);

typedef struct {
    void *vtbl;
    uint8_t pad[0x10];
    uint16_t field14;
} Obj;

void *func_020723c0(void *p)
{
    Obj *o = (Obj *)p;
    o->vtbl = data_020b2340;
    data_0213e188[3] = 0;
    func_02053574(o->field14);
    return p;
}
