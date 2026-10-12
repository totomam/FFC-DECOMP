#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Pair;

extern uint32_t func_0203bf68(uint32_t x);
extern uint32_t func_ov003_0217897c(void *obj, Pair p);
extern uint32_t func_0203b708(uint32_t x);
extern uint32_t func_0203bf90(uint32_t x);
extern void func_02056bc0(void *object, void *node);
extern Pair data_ov003_0217be2c;
extern Pair data_ov003_0217be34;
extern uint8_t data_0209debc;
extern uint8_t data_0209dea4;
extern uint8_t data_0209dec0;

void func_ov003_021788c8(void *obj)
{

    uint32_t r4, r6, r7, t0, t1, t2, t3, a4;

    r4 = func_0203bf68(1);
    r6 = func_ov003_0217897c(obj, data_ov003_0217be2c);
    t0 = func_0203b708(data_0209debc << 1);
    r7 = func_ov003_0217897c(obj, data_ov003_0217be34);
    t1 = func_0203bf90(0x1e);
    t2 = func_0203b708(data_0209dea4 << 1);
    t3 = func_0203bf68(0x1e);
    a4 = func_0203b708(data_0209dec0 << 1);
    obj = (uint8_t *)obj + 0x14;
    func_02056bc0(obj, (void *)a4);
    func_02056bc0(obj, (void *)t3);
    func_02056bc0(obj, (void *)t2);
    func_02056bc0(obj, (void *)t1);
    func_02056bc0(obj, (void *)r7);
    func_02056bc0(obj, (void *)t0);
    func_02056bc0(obj, (void *)r6);
    func_02056bc0(obj, (void *)r4);
}
