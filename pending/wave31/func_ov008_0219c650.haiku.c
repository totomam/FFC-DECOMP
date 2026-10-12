#include "ffc/types.h"

extern uint32_t func_02056aec(void);
extern uint32_t func_0203bf90(int x);
extern uint32_t func_0203bf7c(int x);
extern uint32_t func_0203b6fc(void);
extern uint32_t func_0203b708(int x);
extern void func_02056bc0(void *object, void *node);

void func_ov008_0219c650(uint8_t *p)
{
    uint8_t *t;
    uint32_t **pp;
    uint32_t r7;
    uint32_t s;
    uint32_t r4;
    uint32_t r6;
    uint32_t r0;

    pp = (uint32_t **)(p + 0xdc);
    **pp = 0xffffffffu;
    r7 = func_02056aec();
    s = func_0203bf90(30);
    r4 = func_0203bf7c(30);
    r6 = func_0203b6fc();
    func_02056bc0((void *)r6, (void *)r4);
    func_02056bc0((void *)r6, (void *)s);
    r0 = func_0203b708(30);
    t = p + 0x14;
    func_02056bc0(t, (void *)r0);
    func_02056bc0(t, (void *)r6);
    func_02056bc0(t, (void *)r7);
}
