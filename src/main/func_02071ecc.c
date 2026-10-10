#include "ffc/types.h"

typedef struct {
    void *vtbl;
    uint32_t f4;
    uint32_t f8;
    uint8_t fc;
} Obj;

extern uint8_t data_020b2518[];
extern void func_02071f80(void *p);

void *func_02071ecc(void *p, uint32_t x)
{
    Obj *o = (Obj *)p;
    o->vtbl = data_020b2518;
    o->f8 = x;
    o->fc = 0;
    func_02071f80(p);
    return p;
}
