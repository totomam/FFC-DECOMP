#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Pair;

typedef struct Obj {
    void *vtbl;
    uint8_t pad04[0x44];
    uint8_t sub48[0x38];
    uint32_t w80;
    uint32_t w84;
    uint32_t w88;
    uint32_t w8c;
    uint32_t w90;
    void *w94;
    uint8_t sub98[0x10];
    void *arr[2];
} Obj;

extern void func_02056c9c(void *obj, uint32_t v);
extern void func_02005988(void *dst, uint32_t v);
extern void func_ov004_021494ac(void *dst, void *src);
extern void func_020059cc(void *obj);
extern uint32_t func_0205681c(uint32_t size);
extern void *func_0206aed4(uint32_t a, int32_t b, uint32_t c, uint32_t d);
extern void func_0206b048(void *o, uint32_t v);
extern void func_0206b068(void *o, uint32_t v);
extern void func_0206b014(void *o, uint32_t v);
extern void func_0206b034(void *o, uint32_t v);
extern void func_0206afdc(void *o);
extern void *func_0203b95c(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern void func_02056bc0(void *obj, void *node);
extern uint32_t func_ov004_0215311c(uint32_t o);
extern uint32_t func_0209a76c(uint32_t o, uint32_t n);
extern void func_02021bb0(uint32_t a, uint32_t b, uint32_t c);

extern char data_ov004_021586d0[];
extern uint32_t data_ov004_021585c8[];
extern Pair data_ov004_021586a8[];
extern uint32_t data_ov004_02158704[];

Obj *func_ov004_02149328(Obj *self, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p5)
{
    uint32_t buf[3];
    uint32_t i;
    void *r;

    func_02056c9c(self, 0);
    self->vtbl = data_ov004_021586d0;
    self->w88 = p1;
    self->w8c = 0;
    self->w90 = p5;
    func_02005988(buf, data_ov004_021585c8[2]);
    func_ov004_021494ac(self->sub98, buf);
    func_020059cc(buf);

    r = (void *)func_0205681c(0x4c);
    if (r != 0) {
        r = func_0206aed4((uint32_t)r, -1, 0, 1);
    }
    self->w94 = r;
    func_0206b048(self->w94, 1);
    func_0206b068(self->w94, 1);
    func_0206b014(self->w94, 0x3f);
    func_0206b034(self->w94, p2 ^ 0x3f);
    func_0206afdc(self->w94);

    for (i = 0; i < 2; i++) {
        void *o;
        Pair pr;

        self->arr[i] = func_0203b95c(data_ov004_021585c8[1], p3, 0, 1);
        o = self->arr[i];
        ((void (*)(void *, uint32_t))((void **)*(void **)o)[8])(o, 2);
        o = self->arr[i];
        ((void (*)(void *, uint32_t))((void **)*(void **)o)[15])(o, 1);
        pr.a = data_ov004_021586a8[i].a + 0x80;
        pr.b = data_ov004_021586a8[i].b + 0x60;
        o = self->arr[i];
        ((void (*)(void *, Pair))((void **)*(void **)o)[3])(o, pr);
        o = self->arr[i];
        ((void (*)(void *))((void **)*(void **)o)[10])(o);
        func_02056bc0(self->sub48, self->arr[i]);
    }

    func_02021bb0(func_ov004_0215311c(self->w88), 1,
                  func_0209a76c(self->w90, 0x3c));
    func_02021bb0(func_ov004_0215311c(self->w88), 0, 0);
    func_02056bc0(self->sub48, self->w94);

    *(Pair *)&self->w80 = *(Pair *)data_ov004_02158704;
    return self;
}
