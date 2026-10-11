#include "ffc/types.h"

extern uint8_t *func_ov006_021afd28(int a);
extern void func_ov006_021afd4c(int a);
extern void func_ov006_021abc4c(void);
extern uint8_t data_ov006_021bc78c[];

void func_ov006_021ab874(int a)
{
    uint8_t *p = func_ov006_021afd28(a);
    if (p[0xf6] != a) {
        uint8_t *q = *(uint8_t **)(data_ov006_021bc78c + 8);
        q[0x43] = (uint8_t)a;
        func_ov006_021afd4c(a);
        func_ov006_021abc4c();
    }
}
