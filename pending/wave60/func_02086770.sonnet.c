#include "ffc/types.h"
extern uint32_t data_021414e8;
extern uint32_t data_02fe0000[];
void func_02086770(uint8_t *p) {
    data_021414e8 = (uint32_t)p;
    if (p != 0) {
        uint32_t *e = &data_02fe0000[0xfe0]; *(uint32_t *)((uint8_t*)p + (e - (uint32_t*)0x800)) = 0x597dfbd9;
    }
}
