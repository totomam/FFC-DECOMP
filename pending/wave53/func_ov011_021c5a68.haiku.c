#include "ffc/types.h"

extern void func_02056c4c(uint32_t x);
extern uint32_t func_0203b708(uint32_t x);
extern void func_02056bc0(void *object, uint32_t node);
extern uint32_t func_020215a4(uint32_t a, uint32_t b);
extern uint32_t func_02056aec(void *object);
extern uint32_t func_ov009_021a39f4(uint32_t x);
extern uint32_t func_0203c12c(uint32_t a, uint32_t b);
extern uint32_t func_0203c114(uint32_t a, uint32_t b);
extern uint32_t func_0203b6fc(void);
extern uint32_t data_0209de40;
extern uint32_t data_0209ddfc;
extern uint32_t data_0209ddf4;

void func_ov011_021c5a68(uint8_t *a0)
{
    uint32_t *q;
    uint32_t *pp;
    uint32_t r7, s0, r4, r6, s4, t, v;
    uint8_t *obj;

    func_02056c4c(*(uint32_t *)(a0 + 0xfc));

    q = *(uint32_t **)(a0 + 0xd0);
    q[3] = (q[3] & ~0xffu) | 2;

    func_02056bc0(a0 + 0x14, func_0203b708(data_0209de40));

    pp = *(uint32_t **)(a0 + 0xf8);
    if (*pp != (uint32_t)-1 && *pp != *(uint32_t *)(a0 + 0x124)) {
        v = func_020215a4((uint32_t)-1, data_0209ddfc >> 1);
        func_02056bc0(a0 + 0x14, v);
    }

    r7 = func_02056aec(a0);
    s0 = func_ov009_021a39f4(*(uint32_t *)(a0 + 0xf0));

    r4 = data_0209ddf4;
    r6 = data_0209ddfc;
    s4 = func_0203c12c(r6, r4);
    r4 = func_0203c114(r6, r4);

    t = func_0203b6fc();
    func_02056bc0((void *)t, r4);
    func_02056bc0((void *)t, s4);

    obj = a0 + 0x14;
    func_02056bc0(obj, t);
    func_02056bc0(obj, s0);
    func_02056bc0(obj, r7);
}
