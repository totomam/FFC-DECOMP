#include "ffc/types.h"

extern void func_0202ad8c(void);
extern uint8_t data_020ada0c[];

typedef struct {
    void *vt;
    uint8_t pad[0x198];
    uint32_t f;
} Obj;

Obj *func_0202c8dc(Obj *p)
{
    func_0202ad8c();
    p->vt = data_020ada0c;
    p->f = 0x1000;
    return p;
}
