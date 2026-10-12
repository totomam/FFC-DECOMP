#include "ffc/types.h"

typedef struct Obj {
    void *vt;
    uint32_t w4;
    uint32_t w8;
    uint32_t wc;
    uint32_t w10;
    void *owner;
} Obj;

extern void func_02021338(uint32_t x);
extern void *func_0205681c(uint32_t size);
extern void *func_ov007_0219f85c(void *p, uint32_t x);
extern void *func_0203b708(uint32_t x);
extern void func_02056bc0(void *object, void *node);
extern uint8_t data_ov007_021c3084[];
extern uint8_t data_ov007_021c3070[];

void func_ov007_0219eaf0(uint8_t *this)
{
    Obj *r4;
    Obj *r6;
    uint8_t *r7;
    void *tmp;

    func_02021338(0xcf);
    this[0xd0] = 1;

    r4 = (Obj *)func_0205681c(0x18);
    if (r4 != 0) {
        r4->wc &= ~0xffu;
        r4->vt = data_ov007_021c3084;
        ((uint8_t *)r4)[0x13] = 0;
        r4->owner = this;
    }

    r7 = (uint8_t *)func_0205681c(0x180);
    if (r7 != 0) {
        r7 = (uint8_t *)func_ov007_0219f85c(r7, 0);
    }
    if (r7 != 0) {
        r7 += 0xc;
    }

    r6 = (Obj *)func_0205681c(0x18);
    if (r6 != 0) {
        r6->wc &= ~0xffu;
        r6->vt = data_ov007_021c3070;
        r6->owner = this;
    }

    tmp = func_0203b708(0x1e);
    this += 0x14;
    func_02056bc0(this, tmp);
    func_02056bc0(this, r6);
    func_02056bc0(this, r7);
    func_02056bc0(this, r4);
}
