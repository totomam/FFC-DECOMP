#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} S;

extern void func_02056c9c(void *p, uint32_t z);
extern void *func_0205681c(uint32_t size);
extern uint32_t func_ov002_021ae68c(uint32_t x);
extern void *func_ov002_021ba3f8(void *obj, uint32_t t, uint32_t b, S s);
extern void func_ov002_021ae734(uint32_t x);
extern void func_ov002_0219b850(void);
extern uint32_t func_ov002_02198e48(void);
extern void func_ov002_021ba584(void *o);
extern void func_ov002_021ba558(void *o, uint32_t x);
extern void *func_ov002_021ba650(void *obj, uint32_t t, uint32_t b, S s, S s2);
extern void func_ov002_021ba7bc(void *o);
extern void func_ov002_021ba780(void *o, uint32_t x);
extern void func_ov002_021ba024(void *o, S t);
extern void func_02056bc0(void *object, void *node);
extern char data_ov002_021d64a8[];
extern uint32_t data_ov002_021d642c[];
extern uint32_t data_ov002_021d63f0[];

#define FLD(p, off, T) (*(T *)((uint8_t *)(p) + (off)))

void *func_ov002_021b9eb4(void *p, uint32_t a, uint32_t b, S s, S t)
{
    void *r4;

    func_02056c9c(p, 0);
    FLD(p, 0, void *) = data_ov002_021d64a8;
    FLD(p, 0x80, uint32_t) = b;
    FLD(p, 0x8c, uint32_t) = a;
    FLD(p, 0x98, uint32_t) = 0;

    r4 = func_0205681c(0x94);
    if (r4 != 0) {
        uint32_t idx = func_ov002_021ae68c(FLD(p, 0x8c, uint32_t));
        r4 = func_ov002_021ba3f8(r4, data_ov002_021d642c[idx * 2], FLD(p, 0x80, uint32_t), s);
    } else {
        r4 = 0;
    }
    FLD(p, 0x88, void *) = r4;

    func_ov002_021ae734(FLD(p, 0x8c, uint32_t));
    func_ov002_0219b850();
    if (func_ov002_02198e48() != 1) {
        func_ov002_021ba584(FLD(p, 0x88, void *));
        func_ov002_021ba558(FLD(p, 0x88, void *), 1);
    }

    r4 = func_0205681c(0x94);
    if (r4 != 0) {
        r4 = func_ov002_021ba650(r4, data_ov002_021d63f0[8], FLD(p, 0x80, uint32_t), s, s);
    }
    FLD(p, 0x84, void *) = r4;

    func_ov002_021ae734(FLD(p, 0x8c, uint32_t));
    func_ov002_0219b850();
    if (func_ov002_02198e48() != 1) {
        func_ov002_021ba7bc(FLD(p, 0x84, void *));
        func_ov002_021ba780(FLD(p, 0x84, void *), 1);
        func_ov002_021ba024(p, t);
    }

    func_02056bc0((uint8_t *)p + 0x48, FLD(p, 0x88, void *));
    func_02056bc0((uint8_t *)p + 0x48, FLD(p, 0x84, void *));
    return p;
}
