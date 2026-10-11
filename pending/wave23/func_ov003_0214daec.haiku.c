#include "ffc/types.h"

extern void *func_02052d90(const void *mar, uint32_t index);
extern void *func_ov003_0214da1c(void *a, void *b, uint32_t c);

uint16_t func_ov003_0214daec(uint8_t *p, uint32_t b) {
    void *first = func_02052d90(*(void **)(p + 0x378), *(uint32_t *)(p + 0x37c));
    void *second = func_02052d90(*(void **)(p + 0x368), *(uint32_t *)(p + 0x36c));
    uint8_t *r = (uint8_t *)func_ov003_0214da1c(first, second, b);
    return *(uint16_t *)(r + 0x12);
}
