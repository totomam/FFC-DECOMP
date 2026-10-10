#include "ffc/types.h"

extern uint32_t data_021414e8;
extern uint8_t data_02fe0000[];

void func_02086770(uint32_t p) {
    data_021414e8 = p;
    if (p != 0) {
        uint32_t a = (uint32_t)data_02fe0000 + 0x3f80;
        int32_t d = (uint8_t *)a - (uint8_t *)0x800;
        *(uint32_t *)(p + d) = 0x597dfbd9;
    }
}
