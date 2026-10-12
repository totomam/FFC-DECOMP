#include "ffc/types.h"

extern void func_02005988(void *dst, void *src);
extern void *func_020059cc(void *object);
extern uint32_t func_0203d96c(void *obj, uint32_t arg, void *a, void *b);
extern uint8_t data_020aeec8[];

uint32_t func_0203d8f8(void *obj, uint32_t arg) {
    uint8_t b1[12];
    uint8_t b2[12];
    uint32_t r;

    func_02005988(b1, data_020aeec8);
    func_02005988(b2, data_020aeec8);
    r = func_0203d96c(obj, arg, b1, b2);
    func_020059cc(b2);
    func_020059cc(b1);
    return r;
}
