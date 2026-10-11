#include "ffc/types.h"

extern uint8_t *func_ov006_021afd28(uint8_t x);
extern void func_ov006_021afd4c(uint8_t x);
extern void func_ov006_021abc4c(void);
extern uint32_t data_ov006_021bc78c[];

void func_ov006_021ab874(uint8_t a)
{
    uint8_t *p = func_ov006_021afd28(a);
    uint8_t v = p[0xf6];
    if (v != a) {
        uint8_t *q = (uint8_t *)data_ov006_021bc78c[2];
        q[0x43] = a;
        func_ov006_021afd4c(a);
        func_ov006_021abc4c();
    }
}
