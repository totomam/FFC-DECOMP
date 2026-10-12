#include "ffc/types.h"

extern int32_t func_020876c0(void *p);
extern void func_0208763c(void *p);
extern void func_02087678(void *p);
extern void func_0208f4b8(int32_t x);
extern uint8_t data_021448d0[];
extern uint8_t data_02141510[];
extern uint8_t data_021447e0[];
extern uint8_t data_02144804[];
extern uint8_t data_02144c08[];

#define W32(p, o) (*(int32_t *)((uint8_t *)(p) + (o)))

int32_t func_020927bc(int32_t a)
{
    int32_t idx;
    int32_t r4;
    int32_t v;

    if (a < 1 || a > 7) {
        return -1;
    }

    if (func_020876c0(data_021448d0) == 0) {
        W32(data_021447e0, 0x1c) = W32(*(uint8_t **)(data_02141510 + 4), 0x6c);
        v = 1;
    } else {
        if (W32(data_021447e0, 0x1c) == W32(*(uint8_t **)(data_02141510 + 4), 0x6c)) {
            v = W32(data_02144804, 0x1c) + 1;
        } else {
            func_0208763c(data_021448d0);
            W32(data_021447e0, 0x1c) = W32(*(uint8_t **)(data_02141510 + 4), 0x6c);
            v = 1;
        }
    }
    W32(data_02144804, 0x1c) = v;

    idx = a - 1;
    r4 = ((int32_t *)data_02144c08)[idx];
    if (r4 != 1) {
        ((int32_t *)data_02144c08)[idx] = 0;
    }

    v = W32(data_02144804, 0x1c) - 1;
    W32(data_02144804, 0x1c) = v;
    if (v == 0) {
        func_02087678(data_021448d0);
    }

    if (r4 == 1) {
        return 0;
    }
    if (r4 == 0 && a == 1) {
        return 0;
    }
    if (r4 == 0) {
        func_0208f4b8(0);
    }
    ((void (*)(int32_t))r4)(a);
    return 0;
}
