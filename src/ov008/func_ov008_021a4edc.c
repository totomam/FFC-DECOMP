#include "ffc/types.h"

extern void *func_02052d90(void *mar, uint32_t index);

uint16_t func_ov008_021a4edc(uint8_t *p, uint32_t index) {
    uint8_t *base = (uint8_t *)func_02052d90(*(void **)(p + 0xbc), *(uint32_t *)(p + 0xc0));
    return *(uint16_t *)(base + *(uint32_t *)(base + 0xc) + (index << 2) + 2);
}
