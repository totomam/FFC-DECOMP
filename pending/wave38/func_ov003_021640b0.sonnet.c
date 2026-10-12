#include "ffc/types.h"

extern char data_ov003_0217a774;
extern uint32_t data_020b8e44;
extern void func_0201805c(void *out, uint32_t a, uint32_t b);
extern uint16_t func_02018104(uint32_t a, uint32_t b);

typedef struct {
    uint32_t pre[4];
    uint32_t a;
    uint32_t b;
    int32_t x;
    int32_t y;
    uint32_t xs;
    uint32_t ys;
} Loc;

typedef struct {
    uint16_t a;
    uint16_t p0;
    uint16_t b;
    uint16_t p1;
    uint8_t c;
} Stk;

typedef struct Obj {
    void *vt;
    uint32_t f04;
    uint32_t f08;
    uint32_t f0c;
    uint32_t f10;
    uint32_t f14;
    uint32_t f18;
    uint32_t f1c;
    uint16_t f20;
    uint16_t f22;
    uint16_t f24;
    uint16_t f26;
    uint8_t f28;
} Obj;

Obj *func_ov003_021640b0(Obj *p, uint32_t v, uint16_t c, uint32_t d, Stk s)
{
    Loc l;
    uint32_t y;
    uint32_t x;
    uint32_t f;

    f = p->f0c & ~0xffu;
    p->vt = &data_ov003_0217a774;
    p->f0c = f;
    p->f14 = v;
    func_0201805c(&l.x, data_020b8e44, d);
    y = l.y;
    x = l.x;
    l.ys = y << 12;
    l.b = y;
    p->f1c = l.ys;
    p->f20 = c;
    l.xs = x << 12;
    p->f18 = l.xs;
    l.a = x;
    p->f22 = func_02018104(data_020b8e44, d);
    p->f24 = s.a;
    p->f26 = s.b;
    p->f28 = s.c;
    return p;
}
