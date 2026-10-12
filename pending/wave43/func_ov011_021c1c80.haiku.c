#include "ffc/types.h"

extern uint32_t func_02091b10(void *object, void *first, ...);
extern uint32_t func_0203bb94(void *a, uint32_t b, uint32_t c, uint32_t d);
extern void func_02056bc0(void *object, void *node);
extern void func_ov011_021c1214(void *obj, uint32_t x);
extern void func_ov011_021c07dc(void *obj);
extern uint8_t data_ov011_021cb12c[];

void func_ov011_021c1c80(void *this, uint32_t p1)
{
    uint8_t *self = (uint8_t *)this;
    uint32_t off = 0xb1 << 2;
    uint32_t a[2];
    uint8_t buf[0x44];
    void *o;
    void **vt;
    uint32_t r;
    uint32_t z;

    o = *(void **)(self + 0x17c);
    vt = *(void ***)o;
    ((void (*)(void *))vt[10])(o);

    func_02091b10(buf, data_ov011_021cb12c, *(uint32_t *)(self + off));
    r = func_0203bb94(buf, 1, 0, 0);
    z = 0;
    *(uint32_t *)(self + off - 0x10) = r;
    func_02056bc0(self + 0x48, (void *)r);

    o = *(void **)(self + off - 0x10);
    vt = *(void ***)o;
    ((void (*)(void *))vt[10])(o);

    vt = *(void ***)o;
    ((void (*)(void *, uint32_t))vt[8])(o, 2);

    a[0] = z;
    a[1] = 0xa0;
    vt = *(void ***)o;
    ((void (*)(void *, uint32_t, uint32_t))vt[3])(o, a[0], a[1]);

    if (*(uint32_t *)(self + off + 0x70) == 1) {
        off += 0x68;
        o = *(void **)(self + off);
        *(uint32_t *)((uint8_t *)o + 0x7c) = p1;
        func_ov011_021c1214(this, z);
        func_ov011_021c07dc(this);
    }
}
