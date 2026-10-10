#include "ffc/types.h"

extern void *func_02056dd4(void *o);
extern void func_0206047c(uint32_t v);
extern void *func_ov007_021a8f78(void *object);
extern void func_020558d8(void *object);
extern void func_02056db0(void *object);
extern uint32_t data_ov007_021c466c;
extern uint32_t data_ov007_021c4688;

void *func_ov007_021a79d0(void *obj)
{
    uint8_t *p = (uint8_t *)obj;

    *(uint32_t **)p = &data_ov007_021c466c;
    *(uint32_t **)(p + 0x80) = &data_ov007_021c4688;
    func_0206047c(*(uint32_t *)((uint8_t *)func_02056dd4(obj) + 0x20));
    func_ov007_021a8f78(p + 0xf8);
    func_020558d8(p + 0x80);
    func_02056db0(obj);
    return obj;
}
