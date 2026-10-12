#include "ffc/types.h"

extern void func_ov000_021652a8(int a, int b, int c, void *d, uint8_t e);
extern uint32_t func_ov000_0216591c(void);
extern void func_ov001_02182d40(void *p);
extern uint8_t data_ov001_0219252c[];

struct Obj {
    uint32_t w0, w1, w2;
    void (*cb)(uint32_t, uint32_t);
    uint32_t w4;
    uint32_t arg;
    uint32_t w5;
    uint32_t state;
    uint32_t w6, w7, w8, w9;
    uint32_t f30;
    uint32_t f34;
    uint32_t f38;
};

struct Param {
    uint8_t pad[0xd];
    uint8_t mode;
};

void func_ov001_021838e8(void *a, void *b) {
    struct Obj *o = a;
    struct Param *p = b;
    uint32_t t;

    func_ov000_021652a8(7, 0, 8, data_ov001_0219252c, p->mode);
    if (o->state != 1) {
        o->state = 1;
        o->cb(1, o->arg);
        t = func_ov000_0216591c();
        o->f30 = 0;
        o->f38 = t + 0x2710;
        o->f34 = 0xc;
    }
    switch (p->mode) {
    case 0:
    case 1:
        break;
    case 2:
        func_ov001_02182d40(o);
        break;
    }
}
