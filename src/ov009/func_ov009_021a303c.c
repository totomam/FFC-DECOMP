#include "ffc/types.h"

extern char data_ov009_021b0764[];
extern void func_02056c4c(void *p);
extern void func_02056db0(void *p);
extern void func_02056844(void *p);

typedef struct VT {
    void *s0;
    void (*s1)(void *self);
} VT;

typedef struct Obj {
    VT *vt;
} Obj;

void *func_ov009_021a303c(uint8_t *self) {
    Obj *o;
    *(char **)self = data_ov009_021b0764;
    func_02056c4c(self + 0x14);
    o = *(Obj **)(self + 0x88);
    if (o != 0) {
        if (o != 0) {
            o->vt->s1(o);
        }
        *(Obj **)(self + 0x88) = 0;
    }
    o = *(Obj **)(self + 0x90);
    if (o != 0) {
        if (o != 0) {
            o->vt->s1(o);
        }
        *(Obj **)(self + 0x90) = 0;
    }
    func_02056db0(self);
    func_02056844(self);
    return self;
}
