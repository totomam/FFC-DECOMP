#include "ffc/types.h"

extern void func_02034fa0(void *p, uint32_t a, uint32_t b);
extern char data_020ae3d8[];

typedef struct {
    void *vtbl;
    uint32_t f04;
    uint32_t f08;
    uint32_t f0c;
    uint32_t f10;
    uint32_t f14;
    uint32_t f18;
    uint8_t f1c;
} Obj;

void *func_02035298(void *p, uint32_t a, uint32_t b, uint32_t c) {
    Obj *o = (Obj *)p;
    func_02034fa0(p, a, b);
    o->f14 = c;
    o->vtbl = data_020ae3d8;
    o->f10 = 0;
    o->f18 = 0;
    o->f1c = 0;
    return o;
}
