#include "ffc/types.h"

typedef struct {
    uint32_t f0; uint32_t f4; uint32_t f8; uint32_t fc;
    uint32_t f10; uint32_t f14; uint32_t f18; uint32_t f1c;
    uint32_t f20; uint32_t f24; uint32_t f28; uint32_t f2c;
    uint32_t f30; uint32_t f34; uint16_t f38;
} Obj;

extern void *func_ov000_02166414(void);
extern int func_ov001_021821ac(uint32_t a, uint32_t b, uint32_t *c);
extern int func_ov001_021805dc(Obj *o, uint32_t *a, uint32_t b, uint32_t c, void *fn);
extern void func_ov000_021652a8(uint32_t a, uint32_t b, uint32_t c, void *d, ...);
extern void *func_ov000_021686f4(uint32_t a, uint32_t b, void *c);
extern void func_ov001_02180838(uint32_t a, void *b);
extern void func_ov001_02180620(uint32_t a, void *b);
extern uint32_t func_ov001_02180820(uint32_t a);
extern uint16_t func_ov001_02180824(uint32_t a);
extern void func_ov000_02166470(void);
extern char data_ov000_0216b7a4[];
extern char data_ov000_0216b7dc[];
extern void func_ov000_0216641c(void);
extern void func_ov000_02166920(void);
extern void func_ov000_02166978(void);

int func_ov000_02166a88(uint32_t p0, uint32_t a1, uint32_t a2, uint32_t a3,
                        uint32_t s0, uint32_t s1, uint32_t s2, uint32_t s3,
                        uint32_t s4, uint32_t s5, uint32_t s6)
{
    Obj *o;
    uint32_t buf[6];
    int r;

    o = (Obj *)func_ov000_02166414();
    if (a1 == 0) {
        a1 = 0x5dc;
    }
    if (a2 == 0) {
        a2 = 0x5b4;
    }
    o->f24 = a3;
    o->f28 = s4;
    o->f10 = s0;
    o->f14 = s1;
    o->f18 = s2;
    o->f1c = s3;
    o->f20 = s5;
    func_ov001_021821ac(0, p0, buf);
    r = func_ov001_021805dc(o, buf, a2, a1, func_ov000_02166470);
    if (r != 0) {
        func_ov000_021652a8(12, 0, 2, data_ov000_0216b7a4, r);
        return 3;
    }
    o->f4 = (uint32_t)func_ov000_021686f4(12, 1, 0);
    if (o->f4 == 0) {
        func_ov000_021652a8(12, 2, 1, data_ov000_0216b7dc);
        return 1;
    }
    o->f8 = (uint32_t)func_ov000_021686f4(0x3c, 1, func_ov000_0216641c);
    if (o->f8 == 0) {
        func_ov000_021652a8(12, 2, 1, data_ov000_0216b7dc);
        return 1;
    }
    func_ov001_02180838(o->f0, func_ov000_02166920);
    func_ov001_02180620(o->f0, func_ov000_02166978);
    o->f34 = func_ov001_02180820(o->f0);
    o->f38 = func_ov001_02180824(o->f0);
    o->f30 = 0;
    o->fc = 1;
    if (s6 != 0) {
        o->f2c = s6;
    } else {
        o->f2c = 0;
    }
    return 0;
}
