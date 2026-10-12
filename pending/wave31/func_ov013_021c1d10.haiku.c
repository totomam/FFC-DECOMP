#include "ffc/types.h"

extern void func_020696f8(uint32_t x);
extern uint32_t func_0206cbf4(uint32_t x);
extern uint32_t func_02056b34(uint32_t x);
extern uint32_t func_ov013_021c0d18(uint32_t x);
extern void func_02056bc0(void *object, void *node);
extern uint32_t data_ov013_021c4bd8[2];

void func_ov013_021c1d10(uint8_t *self)
{
    uint8_t *obj;
    uint32_t a, b, c;
    uint32_t x, y;

    func_020696f8(*(uint32_t *)(self + 0xf0));
    a = func_0206cbf4(*(uint32_t *)(self + 0xc8));
    b = func_02056b34(*(uint32_t *)(self + 0xe4));
    c = func_ov013_021c0d18(*(uint32_t *)(self + 0xf0));
    obj = self + 0x14;
    func_02056bc0(obj, (void *)c);
    func_02056bc0(obj, (void *)b);
    func_02056bc0(obj, (void *)a);
    x = data_ov013_021c4bd8[0];
    y = data_ov013_021c4bd8[1];
    *(uint32_t *)(self + 0xb8) = x;
    *(uint32_t *)(self + 0xbc) = y;
}
