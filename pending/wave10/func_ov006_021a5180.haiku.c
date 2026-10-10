#include "ffc/types.h"

extern uint8_t *data_ov006_021bc6fc;
extern void func_ov006_021a4b14(uint8_t a, int b, int c);
extern void func_ov006_021b5770(int a, void (*fn)(void));
extern void func_ov006_021a51bc(void);

void func_ov006_021a5180(int a)
{
    uint8_t *p = data_ov006_021bc6fc;
    uint8_t idx = (uint8_t)**(uint32_t **)(p + 0x60);
    int n = idx + 12;
    func_ov006_021a4b14(p[0x11d], 1, n);
    if (n >= 0xc0) {
        func_ov006_021b5770(a, func_ov006_021a51bc);
    }
}
