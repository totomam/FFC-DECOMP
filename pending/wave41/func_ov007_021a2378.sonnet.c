#include "ffc/types.h"
typedef struct { uint32_t a, b; } Pair;
typedef struct {
    uint32_t vt; uint32_t pad[2]; uint32_t flags; uint8_t pad2[0x70];
    Pair d; uint32_t arg; void *buf;
} Obj;
extern void func_02056c9c(void *p, int x);
extern int func_0206cb98(uint32_t x);
extern uint32_t func_0206cb80(uint32_t x);
extern void *func_02056830(uint32_t size);
extern uint32_t data_ov007_021c3c90[];
extern Pair data_020a6630;
extern Pair data_ov007_021c4104;
Obj *func_ov007_021a2378(Obj *o, uint32_t arg) {
    func_02056c9c(o, 0);
    o->vt = (uint32_t)data_ov007_021c3c90;
    o->d = data_020a6630;
    o->arg = arg;
    o->buf = 0;
    if (func_0206cb98(arg) == 0) {
        o->buf = func_02056830(func_0206cb80(o->arg) * 0x2c);
        o->d = data_ov007_021c4104;
    } else {
        o->flags = (o->flags & ~0xffu) | 2;
    }
    return o;
}
