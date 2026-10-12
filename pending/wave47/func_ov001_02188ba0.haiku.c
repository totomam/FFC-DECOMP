#include "ffc/types.h"

typedef void (*FreeFn)(void *);

struct Data {
    uint32_t f00;
    uint32_t f04;
    uint32_t f08;
    uint32_t f0c;
    uint32_t f10;
    FreeFn f14;
    void *f18;
    void *f1c;
    uint32_t pad[7];
    uint32_t f3c;
    uint32_t f40;
    uint32_t f44;
};

extern struct Data data_ov001_02195798;
extern uint8_t data_ov001_021957e0[];
extern uint8_t data_ov001_02195865[];
extern uint8_t data_ov001_021957c9[];
extern uint8_t data_ov001_0219584c[];
extern uint8_t data_ov001_021957f1[];

extern void func_ov001_02189994(uint8_t *p);
extern void func_ov001_02188e98(uint8_t *p);
extern void *func_ov001_02188b74(uint32_t x);
extern uint32_t func_ov001_021889d4(uint8_t *s, uint32_t v, uint32_t n);
extern uint32_t func_ov001_02189918(void);
extern uint32_t func_ov001_021898e4(void);
extern int32_t func_0204d9c8(uint32_t a, uint32_t b, uint32_t c);
extern uint32_t func_ov001_02188da4(uint8_t *p);
extern void func_ov001_021898f4(void);
extern void func_ov001_02188d14(uint32_t a, uint32_t b);

int32_t func_ov001_02188ba0(uint32_t a, FreeFn b, uint32_t c, uint32_t d, uint32_t e, uint32_t f, uint32_t g)
{
    struct Data *p = &data_ov001_02195798;

    p->f04 = a;
    p->f14 = b;
    p->f00 = g;
    p->f3c = 0;
    p->f40 = 0;
    p->f44 = 0;
    p->f0c = 0;
    p->f10 = 0;
    p->f18 = 0;
    p->f1c = 0;

    func_ov001_02189994(data_ov001_021957e0);
    func_ov001_02188e98(data_ov001_02195865);
    p->f1c = func_ov001_02188b74(c);
    if (p->f1c == 0) {
        goto fail;
    }
    p->f18 = func_ov001_02188b74(d);
    if (p->f18 == 0) {
        goto fail;
    }
    data_ov001_021957c9[func_ov001_021889d4(data_ov001_021957c9, e, 4)] = 0;
    data_ov001_0219584c[func_ov001_021889d4(data_ov001_0219584c, f, 0x10)] = 0;

    if (func_ov001_02189918() && func_ov001_021898e4()) {
        if (func_0204d9c8(a, (uint32_t)b, 0x11) != -1) {
            p->f0c = func_ov001_02188da4(data_ov001_021957f1);
            p->f08 = 1;
            return 1;
        }
        func_ov001_021898f4();
    }

    data_ov001_02195798.f14(data_ov001_02195798.f18);
    data_ov001_02195798.f14(data_ov001_02195798.f1c);
    func_ov001_02188d14(8, 0);
    return 0;

fail:
    if (data_ov001_02195798.f18 != 0) {
        data_ov001_02195798.f14(data_ov001_02195798.f18);
    }
    if (data_ov001_02195798.f1c != 0) {
        data_ov001_02195798.f14(data_ov001_02195798.f1c);
    }
    func_ov001_02188d14(1, 0);
    return 0;
}
