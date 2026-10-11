#include "ffc/types.h"

extern uint8_t *data_ov006_021bc6fc;
extern uint32_t *func_ov006_021b3bf8(void *p, int x);
extern void func_ov006_021a4b14(uint8_t a, int b, int c);
extern void func_ov006_021b5770(void *a, void *f);
extern void func_ov006_021a5100(void);

void func_ov006_021a50b8(void *a0)
{
    uint32_t v = *func_ov006_021b3bf8(*(void **)(data_ov006_021bc6fc + 0xfc), 0);
    int n = (uint8_t)v + 0xc;
    func_ov006_021a4b14(data_ov006_021bc6fc[0x11d], 4, n);
    if (n >= 0xc0) {
        func_ov006_021b5770(a0, func_ov006_021a5100);
    }
}
