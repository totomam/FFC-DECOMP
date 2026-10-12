#include "ffc/types.h"

extern void *func_ov000_02166414(void);
extern void func_ov000_021652a8(uint32_t a, uint32_t b, uint32_t c, void *d);
extern int32_t func_ov000_02168768(void *p);
extern void *func_ov000_0216876c(void *p, int32_t i);
extern uint8_t data_ov000_0216b4c8[];

typedef struct Ctx {
    uint8_t pad0[8];
    void *f8;
    uint8_t pad1[0x18];
    void (*f24)(int32_t, void *);
    uint32_t pad2;
    void *f2c;
} Ctx;

typedef struct Obj {
    uint8_t pad0[0x34];
    void (*f34)(int32_t, void *);
    void *f38;
} Obj;

void func_ov000_02166470(void)
{
    int32_t i;
    int32_t n;
    Ctx *c;

    c = (Ctx *)func_ov000_02166414();
    func_ov000_021652a8(12, 0, 16, data_ov000_0216b4c8);
    if (c->f24 != 0) {
        c->f24(3, c->f2c);
    }
    n = func_ov000_02168768(c->f8);
    for (i = 0; i < n; i++) {
        Obj *o = (Obj *)func_ov000_0216876c(c->f8, i);
        if (o->f34 != 0) {
            o->f34(3, o->f38);
        }
    }
}
