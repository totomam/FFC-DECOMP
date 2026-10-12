#include "ffc/types.h"

extern uint32_t data_ov006_021b57d8[];

int func_ov006_0219ace4(uint32_t idx, uint32_t addr, uint32_t size) {
    uint32_t t = data_ov006_021b57d8[idx];
    if (t == 0) {
        if (addr >= 0x2000000u && addr + size <= 0x22C0000u) return 1;
    } else if (t == 1) {
        if (addr >= 0x22C0000u) {
            if (addr + size <= 0x2300000u) return 1;
        } else if (addr >= 0x2000000u && addr + size <= 0x2300000u) {
            return 1;
        }
    } else if (t == 2) {
        if (addr >= 0x27ffe00u && addr + size <= 0x27fff60u) return 1;
    }
    return 0;
}
