#include "ffc/types.h"

extern void func_02088f30(void);
extern uint8_t data_020b1ba8[];

typedef struct Obj {
    void *vt;
    uint8_t pad[0x30];
    uint8_t a;
    uint8_t b;
} Obj;

void *func_0206aaf0(void *p0)
{
    Obj *p = (Obj *)p0;
    p->vt = data_020b1ba8;
    if (p->a != 0) {
        if (p->b == 0) {
            func_02088f30();
        }
    }
    return p;
}
