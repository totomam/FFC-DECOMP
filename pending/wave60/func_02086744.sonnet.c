#include "ffc/types.h"
extern uint8_t data_02fe0000[];
void func_02086744(void) {
    uint32_t *p = (uint32_t*)data_02fe0000;
    p[0xfdf] = 0xfddb597d;
    p[0xfe0 - 0x200] = 0x7bf9dd5b;
}
