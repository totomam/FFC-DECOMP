#include "ffc/types.h"

extern void func_ov002_0219b850(uint32_t v);
extern int func_ov002_02198e48(void);
extern uint32_t func_020655b8(uint32_t v);
extern uint32_t func_0203b744(void);
extern uint32_t func_020655dc(uint32_t v, int a, int b);
extern uint32_t func_0203b708(uint32_t v);
extern uint32_t func_0203b688(void);
extern void func_02056bc0(void *object, void *node);
extern uint32_t data_ov002_021d3bc0[];

uint32_t func_ov002_021b0b08(uint8_t *self)
{
    uint32_t r4, r5, r6, r7, s0;
    uint8_t *p = self;

    func_ov002_0219b850(*(uint32_t *)(p + 0x130));
    if (func_ov002_02198e48() == 1) {
        return 0;
    }
    r7 = func_020655b8(*(uint32_t *)(p + 0x128));
    s0 = func_0203b744();
    r6 = func_020655dc(*(uint32_t *)(p + 0x128), 1, 0);
    r5 = func_0203b708(data_ov002_021d3bc0[*(uint32_t *)(p + 0xc4)]);
    r4 = func_0203b688();
    func_02056bc0((void *)r4, (void *)r5);
    func_02056bc0((void *)r4, (void *)r6);
    func_02056bc0((void *)r4, (void *)s0);
    func_02056bc0((void *)r4, (void *)r7);
    return r4;
}
