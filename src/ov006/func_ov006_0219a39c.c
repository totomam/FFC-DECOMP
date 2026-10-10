#include "ffc/types.h"

extern void func_ov006_021997b0(uint32_t a, uint32_t b, uint16_t *c);

void func_ov006_0219a39c(uint32_t a, uint16_t v)
{
    uint16_t local = v;
    func_ov006_021997b0(a, 0xd, &local);
}
