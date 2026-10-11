#include "ffc/types.h"

extern uint32_t data_ov002_021d3ba8[];

uint32_t func_ov002_021ad4e4(uint32_t a, uint32_t b) {
    switch (a) {
    case 0:
        return data_ov002_021d3ba8[b];
    case 1:
        return 0xb4 - data_ov002_021d3ba8[b];
    default:
        return 0;
    }
}
