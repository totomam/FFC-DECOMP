#include "ffc/types.h"

extern void func_ov006_021b20f0(int32_t arg);

void func_ov006_021b2674(void *p)
{
    if (((uint16_t *)((uint8_t *)p + 2))[0] != 0) {
        func_ov006_021b20f0(10);
    } else {
        func_ov006_021b20f0(0);
    }
}
