#include "ffc/types.h"

extern uint8_t *data_ov006_021bc820;
extern void func_020878ac(uint32_t a, uint32_t b);
extern void func_02082908(uint32_t a, uint32_t b, uint32_t c);
extern void func_02082960(uint32_t a, uint32_t b, uint32_t c);

void func_ov006_021b43e0(uint32_t unused, uint8_t *flag)
{
    if (*flag == 0) {
        return;
    }
    if (flag == data_ov006_021bc820 + 0x67c) {
        uint32_t sz = 0x6000;
        func_020878ac(*(uint32_t *)(data_ov006_021bc820 + 0x638), sz);
        func_02082908(*(uint32_t *)(data_ov006_021bc820 + 0x638), 0, sz);
    } else {
        uint32_t sz = 0x3000;
        func_020878ac(*(uint32_t *)(data_ov006_021bc820 + 0x668), sz);
        func_02082960(*(uint32_t *)(data_ov006_021bc820 + 0x668), sz, sz);
    }
    *flag = 0;
}
