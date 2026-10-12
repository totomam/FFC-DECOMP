#include "ffc/types.h"

extern uint32_t func_ov002_02198694(uint32_t a);
extern uint32_t func_ov002_021994c0(uint32_t a, uint32_t b);
extern uint32_t func_ov002_02198688(uint32_t a, uint32_t b);
extern uint32_t func_ov002_021a18c4(uint32_t object, uint32_t index);
extern uint32_t func_ov002_021aa778(uint32_t object);
extern uint32_t func_ov002_021a18bc(uint32_t object);
extern uint32_t func_ov002_021a1ac4(uint32_t object);
extern uint32_t func_ov002_021994e0(uint32_t a, uint32_t b);
extern void *func_0205681c(uint32_t size);
extern uint32_t func_02055a2c(uint32_t a, uint32_t b);
extern void func_02056bc0(uint32_t object, uint32_t node);
extern uint32_t func_ov002_021c9538(uint32_t a);
extern uint8_t data_020ab798[];

#define BC(p) (*(uint32_t *)((p) + 0xbc))
#define B8(p) (*(uint32_t *)((p) + 0xb8))
#define HQ(p, x) func_ov002_021994c0(func_ov002_02198694(BC(p)), (x))
#define HE(p, x) func_ov002_021994e0(func_ov002_02198694(BC(p)), (x))

uint32_t func_ov002_021c980c(uint8_t *p) {
    uint32_t r4, r6, r7;
    uint32_t s;
    uint32_t obj, t, z = 0;
    uint8_t *q;

    if (HQ(p, 0x80)) goto L0054;
    if (HQ(p, 0x100)) goto L0054;
    if (HQ(p, 0x200)) goto L0054;
    HQ(p, 0x400);
L0054:
    r6 = 0x20;
    HQ(p, r6);
    if (HQ(p, 0x80)) goto L00bc;
    if (HQ(p, 0x100)) goto L00bc;
    if (HQ(p, 0x200)) goto L00bc;
    if (HQ(p, 0x400)) goto L00bc;
    goto L01fc;
L00bc:
    r6 = 0;
    r7 = 0;
    obj = func_ov002_02198688(BC(p), B8(p));
    if (obj != 0) {
        while (func_ov002_021a18bc(obj) > z) {
            r7 = func_ov002_021aa778(func_ov002_021a18c4(obj, r6));
            break;
        }
        obj = func_ov002_021a1ac4(obj);
        while (func_ov002_021a18bc(obj) > z) {
            r6 = func_ov002_021aa778(func_ov002_021a18c4(obj, 0));
            break;
        }
    }
L0110:
    r4 = 0;
    if (HQ(p, 0x80)) {
        HE(p, 0x80);
    } else if (HQ(p, 0x100)) {
        r4 = 1;
        HE(p, 0x100);
    } else if (HQ(p, 0x200)) {
        r4 = 2;
        HE(p, 0x200);
    } else if (HQ(p, 0x400)) {
        r4 = 3;
        HE(p, 0x400);
    }

    {
        uint32_t q2, b8;
        uint32_t *w = (uint32_t *)func_0205681c(0x24);
        if (w) {
            q2 = (uint32_t)p;
            if (p) q2 += 0x80;
            b8 = B8(p);
            w[2] = 0;
            w[3] = 0x100d7;
            w[0] = (uint32_t)data_020ab798;
            w[4] = q2;
            w[5] = b8;
            w[6] = r7;
            w[7] = r6;
            w[8] = r4;
        }
        t = func_02055a2c(BC(p) + 0x80, (uint32_t)w);
    }
    func_02056bc0((uint32_t)(p + 0x14), t);
    return 1;
L01fc:
    if (HQ(p, r6)) {
        t = func_ov002_021c9538(HE(p, r6));
        t = func_02055a2c(BC(p) + 0x80, t);
        func_02056bc0((uint32_t)(p + 0x14), t);
        return 1;
    }
    return 0;
}
