#include "ffc/types.h"

extern void *func_02056dd4(void);
extern void func_0206047c(uint32_t v);
extern void *func_020059cc(void *object);
extern void func_020558d8(void *object);
extern void func_02056db0(void *object);
extern uint32_t data_ov007_021c3de8;
extern uint32_t data_ov007_021c3e04;

void *func_ov007_021a2790(void *obj)
{
    uint8_t *p = (uint8_t *)obj;

    *(uint32_t **)p = &data_ov007_021c3de8;
    *(uint32_t **)(p + 0x80) = &data_ov007_021c3e04;
    func_0206047c(*(uint32_t *)((uint8_t *)func_02056dd4() + 0x20));
    func_020059cc(p + 0xe0);
    func_020558d8(p + 0x80);
    func_02056db0(obj);
    return obj;
}
