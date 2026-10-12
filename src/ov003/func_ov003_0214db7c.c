#include "ffc/types.h"

extern void *func_02052d90(const void *mar, uint32_t index);
extern void *func_ov003_0214da1c(void *a, void *b, void *c);

void func_ov003_0214db7c(uint8_t *a, void *b, uint32_t **out)
{
    uint32_t *first;
    uint8_t *t;
    uint32_t i;

    first = func_02052d90(*(void **)(a + 0x378), *(void **)(a + 0x37c));
    t = func_ov003_0214da1c(first, func_02052d90(*(void **)(a + 0x368), *(void **)(a + 0x36c)), b);
    for (i = 0; i < 3; i++) {
        if (out[i] != 0) {
            *out[i] = *(uint16_t *)(t + *(uint32_t *)(t + 0x1c) + i * 2);
        }
    }
}
