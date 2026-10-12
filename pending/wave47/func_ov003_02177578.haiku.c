#include "ffc/types.h"

extern void func_02021338(uint32_t arg);
extern uint32_t func_0209a4cc(void);
extern uint32_t func_0209af28(uint32_t a, uint32_t b);
extern int32_t func_0209ab90(uint32_t v);
extern void func_02064390(void *object, uint32_t first, uint32_t second);
extern void func_020685b8(void *object, uint32_t first, uint32_t second);

typedef void (*VFn)(void *, uint32_t, uint32_t);

typedef struct VTbl {
    uint8_t pad[0x38];
    VFn fn38;
} VTbl;

typedef struct Obj2 {
    const VTbl *vt;
} Obj2;

typedef struct Obj {
    uint8_t pad0[0xc];
    uint32_t f0c;
    uint8_t pad1[0x80 - 0x10];
    void *a80;
    void *a84;
    void *a88;
    void *a8c;
    uint32_t a90;
    uint32_t a94;
} Obj;

void func_ov003_02177578(Obj *p)
{
    void *o;
    uint32_t f;

    if (p->a90 == 0) {
        func_02021338(0x170);
    }
    p->a90 = p->a90 + 1;
    f = func_0209af28(0x41cccccd, func_0209a4cc());
    p->a94 = f;

    o = p->a80;
    if (o != 0) {
        int32_t x = func_0209ab90(f);
        ((Obj2 *)o)->vt->fn38(o, 0x100 - x, 0x70);
    }

    o = p->a84;
    if (o != 0) {
        int32_t x = func_0209ab90(p->a94);
        ((Obj2 *)o)->vt->fn38(o, 0x104 - x, 0x84);
    }

    o = p->a88;
    if (o != 0) {
        func_02064390(o, 0x102 - func_0209ab90(p->a94), 0x73);
    }

    o = p->a8c;
    if (o != 0) {
        func_020685b8(o, 0x10a - func_0209ab90(p->a94), 0x77);
    }

    if (p->a90 >= 10) {
        p->f0c = (p->f0c & ~0xffu) | 2;
    }
}
