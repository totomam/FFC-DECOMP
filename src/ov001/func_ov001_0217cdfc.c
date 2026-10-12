#include "ffc/types.h"

extern void *func_ov000_021653d4(uint32_t size);
extern uint32_t func_ov001_0217ef6c(void *a, void *b);
extern void *func_020903cc(void *p, int c, uint32_t n);
extern int data_ov001_0219135c;

typedef struct {
    uint32_t f00;
    int32_t f04;
    uint32_t f08;
    uint32_t f0c;
    uint32_t f10;
    uint32_t f14;
    uint32_t f18;
    uint32_t f1c;
    uint32_t f20;
    uint32_t f24;
    uint8_t pad[0x184 - 0x28];
    uint32_t f184;
    uint32_t f188;
} Obj;

uint32_t func_ov001_0217cdfc(void *a, Obj **out, uint32_t v)
{
    Obj *o;

    o = func_ov000_021653d4(0x1a0);
    if (o == 0) {
        func_ov001_0217ef6c(a, &data_ov001_0219135c);
        return 1;
    }
    func_020903cc(o, 0, 0x1a0);
    o->f00 = v;
    o->f04 = -1;
    o->f08 = 0;
    o->f10 = 0;
    o->f14 = 0;
    o->f0c = 0;
    o->f20 = 0;
    o->f24 = 0;
    o->f1c = 0x1000;
    o->f18 = (uint32_t)func_ov000_021653d4(0x1001);
    if (o->f18 == 0) {
        func_ov001_0217ef6c(a, &data_ov001_0219135c);
        return 1;
    }
    o->f184 = 0;
    o->f188 = 0;
    *out = o;
    return 0;
}
