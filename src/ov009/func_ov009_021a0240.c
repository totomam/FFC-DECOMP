#include "ffc/types.h"

extern void func_02056c9c(void *self, int zero);
extern void *func_0203b8bc(void *a);
extern void func_0202bde4(void *obj, void *a, int b, int c, int d);
extern void func_02024db0(void *x, int y);
extern void func_02056bc0(void *object, void *node);
extern uint32_t data_ov009_021b02ac[];

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern Pair data_ov009_021b0590;

typedef struct {
    void *vtbl;
    uint8_t pad04[0x48 - 4];
    uint8_t sub48[0x80 - 0x48];
    Pair v80;
    void *obj88;
    uint32_t v8c;
    uint32_t v90;
} Self;

void *func_ov009_021a0240(void *r0, void *r1, void *r2, uint32_t r3)
{
    Self *self = (Self *)r0;

    func_02056c9c(r0, 0);
    self->vtbl = data_ov009_021b02ac;
    self->v8c = 0;
    self->v90 = r3;
    self->obj88 = func_0203b8bc(r1);
    func_0202bde4(self->obj88, r2, 0, 0, 1);
    func_02024db0(((uint32_t *)self->obj88)[0x34 / 4], 0);
    func_02056bc0(&self->sub48, self->obj88);
    ((uint32_t *)self->obj88)[0xc / 4] = (((uint32_t *)self->obj88)[0xc / 4] & ~0xffu) | 1;
    self->v80 = data_ov009_021b0590;
    return self;
}
