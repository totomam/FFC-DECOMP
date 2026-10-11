#include "ffc/types.h"

extern void func_0201f004(uint32_t a, uint32_t b);
extern void *func_02056aec(void *p);
extern void *func_0203bf7c(uint32_t x);
extern void *func_0203b708(uint32_t x);
extern void func_02056bc0(void *object, void *node);
extern uint32_t data_020b93b8;

void func_ov008_021a22d8(void *p)
{
    uint8_t *b = (uint8_t *)p;
    void *r4;
    void *r6;
    void *r1;
    uint8_t *obj;

    func_0201f004(data_020b93b8, b[0x144]);
    r4 = func_02056aec(p);
    r6 = func_0203bf7c(0x1e);
    r1 = func_0203b708(0x1e);
    obj = b + 0x14;
    func_02056bc0(obj, r1);
    func_02056bc0(obj, r6);
    func_02056bc0(obj, r4);
}
