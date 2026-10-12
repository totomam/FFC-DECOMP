#include "ffc/types.h"

extern uint8_t data_020af924[];
extern void func_02056858(void *p);
extern void func_02056db0(void *p);
extern void func_02056844(void *p);

typedef struct {
    void *vtbl;
    uint8_t pad[0x9c];
    void *f0;
    void *f4;
} Obj;

void *func_020469b4(void *self) {
    Obj *o = (Obj *)self;
    o->vtbl = data_020af924;
    if (o->f0 != 0) {
        func_02056858(o->f0);
        o->f0 = 0;
    }
    if (o->f4 != 0) {
        func_02056858(o->f4);
        o->f4 = 0;
    }
    func_02056db0(self);
    func_02056844(self);
    return self;
}
