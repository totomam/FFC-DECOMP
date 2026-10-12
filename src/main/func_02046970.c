#include "ffc/types.h"

extern uint8_t data_020af924[];
extern void func_02056858(void *p);
extern void func_02056db0(void *p);

typedef struct {
    void *vtbl;
    uint8_t pad[0xa0 - 4];
    void *f_a0;
    void *f_a4;
} Obj;

void *func_02046970(void *self) {
    Obj *o = (Obj *)self;
    o->vtbl = data_020af924;
    if (o->f_a0 != 0) {
        func_02056858(o->f_a0);
        o->f_a0 = 0;
    }
    if (o->f_a4 != 0) {
        func_02056858(o->f_a4);
        o->f_a4 = 0;
    }
    func_02056db0(o);
    return o;
}
