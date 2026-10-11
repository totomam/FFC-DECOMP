#include "ffc/types.h"

extern void *func_ov006_021b49e4(uint32_t size, uint32_t align);
extern void *data_ov006_021bc7e0;

void func_ov006_021af9e0(void) {
    if (data_ov006_021bc7e0 == 0) {
        data_ov006_021bc7e0 = func_ov006_021b49e4(0x1e60, 0x20);
    }
}
