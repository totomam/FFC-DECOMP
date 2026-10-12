#include "ffc/types.h"

extern void func_02086ad4(void *object, uint32_t first, ...);
extern void func_02005988(void *object, void *other);
extern void func_020095b8(void *object, void *arg);
extern void func_02009574(void *object, void *arg, uint8_t value);
extern void *func_020059cc(void *object);
extern uint32_t data_ov013_021c3f1c[];

void func_ov013_021be658(uint8_t *self, uint32_t p1, uint32_t p2)
{
    uint8_t objA[0x80];
    uint32_t objB[3];
    uint32_t i;
    uint32_t v14;
    uint8_t flag;

    v14 = (*(uint32_t **)(self + 0xc8))[5];
    i = 3;
    do {
        uint32_t t = (i == 1) ? v14 : 0;
        func_02086ad4(objA, data_ov013_021c3f1c[2], p1, p2, i, t + 0x61);
        func_02005988(objB, objA);
        if (*(uint32_t *)(self + 0x10c) < *(uint32_t *)(self + 0x110)) {
            uint32_t idx = *(uint32_t *)(self + 0x10c);
            uint8_t *e = (uint8_t *)*(uint32_t *)(self + 0x108) + idx * 12;
            if (e != 0) {
                func_020095b8(e, objB);
            }
            (*(uint32_t *)(self + 0x10c))++;
        } else {
            flag = 0;
            func_02009574(self + 0x108, objB, flag);
        }
        func_020059cc(objB);
        i--;
    } while (i != 0);
}
