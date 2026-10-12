#include "ffc/types.h"

typedef struct Obj {
    uint32_t f0;
    uint32_t f4;
    uint32_t f8;
    uint32_t fc;
    uint32_t f10;
    uint32_t f14;
    uint32_t f18;
} Obj;

typedef struct G {
    uint32_t f0;
    Obj *f4;
} G;

extern G data_ov000_02170064;
extern uint32_t func_ov000_02159358(uint32_t x);
extern uint32_t func_ov001_021821ac(uint32_t a, uint32_t b, uint32_t c);
extern uint32_t func_ov001_021805dc(Obj *o, uint32_t b, uint32_t c, uint32_t d, void (*fn)(void));
extern uint32_t func_ov000_0215b894(void);
extern void func_ov001_02180620(uint32_t a, void (*fn)(void));
extern void func_ov001_02180838(uint32_t a, void (*fn)(void));
extern void func_ov000_0215bf14(void);
extern void func_ov000_0215d798(void);
extern void func_ov000_0215d6f8(void);

uint32_t func_ov000_0215b62c(void) {
    uint32_t r;
    uint32_t v;
    Obj *p;

    if (data_ov000_02170064.f4->f0 != 0) {
        return 0;
    }
    v = func_ov000_02159358(0x4000) + 0xC000;
    v = (uint16_t)v;
    p = data_ov000_02170064.f4;
    r = func_ov001_021821ac(0, v, 0);
    r = func_ov001_021805dc(data_ov000_02170064.f4, r, p->f14, p->f18, func_ov000_0215bf14);
    if (func_ov000_0215b894() != 0) {
        return r;
    }
    func_ov001_02180620(data_ov000_02170064.f4->f0, func_ov000_0215d798);
    func_ov001_02180838(data_ov000_02170064.f4->f0, func_ov000_0215d6f8);
    return r;
}
