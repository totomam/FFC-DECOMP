#include "ffc/types.h"

typedef struct VTbl {
    void *f0;
    void (*f1)(void *);
} VTbl;

typedef struct Obj {
    VTbl *vt;
} Obj;

extern void func_02056c4c(void *p);
extern void func_ov003_0215bd5c(void *p);
extern void *func_020059cc(void *object);
extern void func_02056844(void *p);
extern void func_0202984c(void *p);
extern void func_ov003_0215bd30(void *p);
extern void func_02052d3c(void *a, void *b);
extern void func_02052c04(void *p);
extern void *func_02053290(void *object);
extern void func_02050c28(void *p);
extern void func_02056db0(void *p);
extern uint8_t data_ov003_0217a098[];
extern uint8_t data_ov003_0217a0b4[];

#define FLD(T, p, idx) (*(T *)((uint8_t *)(p) + (idx) * 4))
#define FLD16(T, p, idx) (*(T *)((uint8_t *)(p) + (idx) * 16))

void *func_ov003_021559b8(void *p)
{
    Obj *o;
    uint8_t *r4;
    uint8_t *r5;
    r4 = (uint8_t *)p;

    *(void **)r4 = data_ov003_0217a098;
    *(void **)(r4 + 0x80) = data_ov003_0217a0b4;
    func_02056c4c(r4 + 0x48);

    o = FLD(Obj *, r4, 0xbd);
    if (o != 0) {
        if (o != 0) {
            o->vt->f1(o);
        }
        FLD(void *, r4, 0xbd) = 0;
    }

    o = FLD(Obj *, r4, 0xd9);
    if (o != 0) {
        if (o != 0) {
            func_ov003_0215bd5c((uint8_t *)o + 0x18);
            func_020059cc((uint8_t *)o + 0xc);
            func_020059cc(o);
            func_02056844(o);
        }
        FLD(void *, r4, 0xd9) = 0;
    }

    o = FLD(Obj *, r4, 0xb3);
    if (o != 0) {
        if (o != 0) {
            o->vt->f1(o);
        }
        FLD(void *, r4, 0xb3) = 0;
    }

    o = FLD16(Obj *, r4, 0x2d);
    if (o != 0) {
        if (o != 0) {
            o->vt->f1(o);
        }
        FLD16(void *, r4, 0x2d) = 0;
    }

    o = FLD(Obj *, r4, 0xb5);
    if (o != 0) {
        if (o != 0) {
            o->vt->f1(o);
        }
        FLD(void *, r4, 0xb5) = 0;
    }

    func_0202984c(r4 + 0x224);
    func_0202984c(r4 + 0x17c);
    func_ov003_0215bd30(r4 + 0x16c);
    func_ov003_0215bd30(r4 + 0x15c);
    func_ov003_0215bd30(r4 + 0x14c);

    r5 = r4 + 0x98;
    if (*(void **)(r5 + 4) != 0) {
        if (*(uint8_t *)(r5 + 0xc) != 0) {
            func_02052d3c(*(void **)(r5 + 4), *(void **)(r5 + 8));
        }
        func_02052c04(*(void **)(r5 + 4));
    }
    func_02053290(r5);
    func_02050c28(r4 + 0x8c);
    func_02056db0(r4);
    func_02056844(r4);
    return r4;
}
