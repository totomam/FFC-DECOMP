#include "ffc/types.h"

extern char data_020b0638[];
extern uint32_t data_02141510[];
extern uint32_t data_0213e098[];
extern uint32_t func_020871d4(const void *object);
extern void func_02088f30(void);
extern void func_02056bf4(void *a, void *b);
extern void func_02056844(void *p);

typedef struct Obj {
    void *vt;
    void *f4;
    uint8_t f8;
} Obj;

void *func_020547cc(void *param)
{
    Obj *p = (Obj *)param;
    uint32_t t;
    p->vt = data_020b0638;
    if (p->f8 != 0) {
        if (func_020871d4((const void *)data_02141510[1]) > func_020871d4((const void *)data_0213e098[1])) {
            t = (*(volatile uint16_t *)0x04000208) == 0;
            if (t == 0) {
                func_02088f30();
            }
        }
    }
    func_02056bf4((void *)(data_0213e098[0] + 0x14), p->f4);
    func_02056bf4((void *)(data_0213e098[0] + 0xb0), p->f4);
    if (p->f4 != 0) {
        void **o = (void **)p->f4;
        ((void (*)(void *))((void **)*o)[1])(o);
    }
    func_02056844(p);
    return p;
}
