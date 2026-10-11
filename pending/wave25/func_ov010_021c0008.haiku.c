#include "ffc/types.h"

extern uint8_t data_ov010_021d1acc[];
extern void func_02056844(uint32_t v);
extern void func_020367a8(void *p);
extern void func_0200d5ec(void *p);
extern void func_020695d0(void *p);

void *func_ov010_021c0008(void *p)
{
    uint8_t *b = (uint8_t *)p;
    uint32_t v;

    *(void **)b = data_ov010_021d1acc;
    v = *(uint32_t *)(b + 0x180);
    if (v != 0) {
        func_02056844(v);
        *(uint32_t *)(b + 0x180) = 0;
    }
    func_020367a8(b + 0x124);
    func_0200d5ec(b + 0xf4);
    func_020695d0(b);
    return p;
}
