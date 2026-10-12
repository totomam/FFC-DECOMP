#include "ffc/types.h"

extern void func_02056bf4(void *object);
extern uint32_t func_02091b10(void *object, void *first, ...);
extern void *func_0203bb94(void *object, uint32_t a, uint32_t b, uint32_t c);
extern void func_02056bc0(void *object, void *node);
extern uint8_t data_ov011_021cb5f4[];

typedef struct Obj {
    void **vtbl;
} Obj;

typedef struct Self {
    uint8_t pad0[0x48];
    uint8_t node[0x98];
    Obj *e0;
    uint8_t pad1[0x38];
    uint32_t f11c;
} Self;

void func_ov011_021c541c(Self *self)
{
    uint8_t buf[0x44];
    Obj *obj;

    if (self->e0 != 0) {
        func_02056bf4(&self->node);
        obj = self->e0;
        if (obj != 0) {
            if (obj != 0)
                ((void (*)(void *))obj->vtbl[1])(obj);
            self->e0 = 0;
        }
    }

    func_02091b10(buf, data_ov011_021cb5f4, self->f11c);
    obj = func_0203bb94(buf, 1, 0, 0);
    self->e0 = obj;
    ((void (*)(void *))obj->vtbl[10])(obj);
    ((void (*)(void *, uint32_t))self->e0->vtbl[8])(self->e0, 3);
    func_02056bc0(&self->node, self->e0);
}
