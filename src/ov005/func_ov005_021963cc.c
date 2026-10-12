#include "ffc/types.h"

typedef struct { uint32_t a, b, c; } Blk;
typedef void (*VFn1)(void *self);
typedef void (*VFn2)(void *self, uint32_t code);

extern uint32_t func_02036cd8(const void *object);
extern void func_0201d1a4(void *a, uint32_t b, void *c);
extern void func_02005988(void *dst, const void *src);
extern void func_02068ddc(void *obj, void *arg);
extern void *func_020059cc(void *object);
extern uint32_t func_02036d18(void *object);
extern uint32_t func_02036cfc(void *object);
extern uint32_t func_02036ce0(void *object);
extern uint32_t func_02036f1c(void *object);
extern uint32_t func_02036d20(void *object);
extern void func_0201ba14(void *dst, void *a, void *obj, uint32_t c);
extern void *data_020b93b8;
extern uint8_t data_ov005_021992f4[];

void func_ov005_021963cc(uint8_t *self, void *p, uint32_t flag)
{
    uint32_t tmp4;
    uint32_t flag0;
    uint32_t r7;
    uint32_t r6;
    Blk s;
    Blk s2;
    void *o;
    void **vt;
    void *slot;

    func_0201d1a4(data_020b93b8, func_02036cd8(p), &tmp4);
    func_02005988(&s, data_ov005_021992f4);
    func_02068ddc(*(void **)(self + 0x84), &s);
    func_020059cc(&s);

    o = *(void **)(self + 0x84);
    if ((int8_t)*(uint32_t *)((uint8_t *)o + 0xc) == 0) {
        vt = *(void ***)o;
        ((VFn1)vt[2])(o);
    }

    if (flag != 0) {
        slot = *(void **)(self + 0x80);
        vt = *(void ***)slot;
        ((VFn2)vt[6])(slot, 3);
        goto L_end;
    }

    flag0 = 0;
    if (func_02036d18(p) == 1) {
        if (func_02036cfc(p) == 0) {
            flag0 = 1;
        }
    }

    r7 = 0;
    if (func_02036ce0(p) != 1) {
        if (func_02036ce0(p) != 2) {
            r7 = 1;
        }
    }

    r6 = 0;
    if (func_02036f1c(&tmp4) == 0) {
        if (func_02036d20(p) != 0) {
            r6 = 1;
        }
    }

    if (flag0 == 0 && r7 != 0 && r6 != 0) {
        slot = *(void **)(self + 0x80);
        vt = *(void ***)slot;
        ((VFn2)vt[6])(slot, 5);
    } else {
        slot = *(void **)(self + 0x80);
        vt = *(void ***)slot;
        ((VFn2)vt[6])(slot, 1);
    }

L_end:
    func_0201ba14(&s2, data_020b93b8, p, 0);
    func_02068ddc(*(void **)(self + 0x84), &s2);
    func_020059cc(&s2);
}
