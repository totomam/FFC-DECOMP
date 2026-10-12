#include "ffc/types.h"

extern void func_02021338(uint32_t x);
extern uint32_t func_020655dc(uint32_t a, uint32_t b, uint32_t c);
extern void func_02056bc0(void *object, void *node);
extern uint32_t func_020655b8(uint32_t a);
extern void func_ov007_021b603c(void *p);

void func_ov007_021b6574(uint8_t *p)
{
    uint8_t flag;
    uint32_t v;

    func_02021338(0xb3);
    flag = p[0x12c];
    if (flag == 0) {
        v = func_020655dc(*(uint32_t *)((uint8_t *)*(void **)(p + 0xbc) + 0x98), 7, 1);
    } else {
        v = func_020655dc(*(uint32_t *)((uint8_t *)*(void **)(p + 0xbc) + 0x98), 8, 1);
    }
    func_02056bc0(p + 0x14, (void *)v);
    v = func_020655b8(*(uint32_t *)((uint8_t *)*(void **)(p + 0xbc) + 0x98));
    func_02056bc0(p + 0x14, (void *)v);
    func_ov007_021b603c(p);
}
