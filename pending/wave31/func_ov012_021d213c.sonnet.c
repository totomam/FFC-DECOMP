#include "ffc/types.h"

extern uint32_t func_02056aec(void);
extern uint32_t func_0203bfe0(uint32_t x);
extern uint32_t func_0203bfcc(uint32_t x);
extern uint32_t func_0203b6fc(void);
extern void func_02056bc0(void *object, void *node);
extern uint32_t func_0203b708(uint32_t x);

void func_ov012_021d213c(void *obj)
{
    uint8_t *p = (uint8_t *)obj;
    uint8_t *q;
    uint32_t r7;
    uint32_t s;
    uint32_t r4;
    uint32_t r6;
    uint32_t t;

    p[0x131] = 0;
    r7 = func_02056aec();
    s = func_0203bfe0(0x1e);
    r4 = func_0203bfcc(0x1e);
    r6 = func_0203b6fc();
    func_02056bc0((void *)r6, (void *)r4);
    func_02056bc0((void *)r6, (void *)s);
    t = func_0203b708(0x1e);
    q = p + 0x14;
    func_02056bc0(q, (void *)t);
    func_02056bc0(q, (void *)r6);
    func_02056bc0(q, (void *)r7);
}
