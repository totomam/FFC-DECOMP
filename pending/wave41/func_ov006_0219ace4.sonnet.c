#include "ffc/types.h"

extern uint32_t data_ov006_021b57d8[];

int func_ov006_0219ace4(uint32_t idx, uint32_t addr, uint32_t size) {
    switch (data_ov006_021b57d8[idx]) {
    case 2:
        if (addr >= 0x27ffe00u && addr + size <= 0x27fff60u) return 1;
        break;
    case 0:
        if (addr >= 0x2000000u && addr + size <= 0x22C0000u) return 1;
        break;
    case 1:
        if (addr >= 0x22C0000u && addr + size <= 0x2300000u) return 1;
        if (addr >= 0x2000000u && addr + size <= 0x2300000u) return 1;
        break;
    default: return 0;
    }
    return 0;
}
