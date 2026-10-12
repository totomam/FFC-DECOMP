#include "ffc/types.h"

extern uint8_t data_020b0fd8[];
extern void func_02059a78(uint32_t a, uint32_t b);
extern void func_0205847c(uint32_t a, uint32_t b);
extern void func_02059924(uint32_t a, uint32_t b);
extern void func_0205d620(uint32_t p);
extern void func_02062868(uint32_t p);
extern void func_02056844(uint32_t p);

uint8_t *func_0205e15c(uint8_t *a) {
    uint8_t *p = a;
    uint32_t r5;
    uint32_t t;

    *(uint8_t **)p = data_020b0fd8;
    t = *(uint32_t *)(p + 0x24);
    r5 = *(uint32_t *)(*(uint8_t **)(p + 0x1c) + 0x14);
    func_02059a78(r5, t);
    func_0205847c(*(uint32_t *)(p + 0x2c), *(uint32_t *)(p + 0x30));
    func_02059924(r5, *(uint32_t *)(p + 0x20));
    func_0205d620((uint32_t)(p + 0x34));
    func_02062868((uint32_t)p);
    func_02056844((uint32_t)p);
    return p;
}
