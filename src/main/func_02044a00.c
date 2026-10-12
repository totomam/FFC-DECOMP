#include "ffc/types.h"

extern void func_02056c9c(void *obj, int x);
extern void func_02035f58(void *obj);
extern void *func_02035e10(void *object);
extern uint32_t data_020af99c;

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern Pair data_020afb20;

typedef struct {
    void *vt;
    uint8_t pad[0x80 - 4];
    uint32_t f80;
    uint32_t f84;
    uint32_t f88;
} Obj;

void *func_02044a00(void *obj, uint32_t arg) {
    Obj *o = (Obj *)obj;
    uint8_t *p;

    func_02056c9c(obj, 0);
    o->vt = &data_020af99c;
    o->f88 = arg;
    p = (uint8_t *)obj + 0xf0;
    func_02035f58(p + 0x14);
    func_02035f58(p + 0x74);
    func_02035e10(p + 0xd4);
    *(Pair *)&o->f80 = data_020afb20;
    return obj;
}
