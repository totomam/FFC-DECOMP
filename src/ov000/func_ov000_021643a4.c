#include "ffc/types.h"

extern uint8_t *data_ov000_0217096c;

void func_ov000_021643a4(int32_t idx)
{
    if (data_ov000_0217096c != 0) {
        int32_t off = idx * 0x38;
        *(uint32_t *)((uint8_t *)data_ov000_0217096c + off + 0xc) = 0;
        *(uint32_t *)((uint8_t *)data_ov000_0217096c + off + 0x10) = 0;
        *(uint32_t *)((uint8_t *)data_ov000_0217096c + off + 0x14) = 0;
        *(uint32_t *)((uint8_t *)data_ov000_0217096c + off + 0x18) = 0;
        *(uint8_t *)((uint8_t *)data_ov000_0217096c + off + 0x1c) = 0;
        *(uint32_t *)((uint8_t *)data_ov000_0217096c + off + 4) = 0;
        *(uint32_t *)((uint8_t *)data_ov000_0217096c + off + 8) = 0;
        *(uint8_t *)((uint8_t *)data_ov000_0217096c + off + 0x1d) = 0;
        *(uint16_t *)((uint8_t *)data_ov000_0217096c + off + 0x22) = 0;
    }
}
