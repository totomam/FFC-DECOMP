#include "ffc/types.h"

extern uint32_t data_020b8e44;
extern uint32_t data_020b93b8;
extern uint32_t func_02019760(uint32_t);
extern void func_0201e9e4(uint32_t);
extern void func_ov010_021beb20(void *);
extern void func_ov010_021bd4f0(void *, void *, uint32_t, uint32_t, void *, uint32_t);
extern uint8_t data_ov010_021d1804[];
extern uint8_t data_ov010_021d1894[];

void func_ov010_021bea38(uint8_t *p)
{
    *(uint32_t *)(p + 0x128) = func_02019760(data_020b8e44);
    func_0201e9e4(data_020b93b8);
    func_ov010_021beb20(p);
    func_ov010_021bd4f0(p, data_ov010_021d1894, 0x50, 0x128 + 0xda, data_ov010_021d1804, 1);
}
