#include "ffc/types.h"

extern uint8_t *data_ov006_021bc6a8;
extern void func_ov006_021a3884(void);
extern void func_ov006_021b5770(int a, void (*f)(void));

void func_ov006_021a3854(int a) {
    *(int8_t *)(data_ov006_021bc6a8 + 0x16) = -1;
    *(uint16_t *)(data_ov006_021bc6a8 + 0x14) += 1;
    if (*(uint16_t *)(data_ov006_021bc6a8 + 0x14) >= 4) {
        *(uint16_t *)(data_ov006_021bc6a8 + 0x14) = 0;
        func_ov006_021b5770(a, func_ov006_021a3884);
    }
}
