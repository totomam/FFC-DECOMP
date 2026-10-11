#include "ffc/types.h"

extern void func_02087620(void *object);
extern uint32_t data_020aadd0[];
extern uint32_t data_020b0688[];
extern uint32_t data_020b2610[];
extern uint32_t data_020b2624[];

typedef struct Sub {
    uint32_t *vt;
    uint32_t a;
    uint32_t b;
    uint32_t c;
    uint8_t inner[0x10];
} Sub;

typedef struct Obj {
    uint32_t *vt;
    uint32_t w4;
    uint32_t w8;
    uint32_t flags;
    uint32_t pad10;
    Sub sub;
    uint8_t pad30[0x0c];
    uint32_t w40;
    uint32_t w44;
    uint32_t w48;
    uint32_t w4c;
    uint8_t flag50;
    uint8_t pad51[3];
    uint32_t w54;
    uint32_t w58;
} Obj;

void *func_02075c00(void *p)
{
    Obj *o = (Obj *)p;

    o->vt = data_020aadd0;
    o->flags &= ~0xffu;
    Sub *s = &o->sub;
    uint32_t z = 0;
    s->a = z;
    s->b = z;
    s->c = z;
    s->vt = data_020b0688;
    func_02087620(s->inner);
    o->w40 = 0;
    o->vt = data_020b2610;
    o->w44 = 0;
    o->sub.vt = data_020b2624;
    o->flag50 = 0;
    o->w48 = 0;
    o->w4c = 0;
    o->w54 = 0;
    o->w58 = 0;
    return p;
}
