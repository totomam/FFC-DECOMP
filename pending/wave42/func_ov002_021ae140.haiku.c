#include "ffc/types.h"

extern void func_ov002_021adb40(void *p);
extern void func_ov002_021adb6c(void *p);
extern void func_02056c4c(void *x);
extern void func_02064494(void *obj, uint32_t a, uint32_t b);
extern uint32_t func_02064aa8(const void *object);
extern void func_0205f2f0(void *object, uint32_t value);

typedef struct Ctx {
    uint8_t pad0[0x19C];
    void *f19c;
    void *obj;
    uint8_t flag;
    uint8_t pad1[0x1B];
    uint32_t a0;
    uint32_t a1;
    uint32_t a2;
    uint32_t a3;
} Ctx;

void func_ov002_021ae140(void *param)
{
    Ctx *c = (Ctx *)param;
    uint32_t v = 0;
    void **vt;

    if (c->a1 == c->a0) {
        if (c->a2 == c->a3) {
            return;
        }
    }
    c->a0 = c->a1;
    c->a2 = c->a3;
    func_ov002_021adb40(c);
    func_ov002_021adb6c(c);
    if (c->obj == 0) {
        return;
    }
    func_02056c4c(c->f19c);
    func_02064494(c->obj, 0, 0);
    if (c->flag != 0) {
        v = 1;
    }
    func_0205f2f0(c->obj ? (void *)func_02064aa8(c->obj) : 0, v);
    vt = *(void ***)c->obj;
    ((void (*)(void *))vt[10])(c->obj);
    vt = *(void ***)c->obj;
    ((void (*)(void *, uint32_t, uint32_t))vt[14])(c->obj, 1, 1);
}
