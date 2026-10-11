#include "ffc/types.h"

extern void *data_02140e00[];
extern uint32_t *data_021407c0;
extern void func_0207d55c(void);
extern void func_0207db64(void);
extern void func_0207d600(int x);

void func_0207d8b0(uint8_t *p)
{
    uint32_t a = *(uint32_t *)(p + 0x500);
    uint32_t b = *(uint32_t *)(p + 0x4fc);
    uint32_t c = *(uint32_t *)(p + 0x504);
    ((void (*)(int, uint32_t, uint32_t, uint32_t))data_02140e00[1])(0, a, b, c);
    func_0207d55c();
    func_0207db64();
    func_0207d600(8);
    *data_021407c0 = 0;
}
