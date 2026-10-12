#include "ffc/types.h"

extern uint32_t func_02087a88(uint32_t index);
extern uint32_t func_02087a94(uint32_t index);
extern uint32_t func_020871d4(const void *object);
extern void func_02086dcc(void *obj, void *fn, void *a, uint32_t b, uint32_t c, uint32_t d);
extern void func_0204f338(void *obj);
extern void func_02087154(void *obj, uint32_t v);
extern void *func_0205681c(uint32_t size);
extern void *func_02039120(void *p);
extern void func_020494c4(void);
extern void func_020496dc(void);
extern char data_020afef0[];
extern char data_02141510[];
extern void *data_02139d24;

struct Obj {
    void *vt;
    uint8_t p4[8];
    uint32_t f0c;
    uint8_t p10[4];
    uint32_t f14;
    uint8_t p18[0xc4];
    uint32_t fdc;
    uint32_t fe0;
    uint8_t fe4;
    uint8_t fe5;
};

struct Obj *func_02049418(struct Obj *a, uint32_t b)
{
    struct Obj *self = a;
    uint32_t v;
    void *r6;
    uint32_t r4;
    uint32_t r0;
    uint32_t n;
    void *x;

    v = self->f0c & ~0xffu;
    self->vt = data_020afef0;
    self->f14 = b;
    self->fe4 = 0;
    self->fe5 = 0;
    self->f0c = v;

    r6 = ((void **)data_02141510)[1];
    r4 = func_02087a88(4);
    r0 = func_02087a94(4);
    self->fdc = r0;
    self->fe0 = r4 - r0;

    n = func_020871d4(r6);
    func_02086dcc((void *)self->p18, (void *)func_020496dc, self, r4, self->fe0, n - 1);
    func_0204f338((void *)self->p18);
    func_02087154((void *)self->p18, 4u << 7);

    if (data_02139d24 == 0) {
        x = func_0205681c(0x48);
        if (x != 0) {
            x = func_02039120(x);
        }
        data_02139d24 = x;
    }
    func_020494c4();
    return self;
}
