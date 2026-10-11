#include "ffc/types.h"

extern void func_02084b2c(void *p, int c, uint32_t n);
extern void func_ov000_021640d0(uint32_t x);
extern void func_ov000_02163bfc(void);
extern uint8_t *data_ov000_0217096c;

void func_ov000_0216410c(uint8_t *p)
{
    data_ov000_0217096c = p;
    func_02084b2c(p, 0, 0x728);
    *(uint16_t *)(data_ov000_0217096c + 0x720) = 0x5b9;
    func_ov000_021640d0(0x4e20);
    func_ov000_02163bfc();
}
