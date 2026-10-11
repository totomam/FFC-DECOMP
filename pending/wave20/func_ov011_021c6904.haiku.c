#include "ffc/types.h"

extern void func_020694ac(uint32_t *self, uint32_t a, uint32_t b);
extern uint8_t data_ov011_021cb9e4[];

uint32_t *func_ov011_021c6904(uint32_t *self, uint32_t a, uint32_t b)
{
    func_020694ac(self, b, 0);
    self[0] = (uint32_t)data_ov011_021cb9e4;
    self[46] = a;
    self[47] = b;
    self[50] = 0;
    return self;
}
