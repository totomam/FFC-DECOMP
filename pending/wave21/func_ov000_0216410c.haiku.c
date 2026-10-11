#include "ffc/types.h"

extern uint8_t *data_ov000_0217096c;
extern void func_02084b2c(void *dst, int c, uint32_t n);
extern void func_ov000_021640d0(uint32_t arg);
extern void func_ov000_02163bfc(void);

void func_ov000_0216410c(uint8_t *p)
{
    uint32_t n = 0x728;
    data_ov000_0217096c = p;
    func_02084b2c(p, 0, n);
    *(uint16_t *)(data_ov000_0217096c + (n - 8)) = 0x5b9;
    func_ov000_021640d0(0x4e20);
    func_ov000_02163bfc();
}
