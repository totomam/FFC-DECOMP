#include "ffc/types.h"

extern void func_ov006_0219ef5c(void *p, uint32_t x, int n);
extern uint16_t func_ov006_0219f0a4(void);
extern uint16_t func_ov006_0219f038(uint16_t v);

void func_ov006_0219dd94(int n, uint8_t *p, uint32_t x)
{
    int i;
    for (i = 0; i < n; i++) {
        func_ov006_0219ef5c(p, x, 6);
        *(uint16_t *)(p + 6) = func_ov006_0219f0a4();
        *(uint16_t *)(p + 6) = func_ov006_0219f038(*(uint16_t *)(p + 6));
        p += 8;
    }
}
