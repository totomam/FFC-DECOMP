#include "ffc/types.h"

extern void *func_02052d90(const void *mar, uint32_t index);

void func_0202232c(uint8_t *a)
{
    uint32_t i;
    uint32_t count;

    i = 0;
    count = *(uint32_t *)((uint8_t *)func_02052d90(*(void **)(a + 0x84), *(void **)(a + 0x88)) + 4);
    for (; i < count;) {
        uint8_t *m = (uint8_t *)func_02052d90(*(void **)(a + 0x84), *(void **)(a + 0x88));
        uint32_t off = *(uint32_t *)(m + 8);
        uint32_t idx = *(uint32_t *)(m + off + i * 4);
        int8_t v = *(int8_t *)(m + idx + 2);
        uint8_t *base = *(uint8_t **)(a + 0xa0);
        *(int32_t *)(base + i * 12 + 4) = v;
        i++;
        count = *(uint32_t *)((uint8_t *)func_02052d90(*(void **)(a + 0x84), *(void **)(a + 0x88)) + 4);
    }
}
