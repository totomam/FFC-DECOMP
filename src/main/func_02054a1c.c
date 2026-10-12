#include "ffc/types.h"

extern uint32_t data_020b05d4[];
extern uint32_t data_02141510[];
extern void *data_0213e098[];
extern uint32_t func_020871d4(const void *object);
extern void func_02088f30(void);
extern void func_02056bf4(void *a, void *b);
extern void func_02056844(void *p);

typedef struct VT {
    void *slot0;
    void (*slot1)(void *self);
} VT;

typedef struct Gen {
    VT *vt;
} Gen;

typedef struct Obj {
    uint32_t *vt;
    void *f4;
    uint8_t b8;
} Obj;

Obj *func_02054a1c(Obj *p)
{
    uint32_t r4;
    int flag;
    p->vt = data_020b05d4;
    if (p->b8 != 0) {
        r4 = func_020871d4(data_02141510[1]);
        if (r4 > func_020871d4(data_0213e098[1])) {
            flag = ((*(volatile uint16_t *)0x4000208) == 0);
            if (flag == 0) {
                func_02088f30();
            }
        }
    }
    func_02056bf4((char *)data_0213e098[0] + 0x48, p->f4);
    if (p->f4 != 0) {
        ((Gen *)p->f4)->vt->slot1(p->f4);
    }
    func_02056844(p);
    return p;
}
