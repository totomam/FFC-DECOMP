#include "ffc/types.h"

extern void *func_02056dd4(void *p);
extern void func_0206047c(uint32_t v);
extern void func_0205d620(void *p);
extern void func_02065874(void *p);
extern void func_ov007_021a6cb4(void *p);
extern void func_0200d5ec(void *p);
extern void func_020558d8(void *p);
extern void func_02056db0(void *p);
extern void func_02056844(void *p);
extern uint8_t data_ov007_021c3e10[];
extern uint8_t data_ov007_021c3e2c[];

void *func_ov007_021a56d8(void *p)
{
    uint8_t *obj = (uint8_t *)p;
    *(uint8_t **)obj = data_ov007_021c3e10;
    *(uint8_t **)(obj + 0x80) = data_ov007_021c3e2c;
    func_0206047c(*(uint32_t *)((uint8_t *)func_02056dd4(p) + 0x20));
    func_0205d620(obj + 0xf4);
    func_02065874(obj + 0xe0);
    func_ov007_021a6cb4(obj + 0xd4);
    func_0200d5ec(obj + 0xc8);
    func_020558d8(obj + 0x80);
    func_02056db0(obj);
    func_02056844(obj);
    return obj;
}
