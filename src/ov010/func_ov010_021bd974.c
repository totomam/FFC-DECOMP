#include "ffc/types.h"

extern uint32_t func_02056aec(void *owner);
extern uint32_t func_0203c114(uint32_t a, uint32_t b);
extern void *func_02056b10(void *owner);
extern void func_02056bc0(void *object, void *node);
extern void func_02021338(uint32_t arg);
extern uint32_t data_0209de48;
extern uint32_t data_0209de44;

void func_ov010_021bd974(void *p, uint32_t idx)
{
    uint8_t *self = (uint8_t *)p;
    uint8_t *obj;
    uint32_t r5;
    uint32_t r6;
    void *r0;

    if (*(uint32_t *)(self + 0x100) == idx) {
        return;
    }
    switch (idx) {
    case 0:
        **(uint32_t **)(self + 0xe0) = 1;
        break;
    case 1:
        **(uint32_t **)(self + 0xe0) = 2;
        break;
    case 2:
        **(uint32_t **)(self + 0xe0) = 3;
        break;
    case 3:
        **(uint32_t **)(self + 0xe0) = 10;
        break;
    default:
        return;
    }

    r5 = func_02056aec(self);
    r6 = func_0203c114(data_0209de48, data_0209de44);
    r0 = func_02056b10(*(void **)(self + 0xf0));
    obj = self + 0x14;
    func_02056bc0(obj, r0);
    func_02056bc0(obj, (void *)r6);
    func_02056bc0(obj, (void *)r5);
    func_02021338(0xb7);
}
