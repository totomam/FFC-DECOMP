#include "ffc/types.h"

extern uint32_t func_02056aec(void *obj);
extern uint32_t func_0203b708(uint32_t x);
extern void func_02056bc0(void *object, void *node);

void func_ov007_021b46d0(void *self, int v)
{
    uint8_t *p = (uint8_t *)self;
    uint32_t t, u;

    if (v == *(int *)(p + 0xc8)) {
        v = 1;
    } else if (v == *(int *)(p + 0xcc)) {
        v = 0;
    } else if (v == *(int *)(p + 0xb8)) {
        v = 2;
    } else if (v == *(int *)(p + 0xbc)) {
        v = 3;
    } else if (v == *(int *)(p + 0xc0)) {
        v = 4;
    } else if (v == *(int *)(p + 0xc4)) {
        v = 5;
    } else {
        goto done;
    }
    *(int *)(*(uint8_t **)(p + 0xd0)) = v;

done:
    t = func_02056aec(self);
    u = func_0203b708(0x1e);
    self = (uint8_t *)self + 0x14;
    func_02056bc0(self, (void *)u);
    func_02056bc0(self, (void *)t);
}
