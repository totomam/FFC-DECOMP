#include "ffc/types.h"

extern uint8_t data_020b8e70[];
extern void *func_02052d90(const void *mar, uint32_t index);

uint32_t func_02015a58(void) {
    uint8_t *p = (uint8_t *)func_02052d90(*(const void **)(data_020b8e70 + 0x70), *(uint32_t *)(data_020b8e70 + 0x74));
    return *(uint32_t *)(p + 0x20);
}
