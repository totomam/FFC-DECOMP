#include "ffc/types.h"

extern void *func_02052d90(const void *mar, uint32_t index);

void *func_ov003_02153f98(void *self, uint32_t index)
{
    uint8_t *p = (uint8_t *)self;
    uint8_t *base = (uint8_t *)func_02052d90(*(void **)(p + 0xe4), *(uint32_t *)(p + 0xe8));
    uint32_t off = *(uint32_t *)(base + 0x5c);
    return base + off + index * 12;
}
