#include "ffc/types.h"

extern uint8_t *func_ov000_02163350(void);
extern uint8_t *func_ov000_02163654(void *a);
extern int func_ov000_0215eb30(int b, void *a, uint32_t x, uint16_t y, uint32_t *p, int flag);
extern int func_ov000_0215fed0(void);
extern uint64_t func_020882cc(void);

int func_ov000_021614a0(void *a, int b)
{
    uint32_t local;
    int flag;
    uint8_t *p;
    uint64_t pair;
    uint8_t *base;

    if (b == 0xd) {
        local = *(uint32_t *)(func_ov000_02163350() + 0x680);
        flag = 1;
    } else {
        flag = 0;
    }

    p = func_ov000_02163654(a);
    if (p == 0) {
        return 0;
    }

    func_ov000_0215eb30(b, a, *(uint32_t *)(p + 4), *(uint16_t *)(p + 0xc), &local, flag);

    if (func_ov000_0215fed0() != 0) {
        return 0;
    }

    pair = func_020882cc();
    base = func_ov000_02163350();
    *(uint32_t *)(base + 0x660) = (uint32_t)pair;
    *(uint32_t *)(base + 0x664) = (uint32_t)(pair >> 32);
    return 1;
}
