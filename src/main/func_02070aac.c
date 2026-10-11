#include "ffc/types.h"

extern uint8_t data_020b21e4[];
extern void func_02056858(void *p);
extern void func_02070a28(void *p);
extern void func_02056844(void *p);

typedef struct {
    void *vtbl;
    uint8_t pad[0xc];
    void *field10;
} Obj;

void *func_02070aac(void *self)
{
    Obj *p = (Obj *)self;
    p->vtbl = data_020b21e4;
    func_02056858(p->field10);
    func_02070a28(p);
    func_02056844(p);
    return p;
}
