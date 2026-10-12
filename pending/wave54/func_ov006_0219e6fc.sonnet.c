#include "ffc/types.h"

typedef struct {
    int8_t a;
    uint8_t pad;
    int16_t b;
    int16_t c;
    uint8_t buf[8];
} Loc;

typedef struct {
    uint8_t x;
    uint8_t pad;
    uint16_t y;
} Obj;

extern void func_ov006_0219ef6c(void *p, int v, uint32_t n);
extern void *func_ov006_0219cedc(uint32_t n);
extern void func_ov006_0219daa0(int code);
extern void func_ov006_0219ef5c(void *d, const void *s, uint32_t n);
extern uint16_t func_ov006_0219e988(void *p);
extern void func_ov006_0219ceec(void *p);
extern uint16_t func_ov006_0219f038(uint16_t v);
extern int func_ov006_0219ea14(int a, void *b, void *c, void *d, void *e, void *f);
extern int func_ov006_0219ed94(void *p, uint32_t n, const void *q, uint32_t m);
extern int func_ov006_0219ea68(void *p, uint32_t f, int16_t c, int16_t b, int8_t a, uint32_t g, void *h);
extern void func_ov006_0219eac0(void *p, int16_t c, uint32_t d, uint32_t e);

extern uint8_t data_ov006_021ba1dc[];
extern uint8_t data_ov006_021baf3c[];
extern uint8_t data_ov006_021b8b8c[];

int func_ov006_0219e6fc(void *x, const void *src, uint32_t p3)
{
    Loc loc;
    Obj *o;
    uint8_t *r5;
    uint8_t *r6;

    loc.a = 0;
    loc.c = 0;
    loc.b = 0;
    r5 = *(uint8_t **)(data_ov006_021ba1dc + 0x14);
    func_ov006_0219ef6c(r5, 0, 0x5dc);
    o = func_ov006_0219cedc(0x210);
    if (o == 0) {
        func_ov006_0219daa0(2);
        return -1;
    }
    func_ov006_0219ef6c(o, 0, 0x210);
    r6 = r5 + 0x18;
    func_ov006_0219ef5c(data_ov006_021baf3c, src, 8);
    func_ov006_0219ef5c(loc.buf, data_ov006_021baf3c, 8);
    loc.c = (int16_t)func_ov006_0219e988((uint8_t *)o + 4);
    if (loc.c < 0) {
        func_ov006_0219daa0(3);
        if (o != 0) {
            func_ov006_0219ceec(o);
        }
        return -1;
    }
    o->x = 0;
    o->y = func_ov006_0219f038((uint16_t)loc.c);
    loc.c += 4;
    func_ov006_0219ea14(0, r6, o, &loc.c, &loc.b, &loc.a);
    loc.b |= 0x10;
    if (func_ov006_0219ed94(loc.buf, 8, data_ov006_021b8b8c, 6) != 0) {
        func_ov006_0219daa0(2);
        if (o != 0) {
            func_ov006_0219ceec(o);
        }
        return -1;
    }
    func_ov006_0219ea68(r5, 0x1000, loc.c, loc.b, loc.a, 0x11, loc.buf);
    loc.c += 0x18;
    func_ov006_0219eac0(r5, loc.c, 0xff, p3);
    if (o != 0) {
        func_ov006_0219ceec(o);
    }
    return 0;
}
