#include "ffc/types.h"

extern uint32_t func_0203c2ac(void);
extern void func_02060548(uint32_t a, uint32_t b);
extern void func_02060564(uint32_t a, uint32_t b, uint32_t c);
extern void func_02060574(uint32_t a, uint32_t b);
extern void func_02060584(uint32_t a, uint32_t b);
extern void func_0206056c(uint32_t a, uint32_t b);

void func_ov003_02151658(void)
{
    uint32_t r4 = func_0203c2ac();
    func_02060548(r4, 1);
    func_02060564(r4, 0x10, 0x10);
    func_02060574(r4, 0);
    func_02060584(r4, 0x3f);
    func_0206056c(r4, 0);
}
