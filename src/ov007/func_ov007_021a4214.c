#include "ffc/types.h"

extern uint8_t data_ov007_021c3dc0[];
extern uint8_t data_ov007_021c3ddc[];
extern void *func_02056dd4(void *p);
extern void func_0206047c(void *p);
extern void func_020558d8(void *p);
extern void func_02056db0(void *p);

void *func_ov007_021a4214(void *p)
{
    uint8_t *self = (uint8_t *)p;
    *(uint8_t **)self = data_ov007_021c3dc0;
    *(uint8_t **)(self + 0x80) = data_ov007_021c3ddc;
    func_0206047c(*(void **)((uint8_t *)func_02056dd4(p) + 0x20));
    func_020558d8(self + 0x80);
    func_02056db0(self);
    return self;
}
