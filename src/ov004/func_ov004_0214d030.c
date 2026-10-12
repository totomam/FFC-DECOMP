#include "ffc/types.h"

extern int func_020692e0(void *obj);
extern void *func_ov004_0215311c(void *x);
extern void func_02021b68(void *a, uint32_t b, uint32_t c);
extern void func_02021338(uint32_t x);
extern void func_ov004_02153568(void *a, int b);
extern void *func_020655dc(void *a, int b, int c);
extern void *func_020655b8(void *a);
extern void func_02056bc0(void *object, void *node);

typedef struct Obj {
    char pad0[0x94];
    void *f94;
    int f98;
    void *f9c;
    void *fa0;
    uint8_t fa4;
} Obj;

void func_ov004_0214d030(Obj *p, int flag)
{
    void *a;
    void *b;
    void *c;
    void *m;

    if (flag == 0) {
        p->fa4 = 0;
    }
    if (!func_020692e0(p)) {
        return;
    }
    switch (p->f98) {
    case 0:
    case 1:
        func_02021b68(func_ov004_0215311c(p->f94), 0xc, flag);
        break;
    case 2:
    case 3:
        func_02021b68(func_ov004_0215311c(p->f94), 0xe, flag);
        break;
    }
    switch (p->f98) {
    case 0:
    case 2:
        func_02021b68(func_ov004_0215311c(p->f94), 0x10, 0);
        break;
    case 1:
    case 3:
        func_02021b68(func_ov004_0215311c(p->f94), 0x10, 1);
        break;
    }
    func_02021338(0x7e);
    if (flag != 0) {
        func_ov004_02153568(p->f94, p->f98);
        a = func_020655dc(p->fa0, 4, 0);
        b = func_020655b8(p->fa0);
        c = func_020655dc(p->fa0, 5, 0);
        m = p->f9c;
        func_02056bc0(m, c);
        func_02056bc0(m, b);
        func_02056bc0(m, a);
    } else {
        c = func_020655dc(p->fa0, 3, 0);
        m = p->f9c;
        func_02056bc0(m, c);
    }
}
