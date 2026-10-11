#include "ffc/types.h"

extern void func_ov006_021b578c(int a, void *b);
extern uint32_t func_02082268(void);
extern void func_020849ac(int a, uint32_t b, uint32_t c);
extern void func_ov006_021b49fc(void *p);
extern uint8_t data_ov006_021bc820;

void func_ov006_021b4444(uint8_t *p)
{
    uint32_t v;
    func_ov006_021b578c(1, *(void **)(p + 0x2c));
    if ((uint8_t *)p == (uint8_t *)(*(uint32_t *)&data_ov006_021bc820) + 0x610) {
        v = func_02082268();
        func_020849ac(0, v, 6u << 12);
    } else {
        v = func_02082268();
        func_020849ac(0, v, 3u << 12);
    }
    func_ov006_021b49fc(p + 0x28);
}
