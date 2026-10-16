#include "ffc/types.h"
extern uint32_t *func_02056dd4(void *p);
extern void func_0206047c(uint32_t a);
extern void func_0205d620(void *p);
extern void func_02065874(void *p);
extern void func_ov007_021a6cb4(void *p);
extern void func_0200d5ec(void *p);
extern void func_020558d8(void *p);
extern void func_02056db0(void *p);
extern uint8_t data_ov007_021c3e10[];
extern uint8_t data_ov007_021c3e2c[];
void *func_ov007_021a5684(uint8_t *p)
{
    *(void **)p = data_ov007_021c3e10;
    *(void **)(p + 0x80) = data_ov007_021c3e2c;
    func_0206047c(func_02056dd4(p)[8]);
    func_0205d620(p + 0xf4);
    func_02065874(p + 0xe0);
    func_ov007_021a6cb4(p + 0xd4);
    func_0200d5ec(p + 0xc8);
    func_020558d8(p + 0x80);
    func_02056db0(p);
    return p;
}
