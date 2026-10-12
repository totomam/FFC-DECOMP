#include "ffc/types.h"

extern uint8_t data_020b1c14[];
extern uint8_t data_020b1c28[];
extern void func_02054738(void *p);
extern void func_0206ade0(void *p);
extern void func_02053574(void *p);
extern void func_02056858(void *p);
extern void func_02054844(void *p);
extern void func_02056844(void *p);

typedef struct Obj {
    void *vt;
    uint32_t a[4];
    void *vt14;
    uint32_t b[3];
    void *f24;
    uint32_t c[3];
    void *f34;
    void *f38;
} Obj;

Obj *func_0206ad14(Obj *p)
{
    p->vt = data_020b1c14;
    p->vt14 = data_020b1c28;
    func_02054738(&p->vt14);
    func_0206ade0(p);
    func_02053574(p->f24);
    func_02056858(p->f34);
    func_02056858(p->f38);
    func_02054844(&p->vt14);
    func_02056844(p);
    return p;
}
