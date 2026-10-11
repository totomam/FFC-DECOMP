#include "ffc/types.h"

extern uint8_t *data_ov006_021bc7f8;
extern void func_ov006_021b17f8(void);
extern void func_ov006_021b5770(uint32_t a, void (*b)(void));

void func_ov006_021b17d4(uint32_t a) {
    data_ov006_021bc7f8[0x1d]++;
    if (data_ov006_021bc7f8[0x1d] >= 8) {
        func_ov006_021b5770(a, func_ov006_021b17f8);
    }
}
