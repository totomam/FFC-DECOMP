#include "ffc/types.h"

struct P {
    uint32_t w0;
    uint32_t w4;
    uint8_t pad8[0x7c];
    uint32_t w84;
    uint8_t o88[0x5c];
    uint16_t h;
};

extern struct P *data_ov006_021bc80c;
extern uint8_t data_ov006_021ba024[];
extern uint8_t data_ov006_021b8ab0[];
extern uint8_t data_ov006_021ba03c[];

extern void *func_ov006_021b49e4(uint32_t size, uint32_t align);
extern void func_0207e890(void *object);
extern int func_0207eb28(void *object, const void *data);
extern void func_02088f30(void);
extern uint16_t func_02086a4c(void);
extern uint32_t func_0207fc20(const void *object);
extern void func_0207eab0(void *object, void *buf, uint32_t n);
extern void func_0207ea0c(void *object);
extern void func_0207e4ac(void *object);
extern int func_0207e4c0(void *object, const void *data, uint32_t n);
extern void func_0207fad4(void *object, void *fn, uint32_t v);
extern int func_0207fa34(void *obj, uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, void *f, void *g);
extern uint32_t func_0207faec(void *obj, uint32_t a, uint32_t b);
extern uint32_t func_ov006_021b3ed4(uint32_t a, void *b, uint32_t c);
extern void func_02086ad4(void *o, const void *a, const void *b);
extern void func_0207eb44(void *o);
extern void func_ov006_021b3804(void);
extern void func_ov006_021b3844(void);
extern void func_ov006_021b3884(void);

void func_ov006_021b3698(void)
{
    struct L { uint8_t buf[0x80]; uint8_t obj[0x48]; } l;
    uint32_t v18[2];
    uint32_t v10[2];
    uint32_t r5;
    uint32_t t;
    struct P *p;
    uint16_t hw;

    data_ov006_021bc80c = func_ov006_021b49e4(0xe8, 4);
    func_0207e890(l.obj);
    if (func_0207eb28(l.obj, data_ov006_021ba024) == 0) {
        func_02088f30();
    }
    hw = func_02086a4c();
    p = data_ov006_021bc80c;
    p->h = hw;
    r5 = func_0207fc20(l.obj);
    func_0207eab0(l.obj, v18, 8);
    func_0207eab0(l.obj, v10, 8);
    func_0207ea0c(l.obj);
    func_0207e4ac(data_ov006_021bc80c->o88);
    if (func_0207e4c0(data_ov006_021bc80c->o88, data_ov006_021b8ab0, 3) == 0) {
        func_02088f30();
    }
    func_0207fad4(data_ov006_021bc80c->o88, func_ov006_021b3804, 0x602);
    if (func_0207fa34(data_ov006_021bc80c->o88, r5, v10[0], v10[1], v18[0], v18[1],
                      func_ov006_021b3844, func_ov006_021b3884) == 0) {
        func_02088f30();
    }
    t = func_0207faec(data_ov006_021bc80c->o88, 0, 0);
    data_ov006_021bc80c->w0 = (uint32_t)func_ov006_021b49e4(t, 4);
    func_0207faec(data_ov006_021bc80c->o88, data_ov006_021bc80c->w0, t);
    data_ov006_021bc80c->w84 = func_ov006_021b3ed4(0x20, &data_ov006_021bc80c->w4, 4);
    func_02086ad4(l.buf, data_ov006_021ba03c, data_ov006_021b8ab0);
    func_0207eb44(l.buf);
}
