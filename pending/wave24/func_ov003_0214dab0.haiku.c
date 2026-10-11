#include "ffc/types.h"

extern void *func_02052d90(void *mar, uint32_t index);
extern void *func_ov003_0214da1c(void *a, void *b, uint32_t c);

uint16_t func_ov003_0214dab0(uint8_t *a, uint32_t b, uint32_t flag)
{
    void *first = func_02052d90(*(void **)(a + 0x378), *(uint32_t *)(a + 0x37c));
    void *second = func_02052d90(*(void **)(a + 0x368), *(uint32_t *)(a + 0x36c));
    void *r = func_ov003_0214da1c(first, second, b);
    if (flag != 0) {
        return *(uint16_t *)((uint8_t *)r + 0xe);
    }
    return *(uint16_t *)((uint8_t *)r + 0x10);
}
