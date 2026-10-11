#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint16_t b;
    uint32_t c;
    uint16_t d;
    uint16_t pad;
    uint16_t e;
    uint32_t f;
} S;

typedef struct {
    void *vt;
    uint8_t pad[0x94 - 4];
    uint16_t x94;
    uint16_t pad2;
    uint32_t x98;
} Obj;

extern uint8_t data_ov003_0217abfc[];
extern void func_ov003_02164834(void *self, uint32_t p1, uint32_t p2, uint16_t b,
                                uint32_t c, uint16_t d, uint16_t e, uint32_t f);

void *func_ov003_02164c08(void *self, uint32_t p1, uint32_t p2, uint16_t p3, S s)
{
    Obj *o = (Obj *)self;
    uint32_t a;
    func_ov003_02164834(self, p1, p2, s.b, s.c, s.d, s.e, s.f);
    o->vt = data_ov003_0217abfc;
    a = s.a;
    o->x94 = p3;
    o->x98 = a;
    return self;
}
