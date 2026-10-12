#include "ffc/types.h"

extern void func_ov000_021652a8();
extern int func_ov001_0218315c(void);
extern void *func_ov001_0218298c(void);
extern int func_ov000_02165418(int a, int b, int c);
extern void func_ov001_021829dc(void *p);
extern void func_ov001_02182c70(void *p);
extern void func_ov000_0216556c(int a, void *b, void *c);
extern uint8_t data_ov001_02191de0[];
extern uint8_t data_ov001_02191e20[];
extern uint8_t data_ov001_02191e6c[];
extern uint8_t data_ov001_02191eac[];
extern uint8_t data_ov001_02191ef0[];

typedef struct Obj {
    uint32_t f0;
    uint32_t f4;
    uint32_t f8;
    uint32_t fc;
    uint32_t f10;
    uint32_t f14;
    int32_t f18;
    uint8_t pad1c[0x14];
    uint32_t f30;
    uint32_t f34;
    uint8_t pad38[4];
    uint32_t f3c;
    uint16_t f40;
    uint8_t f42;
    uint8_t f43;
    uint32_t f44;
} Obj;

uint32_t func_ov001_021831c0(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f)
{
    Obj *o;
    int r;
    uint32_t buf[2];
    uint32_t size;
    uint16_t h;
    uint16_t sw;
    uint32_t lo;

    if (*(uint32_t *)0x0217098c != 1) {
        func_ov000_021652a8(7, 0, 4, data_ov001_02191de0, b);
        return 2;
    }
    if (func_ov001_0218315c() == 0) {
        func_ov000_021652a8(7, 0, 4, data_ov001_02191e20, b);
        return 3;
    }
    o = func_ov001_0218298c();
    if (o == 0) {
        func_ov000_021652a8(7, 2, 1, data_ov001_02191e6c);
        return 1;
    }
    r = func_ov000_02165418(2, 2, 0);
    o->f18 = r;
    if (r == -1) {
        func_ov000_021652a8(7, 0, 1, data_ov001_02191eac);
        func_ov001_021829dc(o);
        return 2;
    }
    o->f0 = a;
    o->f8 = c;
    o->f4 = b;
    o->fc = d;
    o->f10 = e;
    o->f14 = f;
    *(uint8_t *)((uint8_t *)o + 0x42) = 0;
    *(uint8_t *)((uint8_t *)o + 0x43) = 0;
    o->f3c = 0;
    o->f40 = 0;
    o->f44 = 5;
    o->f30 = 0;
    o->f34 = 0;
    func_ov001_02182c70(o);
    size = 8;
    func_ov000_0216556c(o->f18, buf, &size);
    h = ((uint16_t *)buf)[1];
    lo = (uint8_t)((int)h >> 8);
    sw = (uint16_t)(lo | (((uint32_t)h << 8) & 0xff00u));
    func_ov000_021652a8(7, 0, 8, data_ov001_02191ef0, (uint32_t)sw);
    return 0;
}
