#include "ffc/types.h"

#define FIELD(p, off) (*(uint32_t *)((uint8_t *)(p) + (off)))

extern int func_020692e0(void *obj);
extern uint32_t func_ov004_0215311c(uint32_t v);
extern void func_02021b68(uint32_t a, uint32_t b, uint32_t c);
extern void func_02021338(uint32_t v);
extern void func_ov004_02153568(uint32_t a, uint32_t b);
extern uint32_t func_020655dc(uint32_t obj, uint32_t idx, uint32_t zero);
extern uint32_t func_020655b8(uint32_t obj);
extern void func_02056bc0(void *object, void *node);
extern uint32_t func_ov004_02153124(uint32_t v);
extern void func_ov004_0214cf88(uint32_t v, void *node);

void func_ov004_0214d298(void *a, int b)
{
    uint32_t r1, r5, r6, r7;

    if (func_020692e0(a)) {
        switch (FIELD(a, 0x98)) {
        case 0:
        case 1:
            func_02021b68(func_ov004_0215311c(FIELD(a, 0x94)), 0xc, b);
            break;
        case 2:
        case 3:
            func_02021b68(func_ov004_0215311c(FIELD(a, 0x94)), 0xe, b);
            break;
        }
        switch (FIELD(a, 0x98)) {
        case 0:
        case 2:
            func_02021b68(func_ov004_0215311c(FIELD(a, 0x94)), 0x10, 0);
            break;
        case 1:
        case 3:
            func_02021b68(func_ov004_0215311c(FIELD(a, 0x94)), 0x10, 1);
            break;
        }
        func_02021338(0x7e);
        if (b != 0) {
            func_ov004_02153568(FIELD(a, 0x94), FIELD(a, 0x98));
            r6 = func_020655dc(FIELD(a, 0xa0), 4, 0);
            r7 = func_020655b8(FIELD(a, 0xa0));
            r1 = func_020655dc(FIELD(a, 0xa0), 5, 0);
            r5 = FIELD(a, 0x9c);
            func_02056bc0((void *)r5, (void *)r1);
            func_02056bc0((void *)r5, (void *)r7);
            func_02056bc0((void *)r5, (void *)r6);
        } else {
            r1 = func_020655dc(FIELD(a, 0xa0), 3, 0);
            func_02056bc0((void *)FIELD(a, 0x9c), (void *)r1);
        }
    }

    if (func_020692e0(a)) {
        func_ov004_0214cf88(func_ov004_02153124(FIELD(a, 0x94)), a);
    }
}
