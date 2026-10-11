#include "ffc/types.h"

extern uint8_t data_ov006_021bc800[];
extern int func_0208da38(void (*fn)(void));
extern void func_ov006_021b2140(void);
extern void func_ov006_021b2274(void);

int func_ov006_021b2234(void)
{
    if (*(uint32_t *)(*(uint8_t **)(data_ov006_021bc800 + 4) + 0x40) - 4 <= 2) {
        return 1;
    }
    if (func_0208da38(func_ov006_021b2274) != 2) {
        func_ov006_021b2140();
        return 0;
    }
    *(uint16_t *)(*(uint8_t **)(data_ov006_021bc800 + 4) + 0x50) = 0;
    *(uint16_t *)(*(uint8_t **)(data_ov006_021bc800 + 4) + 0x52) = 1;
    return 1;
}
