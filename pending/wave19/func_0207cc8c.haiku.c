#include "ffc/types.h"

extern void func_02084a0c(uint32_t a, void *p, uint32_t n);
extern void func_020878ac(void *p, uint32_t n);
extern void func_020891a8(uint32_t t, void *f);
extern void func_0207ceb0(void);
extern uint8_t data_02140760[];
extern void *data_021407c0;

void func_0207cc8c(void)
{
    data_021407c0 = data_02140760;
    func_02084a0c(0, data_02140760, 0x60);
    func_020878ac(data_02140760, 0x60);
    func_020891a8(0xb, func_0207ceb0);
}
