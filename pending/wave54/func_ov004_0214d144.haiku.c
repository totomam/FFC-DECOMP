#include "ffc/types.h"

extern int func_020692e0(void *p);
extern void *func_ov004_0215311c(void *p);
extern void func_02021b68(void *a, uint32_t b, uint32_t c);
extern void func_02021338(uint32_t a);
extern void func_ov004_02153568(void *a, void *b);
extern void *func_020655dc(void *p, uint32_t a, uint32_t b);
extern void *func_020655b8(void *p);
extern void func_02056bc0(void *object, void *node);

void func_ov004_0214d144(void *arg0, uint32_t arg1) {
    uint8_t *self = (uint8_t *)arg0;
    void *r;
    void *a;
    void *b;
    void *c;
    void *obj;

    if (func_020692e0(arg0) == 0) {
        return;
    }

    switch (*(uint32_t *)(self + 0x98)) {
    case 0:
    case 1:
        r = func_ov004_0215311c(*(void **)(self + 0x94));
        func_02021b68(r, 0xc, arg1);
        break;
    case 2:
    case 3:
        r = func_ov004_0215311c(*(void **)(self + 0x94));
        func_02021b68(r, 0xe, arg1);
        break;
    }

    switch (*(uint32_t *)(self + 0x98)) {
    case 0:
    case 2:
        r = func_ov004_0215311c(*(void **)(self + 0x94));
        func_02021b68(r, 0x10, 0);
        break;
    case 1:
    case 3:
        r = func_ov004_0215311c(*(void **)(self + 0x94));
        func_02021b68(r, 0x10, 1);
        break;
    }

    func_02021338(0x7e);

    if (arg1) {
        func_ov004_02153568(*(void **)(self + 0x94), *(void **)(self + 0x98));
        a = func_020655dc(*(void **)(self + 0xa0), 4, 0);
        b = func_020655b8(*(void **)(self + 0xa0));
        c = func_020655dc(*(void **)(self + 0xa0), 5, 0);
        obj = *(void **)(self + 0x9c);
        func_02056bc0(obj, c);
        func_02056bc0(obj, b);
        func_02056bc0(obj, a);
    } else {
        c = func_020655dc(*(void **)(self + 0xa0), 3, 0);
        obj = *(void **)(self + 0x9c);
        func_02056bc0(obj, c);
    }
}
