#include "ffc/types.h"

extern void func_02069288(void *object);
extern void func_ov007_0219add8(void *object);
extern void func_ov007_0219ae58(void *object);
extern uint8_t data_ov007_021c9700;

void func_ov007_0219b224(uint8_t *self)
{
    uint32_t *p;
    *(uint8_t *)(self + 0xd0) = 0;
    data_ov007_021c9700 = 0;
    func_02069288(*(void **)(self + 0xcc));
    p = *(uint32_t **)(self + 0xd4);
    p[3] = (p[3] & ~0xffu) | 2;
    func_02069288(*(void **)(self + 0xc0));
    func_02069288(*(void **)(self + 0xc4));
    func_ov007_0219add8(self);
    func_ov007_0219ae58(self);
}
