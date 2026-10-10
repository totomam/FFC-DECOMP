#include "ffc/types.h"

void func_02056f88(void *p) {
    *(uint8_t *)((uint8_t *)p + 0x13) = 1;
    *(uint32_t *)((uint8_t *)p + 0x20) = 0;
    *(int32_t *)((uint8_t *)p + 0x18) = -1;
    *(uint32_t *)((uint8_t *)p + 0x28) = *(uint32_t *)((uint8_t *)p + 0x2c);
}
