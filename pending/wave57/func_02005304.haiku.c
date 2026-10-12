#include "ffc/types.h"

extern char data_020a7db0[];
extern void *func_0205681c(uint32_t size);
extern uint32_t func_02005178(void *obj, uint32_t a, uint32_t b, uint32_t c);
extern uint32_t func_0205db5c(uint32_t a);
extern uint32_t func_0205db6c(uint32_t a);
extern uint32_t func_0205db04(const void *object);
extern void *func_0205ffac(void *object, uint32_t index, uint32_t third);
extern uint32_t func_0205f81c(uint32_t a, uint32_t b, uint32_t c);
extern void func_02005500(void *self, uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);

typedef struct Obj {
    uint32_t w0;
    uint32_t w4;
    uint32_t w8;
    uint32_t wc;
    uint32_t w10;
} Obj;

typedef struct Self {
    uint32_t vt;
    uint32_t f4;
    uint32_t f8;
    uint32_t arr[32];
    uint32_t idx;
    uint32_t f90;
    uint32_t f94;
} Self;

Self *func_02005304(Self *self, uint32_t p1, uint32_t p2, uint32_t p3, Self *p4, uint32_t p5)
{
    uint32_t i;
    uint32_t r4;
    uint32_t r7;
    uint32_t sp10;
    uint32_t sp0c;
    uint32_t sp8;
    Obj *o;

    self->f8 = p2;
    self->f4 = p1;
    self->idx = 0;
    self->f90 = 0;
    self->vt = (uint32_t)data_020a7db0;
    self->f94 = 0;
    r4 = 0;
    for (i = 0; i < 32; i++) {
        self->arr[i] = r4;
    }

    if (p4 == 0) {
        uint32_t obj = (uint32_t)func_0205681c(0x18);
        if (obj != 0) {
            obj = func_02005178((void *)obj, self->f4, p3, 0);
        }
        self->arr[self->idx] = obj;
        o = (Obj *)self->arr[self->idx];
        sp10 = o->wc;
        r7 = o->w10;
        sp0c = func_0205db5c(o->w8);
        o = (Obj *)self->arr[self->idx];
        sp8 = func_0205db6c(o->w8);
        o = (Obj *)self->arr[self->idx];
        r4 = func_0205db04(o->w8);
        self->idx = self->idx + 1;
    } else {
        o = (Obj *)p4->arr[p5];
        sp10 = o->wc;
        r7 = o->w10;
        if (r7 == 0) {
            r7 = ((Obj *)p4->arr[0])->w10;
        }
        sp0c = func_0205db5c(o->w8);
        sp8 = func_0205db6c(((Obj *)p4->arr[p5])->w8);
        r4 = func_0205db04(((Obj *)p4->arr[p5])->w8);
    }

    self->f90 = (uint32_t)func_0205ffac((void *)((uint32_t *)((uint32_t *)self->f4)[6])[6], 1, 1);
    self->f94 = func_0205f81c(self->f8, 1, 1);
    func_02005500(self, sp10, r7, sp0c, sp8, r4);
    return self;
}
