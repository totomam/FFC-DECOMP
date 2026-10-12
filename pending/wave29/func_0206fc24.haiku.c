#include "ffc/types.h"

extern void func_02053574(uint32_t);
extern void func_02056858(uint32_t);
extern void func_020704f8(void *);
extern void func_020708f8(void *);
extern void func_0206c1dc(void *);
extern void func_02055abc(void *);
extern char data_020b20d0[];
extern char data_020b20e4[];
extern uint32_t data_0213e180;

typedef struct {
    uint32_t vt0;
    uint8_t pad4[0x10];
    uint32_t vt14;
    uint8_t pad18[0x38];
    uint32_t f50;
    uint32_t f54;
} Obj;

void *func_0206fc24(void *self) {
    Obj *p = (Obj *)self;
    p->vt0 = (uint32_t)data_020b20d0;
    p->vt14 = (uint32_t)data_020b20e4;
    func_02053574(p->f54);
    func_02056858(p->f50);
    func_020704f8(p);
    data_0213e180 = 0;
    func_020708f8((char *)p + 0x58);
    func_0206c1dc((char *)p + 0x3d);
    func_02055abc((char *)p + 0x14);
    return p;
}
