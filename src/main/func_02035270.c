#include "ffc/types.h"

extern void func_02034fa0(void *self, uint32_t a, uint32_t b, uint32_t c);
extern char data_020ae3d8[];

typedef struct Obj {
    void *vt;
    uint32_t pad4[3];
    uint32_t a10;
    uint32_t z14;
    uint32_t c18;
    uint8_t b1c;
} Obj;

void *func_02035270(void *self, uint32_t a, uint32_t b, uint32_t c, uint32_t d) {
    Obj *o = (Obj *)self;
    func_02034fa0(self, b, d, c);
    o->a10 = a;
    o->vt = data_020ae3d8;
    o->z14 = 0;
    o->b1c = 1;
    o->c18 = c;
    return self;
}
