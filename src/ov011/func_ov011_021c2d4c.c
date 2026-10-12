#include "ffc/types.h"

extern void func_02069288(void *object);
extern uint32_t func_02064aa8(const void *object);
extern uint32_t func_ov009_021ad730(void *a, uint32_t i);
extern void func_0205f2f0(void *object, uint32_t value);
extern uint32_t func_0201bd84(void *p, uint32_t v);
extern void *data_020b93b8;

void func_ov011_021c2d4c(void *a)
{
    uint8_t *p = (uint8_t *)a;
    uint8_t i;
    uint32_t r;

    if (p[0x27e]) {
        func_02069288(*(void **)(p + 0x294));
        func_02069288(*(void **)(p + 0x298));
    }

    for (i = 0; i < 5; i++) {
        func_02069288(*(void **)(p + 0xd8 + i * 4));
    }

    for (i = 0; i < 10; i++) {
        if (i < p[0x27f]) {
            r = func_02064aa8(*(void **)(*(void **)(p + 0xec + i * 4) + 0x94));
            func_0205f2f0((void *)r, func_ov009_021ad730(a, i));
        }
        func_02069288(*(void **)(p + 0xec + i * 4));
    }

    for (i = 0; i < 2; i++) {
        func_02069288(*(void **)(p + 0x150 + i * 4));
    }

    for (i = 0; i < 5; i++) {
        func_02069288(*(void **)(p + 0x13c + i * 4));
    }

    for (i = 0; i < 5; i++) {
        func_02069288(*(void **)(p + 0x2a0 + i * 4));
    }

    if (func_0201bd84(data_020b93b8, 0x27)) {
        func_02069288(*(void **)(p + 0x158));
        func_02069288(*(void **)(p + 0x15c));
    }

    func_02069288(*(void **)(p + 0x160));

    if (p[0x27e]) {
        func_02069288(*(void **)(p + 0x294));
        func_02069288(*(void **)(p + 0x298));
    }
}
