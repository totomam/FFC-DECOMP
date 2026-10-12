#include "ffc/types.h"

extern void func_02021338(uint32_t x);
extern uint32_t func_020655dc(void *obj, uint32_t mode, uint32_t flag);
extern void func_02056bc0(void *object, void *node);
extern uint32_t func_020655b8(void *obj);
extern void func_ov007_021aa50c(void *self);

void func_ov007_021aa0dc(uint8_t *self) {
    void *o;
    uint32_t n;

    func_02021338(0xb3);
    if (self[0x134] == 0) {
        o = *(void **)(*(uint8_t **)(self + 0xbc) + 0x98);
        n = func_020655dc(o, 7, 1);
    } else {
        o = *(void **)(*(uint8_t **)(self + 0xbc) + 0x98);
        n = func_020655dc(o, 8, 1);
    }
    func_02056bc0(self + 0x14, (void *)n);

    o = *(void **)(*(uint8_t **)(self + 0xbc) + 0x98);
    n = func_020655b8(o);
    func_02056bc0(self + 0x14, (void *)n);

    **(uint8_t **)(self + 0x144) = 0;
    func_ov007_021aa50c(self);
}
