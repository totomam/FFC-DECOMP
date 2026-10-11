#include "ffc/types.h"

extern void func_ov006_0219cd40(uint8_t *p, uint32_t v);
extern void func_ov006_0219adec(int32_t a, uint32_t b, uint32_t c);
extern uint32_t data_ov006_021ba160;

void func_ov006_02199e68(uint8_t a, uint32_t b)
{
    uint8_t buf[8];
    buf[0] = a;
    func_ov006_0219cd40(buf, data_ov006_021ba160);
    func_ov006_0219adec(6, b, data_ov006_021ba160);
}
