#include "ffc/types.h"

extern uint32_t data_021414e8;
extern uint8_t data_02fe0000[];

uint32_t func_02086770(uint32_t p) {
    data_021414e8 = p;
    if (p != 0) {
        *(uint32_t *)(p + (uint32_t)data_02fe0000 + 0x3f80 - 0x800) = 0x597dfbd9;
    }
}
