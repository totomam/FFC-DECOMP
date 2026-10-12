#include "ffc/types.h"

extern uint32_t func_0204de50(void);
extern uint32_t func_0204de70(void);
extern uint32_t func_0204de80(uint32_t);
extern uint32_t *func_0204b07c(uint32_t size, uint32_t align);
extern void func_0204b0ac(uint32_t, uint32_t);
extern void func_0204acc0(void *p, uint32_t size);
extern uint32_t *func_0204b7fc(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
extern void func_0204b098(uint32_t *);
extern void func_0204dc18(uint32_t, uint32_t *);
extern void func_0204de84(uint32_t *, uint32_t);

uint32_t func_0204df18(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5)
{
    uint32_t *o;
    uint32_t *r;
    uint32_t a;
    uint32_t h;
    uint32_t k;

    a = func_0204de50();
    h = func_0204de70();
    k = func_0204de80(a);

    o = func_0204b07c(0x804c, 0x20);
    if (o == 0) {
        func_0204b0ac(h, 1);
        return 0;
    }
    func_0204acc0(o, 0x804c);
    r = func_0204b7fc(h, p0, p1, p2, p3, p5, 0, 0);
    o[4] = (uint32_t)r;
    if (r == 0) {
        func_0204b098(o);
        return 0;
    }
    o[5] = r[0x2c / 4];
    o[0] = 0;
    o[7] = p4;
    o[9] = 0;
    o[10] = 0;
    o[6] = (uint32_t)-1;
    func_0204dc18(k, o);
    o[1] = 0xf;
    o[2] = 0;
    o[3] = 1;
    func_0204de84(o, 0);
    o[12] = 0;
    *(uint32_t *)((uint8_t *)o + 0x8040) = 0;
    *(uint32_t *)((uint8_t *)o + 0x8044) = 0;
    func_0204acc0((uint8_t *)o + 0x40, 0x8000);
    *(uint32_t *)((uint8_t *)o + 0x8048) = 1;
    return (uint32_t)o;
}
