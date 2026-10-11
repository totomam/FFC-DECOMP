#include "ffc/types.h"

extern uint32_t data_ov000_0216e294[];
extern void func_0208763c(uint8_t *p);
extern void func_02087678(uint8_t *p);

uint32_t func_ov000_0215573c(void)
{
    uint8_t *p;
    uint32_t v;

    p = (uint8_t *)data_ov000_0216e294[1];
    if (p == 0) {
        return 0x16;
    }
    func_0208763c(p + 0x13d8);
    p = (uint8_t *)data_ov000_0216e294[1];
    v = *(uint32_t *)(p + 0x1004);
    func_02087678(p + 0x13d8);
    return v;
}
