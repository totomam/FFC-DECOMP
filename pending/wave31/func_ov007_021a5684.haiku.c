#include "ffc/types.h"

extern uint8_t *func_02056dd4(void);
extern void func_0206047c(uint32_t v);
extern void func_0205d620(void *p);
extern void func_02065874(void *p);
extern void func_ov007_021a6cb4(void *p);
extern void func_0200d5ec(void *p);
extern void func_020558d8(void *p);
extern void func_02056db0(void *p);
extern uint32_t data_ov007_021c3e10[];
extern uint32_t data_ov007_021c3e2c[];

uint8_t *func_ov007_021a5684(uint8_t *self)
{
    *(uint32_t **)self = data_ov007_021c3e10;
    *(uint32_t **)(self + 0x80) = data_ov007_021c3e2c;
    func_0206047c(*(uint32_t *)(func_02056dd4() + 0x20));
    func_0205d620(self + 0xf4);
    func_02065874(self + 0xe0);
    func_ov007_021a6cb4(self + 0xd4);
    func_0200d5ec(self + 0xc8);
    func_020558d8(self + 0x80);
    func_02056db0(self);
    return self;
}
