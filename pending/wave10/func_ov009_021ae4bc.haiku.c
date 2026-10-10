#include "ffc/types.h"

extern uint8_t *func_02056aec(uint8_t *p);
extern uint8_t *func_0203c058(int32_t x);
extern uint8_t *func_0203b6fc(uint8_t *p);
extern void func_02056bc0(void *object, void *node);
extern uint8_t *func_0203b708(int32_t x);

void func_ov009_021ae4bc(uint8_t *a)
{
    uint8_t *r6 = func_02056aec(a);
    uint8_t *r4 = func_0203c058(30);
    uint8_t *r7 = func_0203b6fc(r4);
    func_02056bc0(r7, r4);
    uint8_t *t = func_0203b708(30);
    uint8_t *o = a + 0x14;
    func_02056bc0(o, t);
    func_02056bc0(o, r7);
    func_02056bc0(o, r6);
}
